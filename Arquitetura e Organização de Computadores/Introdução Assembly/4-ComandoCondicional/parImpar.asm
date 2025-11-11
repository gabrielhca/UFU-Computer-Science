#famoso if

.data
	msg: .asciiz "Informe um numero: "
	par: .asciiz "O numero é par!"
	impar: .asciiz "O numero é impar!"
	
.text
	#imprimindo mensagem para o usuario
	li $v0, 4
	la $a0, msg
	syscall
	
	#ler o numero
	li $v0,5
	syscall
	
	#divide o numero lido por 2
	li $t0, 2
	div $t0, $v0
	
	#armazena o resto da divisão por 2
	mfhi $t1
	
	#verifica se o resto da divisão é igual a zero
	beq $t1, $zero, imprimePar #se for par ele pula para o rotulo imprimePar, se não, imprime impar
	li $v0, 4
	la $a0, impar
	syscall
	
	#encerrando o programa
	li $v0, 10
	syscall
	
	#criando rotulo
	imprimePar:
		li $v0, 4
		la $a0, par
		syscall