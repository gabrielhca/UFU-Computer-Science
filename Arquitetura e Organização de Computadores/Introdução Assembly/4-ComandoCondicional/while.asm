#os laços de repetição são combinações de ifs e jumps

.data
	esp: .asciiz " "
.text
	#ler numero
	li $v0, 5
	syscall
	
	#copia de v0 em t0, pois vou usar v0 em outras coisas
	move $t0, $v0 #valor lido
	
	move $t1, $zero
	
	laco:
		bgt $t1, $t0, caiFora
		
		#imprime $t1
		li $v0, 1
		move $a0, $t1 #copia de t1 em a0
		syscall
		
		#imprime espaços em branco
		li $v0, 4
		la $a0, esp
		syscall
	
		addi $t1, $t1, 1
		j laco
	caiFora:
		