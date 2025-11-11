{-
Implemente a função abaixo
identificaTriangulo :: Double -> Double -> Double -> String
que recebe os três lados de um triângulo e o classifica como Equilátero, Isósceles ou
Escaleno. Assuma que os três lados formam um triângulo.
-}

identificaTriangulo :: Double -> Double -> Double -> String
identificaTriangulo  a b c
    | a == b && b == c = "Equilatero"
    | a == b || b == c || a == c = "Isosceles"
    | otherwise = "Escaleno"
