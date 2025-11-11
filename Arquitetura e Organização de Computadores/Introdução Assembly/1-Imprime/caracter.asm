.data
	caracter: .byte 'A'
.text
	li $v0, 4 #instrução para impressão
	la $a0, caracter #indica o endereço
	syscall
	li $v0, 10 #encerra o programa
	syscall