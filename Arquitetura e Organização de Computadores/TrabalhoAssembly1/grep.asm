.data
	stringMaior: .asciiz "Digite a string maior: "
	stringMenor: .asciiz "Digite a string menor: "
	saida1: .asciiz "O string menor aparece "
	saida2: .asciiz " vezes no string maior"
	tamanhoMaior: .space 100 #reverva 100 bytes para string maior
	tamanhoMenor: .space 50 #reverva 50 bytes para string menor
.text
	.globl main
main:
	#imprime a mensagem da string maior:
	li $v0, 4 #imprime uma string
	la $a0, stringMaior
	syscall
	
	#registra a mensagem digitada
	li $v0, 8 #le uma string
	la $a0, tamanhoMaior #endereço onde a string sera armazenada
	li $a1, 100 #tamanho maximo
	syscall #le a string maior
	
	#imprime mensagem da string menor:
	li $v0, 4
	la $a0, stringMenor
	syscall
	
	#registra mensagem digitada
	li $v0, 8
	la $a0, tamanhoMenor #endereço onde a string sera armazenada
	li $a1, 50
	syscall
	
	#endereço base e iniciar contador de ocorrencia
	la $s0, tamanhoMaior #recebe endereço base da string maior
	la $s1, tamanhoMenor #recebe endereço base da string menor
	li $s2, 0 #contador de ocorrencias
	
	#comprimento da string menor
	la $t0, tamanhoMenor
	li $s3, 0 #guardara o tamanho da string menor
	
calculaMenor:
	lb $t1, 0($t0) #$t1 recebe o conteudo no endereço armazenado em $t0 mais 0 bytes
	beq $t1, 10, fimCalcMenor #se t1 == 10, indica que encontrou \n no fim da string
	beq $t1, 0, fimCalcMenor #se t1 == 0, indica que chegou ao fim da string
	addi $s3, $s3, 1 #conta mais um no tamanho da string
	addi $t0, $t0, 1 #anda um no endereço da string
	j calculaMenor #volta para inicio da função

fimCalcMenor:
	beq $s3, 0, fimPrograma #se a string ta vazia encerra o programa
	move $t0, $s0 #t0 muda para o ponteiro atual da string maior
	
busca:
	lb $t1, 0($t0) #$t1 recebe o conteudo no endereço armazenado em $t0 mais 0 bytes
	beq $t1, 10, fimBusca
	beq $t1, 0, fimBusca
	
	#procura uma ocorrencia na posição atual
	move $t2, $t0 #copia o ponteiro atual de maior para $t2
	move $t3, $s1 #copia o endereço base, pois iremos reiniciar a cada iteração
	li $t4, 0 #zera o contador de caracters $t4 para iniciar uma nova iteracao
		
comparaString:
	lb $t5, 0($t2) #recebe o caracter atual da stringMaior
    	lb $t6, 0($t3) #recebe o caracter atual da stringMenor

	#evita contar falsas ocorrencias "\n" ou "0"
    	beq $t5, 10, verifica 
	beq $t5, 0, verifica
    	beq $t6, 10, verifica
    	beq $t6, 0, verifica
	
	#compara se não são iguais
    	bne $t5, $t6, naoEncontrou

    	addi $t2, $t2, 1 #avança para o proximo caracter (stringMaior)
    	addi $t3, $t3, 1 #avança para o proximo caracter (stringMenor)
    	addi $t4, $t4, 1 #soma +1 a cada caracter igual
    	j comparaString

verifica:
	#verifica se a sequencia de caracter é igual a string menor
	beq $t4, $s3, encontrou
	j naoEncontrou

encontrou:
	addi $s2, $s2, 1 #soma contador de ocorrências

naoEncontrou:
	addi $t0, $t0, 1 #avanca para o proximo caractere na string maior
	j busca

fimBusca:
	#imprime resultado
	li $v0, 4
	la $a0, saida1
	syscall
	
	li $v0, 1
	move $a0, $s2 #move o contador para $a0
	syscall
	
	li $v0, 4
	la $a0, saida2
	syscall

fimPrograma:
	#finaliza o programa
	li $v0, 10
	syscall