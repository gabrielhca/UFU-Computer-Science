.data
	primosGemeos: .asciiz "Os pares dos numeros primos gemeos de 1 a 1000 é: "
	aChaves: .asciiz "{"
	fChaves: .asciiz "}"
	virgula: .asciiz ", "
.text
	.globl main

main:
	# imprime a mensagem primosGemeos
	li $v0, 4 # syscall para imprimir uma string
	la $a0, primosGemeos # carrega o endereço de primosGemeos
	syscall
	
	#inicia a contagem em 1
	li $t0, 1 #t0 = 1
	
loop:
	#define criterio de parada
	li $t1, 1000	
	bgt $t0, $t1, fim # se t0 > t1 finaliza o programa
	
	#verifica se é primo
	move $a0, $t0 # passa t0 como argunmento para funcao 
	jal numPrimo # chama a funcao primo
	beqz $v0, proxNum # Se não for primo, pula para o proximo numero
	
	#verifica se $t0 + 2 é primo 
	addi $a0, $t0, 2
	jal numPrimo
	beqz $v0, proxNum
	
	# Se ambos são primos, imprime o par
	li $v0, 4 # syscall para imprimir uma string
	la $a0, aChaves # string que sera impressa
	syscall
	
	li $v0, 1 # syscall para imprimir um inteiro
	move $a0, $t0 # primeiro numero do par
	syscall
	
	li $v0, 4
	la $a0, virgula
	syscall
	
	li $v0, 1
	addi $a0, $t0, 2 # segundo numero é o primeiro + 2
	syscall
	
	li $v0, 4 
	la $a0, fChaves
	syscall
	
	li $v0, 4
	la $a0, virgula
	syscall
	
proxNum:
	#incrementa o contador e volta para o loop
	addi $t0, $t0, 1 # t0 = t0 + 1
	j loop #pula para o inicio do loop
	
fim:
	li $v0, 10 # syscall para finalizar o programa
	syscall
	
# função que verifica se é um numero primo
# $v0 = 1 (TRUE) se for primo e $v0 = 0 (FALSE) se nao for primo

numPrimo:
	# 1 não é primo
	li $v0, 0 #retorna falso
	li $t2, 1 
	beq $a0, $t2, naoPrimo # se $a0 == 1 nao é primo

	# um numero primo so é divisivel por 1 e por ele mesmo
	# portanto podemos verificar apenas se é divisivel de 2 ate n/2
	# pois se ele não for divisivel por um numero menor que sua metade, tambem não é por um maior
	
	li $t2, 2 #contador inicia no 2
	move $t3, $a0 #numero que sera verificado
	#srl (shift right logical) move os bits para direita
	#mover n casas para direta é o equivalente a dividir por 2^n
	srl $t4, $t3, 1 #$t4 = $t3 / 2

loopPrimo:
	# portanto podemos confirmar que é primo se o valor de t2 for maior que a raiz quadrada
	bgt $t2, $t4, confirmPrimo # se $t2 > n/2, é primo
	div $t3, $t2 #divide $t3 por $t2
	mfhi $t5 #recebe o resto da divisão
	beqz $t5, naoPrimo # se $t5 == 0, não é primo
	addi $t2, $t2, 1 #incrementa o contador
	j loopPrimo

naoPrimo:
	li $v0, 0 #retorna zero (false) não é primo
	jr $ra #retorna pra quem chamou
	
confirmPrimo:
	li $v0, 1 #retorna um (TRUE) é primo
	jr $ra #retorna pra quem chamou
