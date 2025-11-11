# Tapete de Sierpinski
.data	0x10010000       	 # Mapeia a tela de pixel a parti do endereço 0x10010000
frameBuffer:	.space 0x101004  # Reserva espaço para 513 x 513 pixels (cada um com 4 bytes) para o framebuffer

.text
.globl main
main:
	# Preenche todo o quadro com branco
	# X e Y representam as coordenadas de inicio da tela
	li $a0, 0           # inicia x com 0
	li $a1, 0           # inicia y com 0
	li $a2, 513         # largura
	li $a3, 513         # altura
	li $t0, -1          # represnta a cor branca em hex (0xFFFFFFFF)
	jal retangulo

	# Inicia recursão do tapete de sierpinski
	li $a0, 0           # inicia x0 com 0
	li $a1, 0           # inicia y0 com 0
	li $a2, 513         # tamanho inicial
	li $a3, 4           # profundidade total
	jal tapete
	
	# Encerra o programa
	li $v0, 10
	syscall

# Função delay para criar uma animação progressiva
delay:
	li $t0, 50000 # Quantidade de iteraçoes para gerar atraso
loopDelay:
	addi $t0, $t0, -1
	bnez $t0, loopDelay
	jr $ra

# Função tapete preenche os quadrados recursivamente
# Entradas: $a0=x0, $a1=y0, $a2=tamanho, $a3=nível
tapete:
	# legendas:
	# $a0 coordenada x de inicio da area
	# $a1 coordenada y de inicio da area
	# $a2 tamanho
	# $a3 nivel, profundidade restante da recursão
	# $sp (stack pointer) é o registrador da pilha
	
	beq $a3, $zero, fimTapete

	# Abre expaço na pilha com 7 palavras, 28 bytes
	addi $sp, $sp, -28
	sw $ra, 0($sp)
	sw $a0, 4($sp)    # x0
	sw $a1, 8($sp)    # y0
	sw $a2, 12($sp)   # tamanho
	sw $a3, 16($sp)   # nivel
	sw $s0, 20($sp)   # novoTamanho
	sw $s1, 24($sp)   # novoNivel

	# Calcula o novoTamanho = tamanho / 3
	li $t0, 3
	div $a2, $t0
	mflo $s0	  # s0 = novoTamanho

	# Calcula o novoNivel = nivel - 1
	addi $s1, $a3, -1 # s1 = novoNivel

	# Centraliza o quadrado preto dentro do bloco do tamanho atual
	lw $t1, 4($sp)     # x0
	lw $t2, 8($sp)     # y0
	add $a0, $t1, $s0
	add $a1, $t2, $s0
	move $a2, $s0      # largura = novoTamnho
	move $a3, $s0      # altura = NovoTamanho
	li   $t0, 0        # cor preta
	jal retangulo
	jal delay

	# Recursão nos 8 quadrados restantes
	# Cada bloco abaixo representa uma das partes ao redor do centro
	
	# Superior esquerdo
	lw $a0, 4($sp)
	lw $a1, 8($sp)
	move $a2, $s0
	move $a3, $s1
	jal tapete

	# Superior central
	lw $a0, 4($sp)
	add $a0, $a0, $s0
	lw $a1, 8($sp)
	move $a2, $s0
	move $a3, $s1
	jal tapete

	# Superior direito
	lw $a0, 4($sp)
	add $a0, $a0, $s0
	add $a0, $a0, $s0
	lw $a1, 8($sp)
	move $a2, $s0
	move $a3, $s1
	jal tapete

	# Meio esquerdo
	lw $a0, 4($sp)
	lw $a1, 8($sp)
	add $a1, $a1, $s0
	move $a2, $s0
	move $a3, $s1
	jal tapete

	# Meio direito
	lw $a0, 4($sp)
	add $a0, $a0, $s0
	add $a0, $a0, $s0
	lw $a1, 8($sp)
	add $a1, $a1, $s0
	move $a2, $s0
	move $a3, $s1
	jal tapete

	# Inferior esquerdo
	lw $a0, 4($sp)
	lw $a1, 8($sp)
	add $a1, $a1, $s0
	add $a1, $a1, $s0
	move $a2, $s0
	move $a3, $s1
	jal tapete

	# Inferiror central
	lw $a0, 4($sp)
	add $a0, $a0, $s0
	lw $a1, 8($sp)
	add $a1, $a1, $s0
	add $a1, $a1, $s0
	move $a2, $s0
	move $a3, $s1
	jal tapete

	# Inferior direito
	lw $a0, 4($sp)
	add $a0, $a0, $s0
	add $a0, $a0, $s0
    	lw $a1, 8($sp)
	add $a1, $a1, $s0
	add $a1, $a1, $s0
	move $a2, $s0
	move $a3, $s1
	jal tapete

	# Restaura os valores antigos
	lw $ra, 0($sp)
	lw $s0, 20($sp)
	lw $s1, 24($sp)
	# Desfaz a reverva na pilha
	addi $sp, $sp, 28

fimTapete:
	jr $ra

# Função retangulo desenha o retângulo no framebuffer 513×513
# Entrada: $a0=x, $a1=y, $a2=largura, $a3=altura, $t0=cor
retangulo:
	beq $a2, $zero, fimRetangulo
	beq $a3, $zero, fimRetangulo
	
	# Aponta para o inicio do framebuffer
	la  $t1, frameBuffer
	
	# Calcula o fim das colunas e linhas
	add $t9, $a0, $a2
	add $t8, $a1, $a3
	move $t4, $a1
#loop linhas Y
loopY:
	bge $t4, $t8, fimRetangulo
	move $t5, $a0
#loop colunas X
loopX:
	bge $t5, $t9, proxLinha
	mul $t6, $t4, 513      # 512 pois a largura da display bitmap é 512
	add $t6, $t6, $t5
	sll $t6, $t6, 2
	add $t7, $t1, $t6
	sw  $t0, 0($t7)
	addi $t5, $t5, 1
	j loopX
proxLinha:
	addi $t4, $t4, 1
	j loopY
fimRetangulo:
	jr $ra
