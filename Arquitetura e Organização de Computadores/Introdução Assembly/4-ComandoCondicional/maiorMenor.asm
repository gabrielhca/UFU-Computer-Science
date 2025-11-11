.data
	maior: .asciiz "O numero é maior que zero."
	menor: .asciiz "O numero é menor que zero."
	igual: .asciiz "O numero é igual a zero."
.text
	#ler numero inteiro
	li $v0, 5 #o valor lido vai para $v0
	syscall
	
	move $t0, $v0
	
	beq $t0, $zero, imprimeIgual #rotulo
	bgt $t0, $zero, imprimeMaior #rotulo
	blt $t0, $zero, imprimeMenor #rotulo
	
	imprimeIgual:
		#imprime que o numero é zero
		li $v0, 4
		la $a0, igual
		syscall
		
		#encerra o programa
		li $v0, 10
		syscall
	
	imprimeMaior:
		#imprime que o numero é maior que zero
		li $v0, 4
		la $a0, maior
		syscall
		
		#encerra o programa
		li $v0, 10
		syscall
		
	imprimeMenor:
		#imprime que o numero é menor que zero
		li $v0, 4
		la $a0, menor
		syscall
		