#não temos nada na memoria ram, por isso não sera usando .data
# .data é opcional, ja .text é obrigatorio em todos os programas
.text
	li $t0, 75 # t0 = 75
	li $t1, 25 # t1 = 25
	add $s0, $t0, $t1 # s0 = t0 + t1
	addi $s1, $s0, 36 # addi permite passar o valor inteiro de uma vez, como em 36, sem atribuições previas