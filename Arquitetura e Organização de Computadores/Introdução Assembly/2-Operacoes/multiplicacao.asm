.text
	#multiplicação comum
	li $t0, 18
	addi, $t1, $zero, 10
	mul $s0,$t0,$t1 #s0 = 18*15
	
	li $v0, 1
	move $a0, $s0 # move o valor de s0 para a0
	syscall
	