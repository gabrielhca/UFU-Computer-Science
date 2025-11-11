{-
Escreva as definições das funções
min :: Int -> Int -> Int
minTres :: Int -> Int -> Int -> Int
que calcula o mı́nimo de dois e três inteiros, respectivamente.
-}

min :: Int -> Int -> Int
min a b
    | a < b = a
    | otherwise = b

minTres :: Int -> Int -> Int -> Int
minTres a b c
    | a < b && a < c = a
    | b < c = b
    | otherwise = c
