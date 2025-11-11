{-
Construa uma função que calcule o valor do mı́nimo múltiplo comum
de três números inteiros.

Para calcular o mmc de tres numeros, podemos ultilizar o conceito do mmc de dois numeros
que precisa do mdc (maximo divisor comum de dois numeros) 
com o resultado do mmc de 2 numeros podemos calcular o mmc de 3 numeros
nas funções usaremos o parametro abs que retorna o valor absoluto de um numero
garantino que ele seja positivo
-}

--funçao para calcular o MDC(maximo divisor comum) entre dois numeros
--mdc(a,b)=mdc(b, a mod b)
mdc :: Int -> Int -> Int
mdc a b
    | b == 0 = abs a
    | otherwise = mdc b (a `mod` b)

--funcao para calcular o MMC(minimo multiplo comum) de dois numeros
--mmc(a,b) = (a*b)/mdc(a,b)
mmc2 :: Int -> Int -> Int
mmc2 a b = abs (a * b) `div` mdc a b

--funcao para calcular o MMC de tres numeros
--mmc(a,b,c)=mmc(mmc(a,b),c)
mmc :: Int -> Int -> Int -> Int
mmc a b c = mmc2 (mmc2 a b) c
