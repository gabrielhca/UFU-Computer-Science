{-
Queremos encontrar o coeficiente angular da inclinação da reta entre dois pontos
(a, f (a)) e (b, f (b)) com f (x) = x 2 + 2x − 7.
1. Defina a função f no REPL
2. Crie outra função g (a, b) que devolva o coeficiente angular da inclinação da reta
entre dois pontos x = a e x = b de f .
3. Use g para encontrar o coeficiente angular da inclinação de f entre x = 3 e x = 5.
4. Use g para encontrar o coeficiente angular da inclinação de f entre x = −2 e
x = 7.
-}

-- definição da função f(x)
f :: Double -> Double
f x = x^2 + 2*x -7

-- funcao para calcular o coeficiente angular da reta entre (a, f(a)) e (b, f(b))
g :: (Double, Double) -> Double
g (a, b) = (f b - f a) / (b - a)
