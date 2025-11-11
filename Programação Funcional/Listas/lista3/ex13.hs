{-
Defina uma função polimórfica que duplique, consecutivamente, os elementos de uma lista. 
Exemplo:
> duplique [1,2,3,4]
[1,1,2,2,3,3,4,4]
-}

duplique :: [a] -> [a]
duplique [] = []          -- Caso base: lista vazia
duplique (x:xs) = x : x : duplique xs  -- Caso recursivo: duplica o elemento atual

