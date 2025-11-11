#funções

.data
	msg: .asciiz "Informe um numero positivo: "
	msgPar: .asciiz "É par!"
	msgImpar: .asciiz "É impar!"
.text
	.main
	#aqui implemento meu codigo principal
	la $a0, msg
	jal imprimeString
	jal leInteiro
	
	move $a0, $v0
	jal ehImpar
	beq $v0, $zero, imprimePar
	
	#se for impar, imprime e encerra
	la $a0, msgImpar
	jal imprimeString
	jal encerraPrograma
	
	imprimePar:
		la $a0, msgPar
		jal imprimeString
		jal encerraPrograma
	
	#função que verifica se o $a0 é impar
	#retorna 1 se for impar (TRUE)
	#retorna 0 se for par (FALSE)
	ehImpar:
		li $t0, 2
		div $a0, $t0
		
		mfhi $v0
		jr $ra
		
	#funcao para encerrar programa
	encerraPrograma:
		li $v0, 10
		syscall
	
	#funcao que recebe um strin em $a0 e a imprime
	imprimeString:
		li $v0, 4
		syscall
		jr $ra
		
	#funcao para le um inteiro e retorna em $v0
	leInteiro:
		li $v0, 5
		syscall
		jr $ra