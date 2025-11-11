#dividir um numero por potencia de 2 é trivial para um computador
#basta realizar a operação shift right, que significa mover os bits para direita
#ao mover binarios para direita estamos dividindo por 2
#se movermos duas casas para direita estamos dividindo por 4
#se movermos n casas estamos dividindo por 2^n

.text
	li $t0, 32
	li $t1, 5
	
	#shift right logical
	# obs srl so consegue pegar a parte inteira
	srl Ss2, $t0, 2 #divide por 4
	
	div $t0, $t1
	
	#parte inteira em $s0
	#funcao move from lo
	mflo $s0
	
	#resto da divisão em $s1
	#funcao move from hi
	mfhi $s1