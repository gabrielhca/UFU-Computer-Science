{-
Defina uma função polimórfica que empacota duplicatas consecutivas em uma sub-lista. Exemplo:
> empacota [1,1,1,1,2,3,3,1,1,4,5,5,5,5]
[[1,1,1,1], [2], [3,3], [1,1], [4], [5,5,5,5]]
-}

empacota :: Eq a => [a] -> [[a]]
empacota [] = []
empacota (x:xs) = 
    let grupo = x : takeWhile (== x) xs --pega x e todos os elementos consectivos iguais a x em xs
        resto = dropWhile (== x) xs --remove todos os elementos x que foram agrupados
    in grupo : empacota resto --empacota os elementos x no grupo
    
