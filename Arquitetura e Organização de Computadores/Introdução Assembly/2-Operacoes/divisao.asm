# ao realizar divisão, a parte inteira vai para lo e o resto vai para hi
# os valores de lo e hi devem ser transportados para outros registradores

.text
	li $t0, 32
	li $t1, 5
	
	div $t0, $t1 # divide 32 por 5, lo=6 e hi=2
	
	#parte inteira em $s0
	#funcao move from lo
	mflo $s0
	
	#resto da divisão em $s1
	#funcao move from hi
	mfhi $s1