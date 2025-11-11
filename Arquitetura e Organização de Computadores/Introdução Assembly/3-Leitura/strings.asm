#para ler string e seu tamanho temos que declarar-las na memoria ram, fazemos isso no .data
#strings são tratadas como arrays

.data
	pergunta: .asciiz "Qual é seu nome? "
	saudacao: .asciiz "Olá, "
	nome: .space 25 #tamanho da string

.text

	#impressao da pergunta
	li $v0, 4
	la $a0, pergunta
	syscall
	
	#leitura do nome
	li $v0, 8 #leitura da string
	la $a0, nome #coloca nome no registrador a0
	la $a1, 25 #informa o tamanho que queremos ler
	syscall
	
	#impressao da saudacao
	li $v0, 4
	la $a0, saudacao
	syscall
	
	#impressao do nome
	li $v0, 4
	la $a0, nome
	syscall
	