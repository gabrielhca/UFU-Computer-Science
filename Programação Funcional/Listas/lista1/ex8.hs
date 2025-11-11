{-
Defina uma função que recebe três números inteiros representando,
respectivamente, um dia, um mês e um ano e verifica se os números
formam uma data válida. A sua função deve devolver True ou False.
-}

qualData :: Int -> Int -> Int -> Bool
qualData d m a
    |m < 1 || m > 12 = False --Mes invalido
    |d < 1 = False --Dia Invalido
    |m == 2 && bissexto a = d <= 29 --fevereiro em ano bissexto
    |m `elem` [4, 6, 9, 11] = d <= 30 -- meses com 30 dias
    -- a funcao verifica se m é um elemento da lista
    |otherwise = d <= 31 -- meses com 31 dias
  where
    bissexto ano = (ano `mod` 4 == 0 && ano `mod` 100 /= 0) || (ano `mod` 400 == 0)
