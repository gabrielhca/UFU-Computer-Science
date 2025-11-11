{-
Defina uma função que dada uma lista de inteiros, retorna o número de elementos de valor superior a um número n qualquer.
retornaSup 4 [3,2,5,6]
2
-}

retornaSup :: Int -> [Int] -> Int
retornaSup n lista = length (filter (> n) lista)


