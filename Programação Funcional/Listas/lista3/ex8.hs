--Use a construção de listas por compreensão para definir uma função que recebe uma lista e retorna uma lista contendo apenas os elementos negativos da lista original.

filtraNegativos :: (Num a, Ord a) => [a] -> [a]
filtraNegativos xs = [x | x <- xs, x < 0]
