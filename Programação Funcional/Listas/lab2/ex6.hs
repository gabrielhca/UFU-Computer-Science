{-
Sobre os anos bissextos sabemos que:
1. Se o ano não é múltiplo de 4, não é bissexto.
2. Se é múltiplo de 4 e não é múltiplo de 100, então é bissexto.
3. Se é múltiplo de 100 e não é múltiplo de 400, então não é bissexto.
4. Se é múltiplo de 400, então é bissexto.
Implemente uma função de nome bissexto que determine um dado ano é ou não bissexto. A
função deve devolver True ou False.
-}

bissexto :: Int ->  Bool
bissexto x
    | mod x 4 /= 0 = False --nao é multiplo de 4 se o resto da divisao não for 0
    -- /= siginifica que o resto da divisão é diferente
    | mod x 400 == 0 = True --divisivel por 4 e por 400
    | mod x 100 == 0 = False --divisivel por 4, nao por 400, e por 100
    | otherwise = True --divisivel por 4 e não por 100
