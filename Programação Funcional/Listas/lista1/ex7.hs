{-
A sequência de Fibonacci é dada pela seguinte série:
0 1 1 2 3 5 8 13 . . .
Construa uma função para retornar o n-ésimo termo da sequência.
-}

fibonacci :: Int -> Int
fibonacci 0 = 0 --caso base
fibonacci 1 = 1 -- caso base
fibonacci x = fibonacci (x-1) + fibonacci (x - 2) --caso recursivo
