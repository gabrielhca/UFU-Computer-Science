{-
Escreva uma função polimórfica que replique, consecutivamente, os itens de uma lista um dado número de vezes. 
Exemplo:
> replique [1,2,3,4] 4
[1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4]
-}

replique :: [a] -> Int -> [a]
replique [] _ = []
replique (x:xs) n = replicate n x ++ replique xs n

