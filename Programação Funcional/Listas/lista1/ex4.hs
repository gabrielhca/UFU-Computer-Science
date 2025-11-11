{-
5. Escreva funções para calcular:
1. Uma equação do primeiro grau (ax + b )
2. Uma equação do segundo grau (ax² + bx + c)
-}

-- Equação do primeiro grau: f(x) = ax + b
f :: Double -> Double -> Double -> Double
f a b x = a * x + b

-- Equação do segundo grau: g(x) = ax² + bx + c
g :: Double -> Double -> Double -> Double -> Double
g a b c x = a * x^2 + b * x + c

