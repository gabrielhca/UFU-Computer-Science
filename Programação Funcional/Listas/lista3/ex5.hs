{-
Escreva uma função que recebe duas listas de inteiros e produz uma lista de listas. Cada uma
corresponde à multiplicação de um elemento da primeira lista por todos os elementos da segunda.
> mult_listas [1,2] [3,2,5]
[[3,2,5], [6,4,10]]
-}

mult_listas :: Num a => [a] -> [a] -> [[a]]
mult_listas xs ys = map (\x -> map (x *) ys) xs

