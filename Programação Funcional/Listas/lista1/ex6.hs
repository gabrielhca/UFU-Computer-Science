{-
Construa uma função que calcule o valor do máximo divisor comum entre três números inteiros.
para calcular o mdc de 3 numeros precisamos primeiro do mdc de dois numeros
-}

--funçao para calcular o MDC(maximo divisor comum) entre dois numeros
--mdc(a,b)=mdc(b, a mod b)
mdc2 :: Int -> Int -> Int
mdc2 a b
    | b == 0 = abs a
    | otherwise = mdc2 b (a `mod` b)

--funcao para calcular o MDC(maximo divisor comum) entre tres numeros
--mdc(a,b,c) = mdc(mdc(a,b),c)
mdc :: Int -> Int -> Int -> Int
mdc a b c = mdc2 (mdc2 a b) c

