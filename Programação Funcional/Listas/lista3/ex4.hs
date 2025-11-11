{-
7. Defina uma função que dada uma lista de inteiros, retorna outra lista que contém apenas os elementos de valor superior a um número n qualquer.
> retornaListaSup 4 [3,2,5,6]
[5,6]
-}

retornaListaSup :: Int -> [Int] -> [Int]
retornaListaSup n lista = filter (>n) lista
