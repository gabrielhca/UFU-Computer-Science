.data
	saudacao: .asciiz "Olá. Por Favor forneça sua idade: "
	saida: .asciiz "Sua idade é: "
.text
	li $v0, 4 #imprimindo uma string
	la $a0, saudacao 
	syscall #quando damos syscall o valor que o usuario digitou vai para v0
	
	li $v0, 5 #leitura de inteiros
	syscall #quando damos syscall o valor que o usuario digitou vai para v0
	
	#aqui vamos usar o valor de v0 novamente,mas v0 possui a informação digitada pelo usuario
	#para não perde essa informações, vamos usar uma variavel auxiliar para guarda a informação
	
	move $t0, $v0 #valor fornecido esta em t0
	li $v0, 4 #imprimindo uma string
	la $a0, saida
	syscall
	
	li $v0, 1 #imprimindo inteiro
	move $a0, $t0 #vamos imprimir a0, portantando vamos mover oq esta em t0 para a0
	syscall
	