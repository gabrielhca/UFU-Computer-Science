{-
Implemente a função abaixo
identificaTriangulo :: Double -> Double -> Double -> String
e que recebe os três lados de um triângulo e o classifica como Equilátero, Isósceles ou
Escaleno com a seguinte alteração: se os três lados não formarem um triângulo,
devolve a string ”Não é um triângulo”
-}

identificaTriangulo :: Double -> Double -> Double -> String
identificaTriangulo  a b c
    | a + b <= c || a + c <= b || b + c<= a = "Nao e um triangulo"
    | a == b && b == c = "Equilatero"
    | a == b || b == c || a == c = "Isosceles"
    | otherwise = "Escaleno"
