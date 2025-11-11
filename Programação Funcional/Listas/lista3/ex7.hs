--Seja a função união abaixo, definida através da construção de listas por compreensão. Teste esta função e implemente a interseçao utilizando a mesma estratégia.

--preservar todos os elementos de (as) e adiciona elementos de (bs) que não estão em (as)
uniao :: Eq t => [t] -> [t] -> [t]
uniao as bs = as ++ [b | b <- bs, not (elem b as)]

--seleciona os elementos (as) que tambem estão em (bs)
intersecao :: Eq t => [t] -> [t] -> [t]
intersecao as bs = as ++ [a | a <- as, elem a bs]

-- elem (elemento pertence a lista)

