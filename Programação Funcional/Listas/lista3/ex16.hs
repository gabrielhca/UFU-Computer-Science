{-
Escreva uma função polimórfica que gere uma lista com todas as combinações de k elementos de uma dada lista. 
Exemplo:
> combinaçoes 3 [1,2,3,4,5]
[[1,2,3], [1,2,4], [1,2,5], [1,3,4], [1,3,5],
[1,4,5], [2,3,4], [2,3,5], [2,4,5], [3,4,5]]
-}

combinacao :: Int -> [a] -> [[a]]
combinacao 0 _      = [[]]
combinacao _ []     = []
combinacao k (x:xs) = [x : ys | ys <- combinacao (k-1) xs] ++ combinacao k xs

