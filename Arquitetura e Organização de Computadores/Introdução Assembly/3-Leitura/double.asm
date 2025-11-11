# pontos flutuantes
# float tem 32 bits assim como um registrador,
# double tem 64 bits potantando para doubleu usamos 2 registradores
# por isso usamos os registradores pares para o double

.data

	mgs: .asciiz "forneça um numero descimal: "
	zero: .double 0.0 #contante zero
.text
	#imprimindo mensagem para o usuario
	li $v0, 4
	la $a0, mgs
	syscall
	
	#lendo o numero
	li $v0, 7
	syscall #valor lido estara em $f0
	
	ldc1 $f2, zero
	add.d $f12, $f2, $f0
	
	#imprimindo o numero
	li $v0, 3
	syscall