--Escreva uma função polimórfica que gere uma lista com todas as permutações dos elementos de uma dada lista.

permutacao :: [a] -> [[a]]
permutacao [] = [[]]  -- Caso base: lista vazia tem uma permutação (ela mesma)
permutacao (x:xs) = 
    concatMap (insereEmTodos x) (permutacao xs)  -- Recursão e alta ordem
  where
    -- Insere 'x' em todas as posições de uma lista
    insereEmTodos :: a -> [a] -> [[a]]
    insereEmTodos x [] = [[x]]  -- Caso base: inserir em lista vazia
    insereEmTodos x (y:ys) = 
        (x : y : ys) : map (y :) (insereEmTodos x ys)  -- Recursão e construção de listas
        
