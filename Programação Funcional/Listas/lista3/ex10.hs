{-
Escreva uma função polimórfica para eliminar duplicatas consecutivas de uma lista. Exemplo:
comprime [1,1,1,1,2,3,3,1,1,4,5,5,5,5]
[1,2,3,1,4,5]
-}

comprime :: Eq a => [a] -> [a]
comprime [] = []
comprime (x:xs) = a : go x xs
	where
	  go _ [] = [] 
	  go prev (y:ys)
	    | prev == y = go prev ys --se prev == y ignora y e continua verificando a lista
	    | otherwise = y : go y ys -- se y for diferente, add y no resultado e atualiza prev para y na proxima chamada
	    
-- prev ultimo elemento na lista

