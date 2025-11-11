{-
Defina uma função maiúsculas que recebe uma string e converte ape-
nas as letras minúsculas em maiúsculas e devolve a string alterada.
-}

import Data.Char (toUpper, isLower)

maiusculas :: String -> String
maiusculas [] = [] --caso base
maiusculas (x:xs)
    | isLower x = toUpper x : maiusculas xs --caso recursivo converte se for minuscula
    | otherwise = x : maiusculas xs -- caso recursivo mantem inalterado
