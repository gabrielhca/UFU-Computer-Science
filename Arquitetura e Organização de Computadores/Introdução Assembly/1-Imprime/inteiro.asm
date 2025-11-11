.data
	idade: .word 50
.text
	li $v0, 1
	lw $a0 idade
	syscall
