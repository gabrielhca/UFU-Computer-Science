{-
Defina a função transf::[a]->[a] que faz a seguinte transformação: recebe uma lista e, caso essa lista tenha pelo menos 4 elementos, troca o 1◦ com o 2◦ elemento, e o último com o penúltimo elemento da lista. Caso contrário, devolve a mesma lista. Por exemplo:
transf [1,2,3,4,5,6,7]
[2,1,3,4,5,7,6]
-}

transf :: [a] -> [a]
transf xs
	| length xs < 4 = xs
	| otherwise     = let (a:b:rest) = xs
			      (meio, ultimoDois) = splitAt (length rest - 2) rest
			  in b : a : meio ++ reverse ultimosDois
			  
