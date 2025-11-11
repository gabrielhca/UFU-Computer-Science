#multiplicar numero por potencia de 2 é trivial para um computador
#basta realizar a operação shift left, que significa mover os bits para esquerda
#ao mover binarios para esquerda estamos multiplicando por 2
#se movermos duas casas estamos multiplicando por 4
#se movermos n casas estamos multiplicando por 2^n

.text
	li $t0, 18
	addi, $t1, $zero, 10
	
	#shift left logico
	sll $s1, $t1, 10 #multiplica por 2^10 = 1024
	
	mul $s0,$t0,$t1 #s0 = 18*15
	
	li $v0, 1
	move $a0, $s0 # move o valor de s0 para a0
	syscall
