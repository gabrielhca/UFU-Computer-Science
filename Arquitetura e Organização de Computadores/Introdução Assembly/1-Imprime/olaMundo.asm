.data
	#area para dados da memoria principal
	
	msg: .asciiz "Olá, mundo!" #mensagem a ser exibida pelo usuario

.text
	#area para instruções do programa
	
	li $v0, 4 #instrução para impressão string
	la $a0, msg #indica o endereço em que esta a mensagem
	syscall #faça, imprima!