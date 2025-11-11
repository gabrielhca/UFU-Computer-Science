{-
Escreva uma função polimórfica que, dada uma lista codificada em RLE, retorne a lista original. 
Exemplo:
> decodifica [(4,1),(1,2),(2,3),(2,1),(1,4),(4,5)]
[1,1,1,1,2,3,3,1,1,4,5,5,5,5]
-}

decodifica :: [(Int, a)] -> [a]
decodifica = concatMap (\(n, x) -> replicate n x)

--concatMap: Aplica uma função a cada elemento da lista e concatena os resultados
--replicate n x: Cria uma lista com n copias de x
