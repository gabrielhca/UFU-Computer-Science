--Escreva uma função diferentes para verificar se os elementos de uma lista são distintos.

diferente :: Eq a => [a] -> Bool
diferente [] = True
diferente (x:xs) 
	| x `elem` xs = False --verifica se x esta presente na cauda xs
	| otherwise   = diferente xs -- chamada recursiva

