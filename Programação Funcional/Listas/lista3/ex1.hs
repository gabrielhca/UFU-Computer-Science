--Defina cada uma das funções a seguir. Procure usar funções pré-definidas em Haskell:

--a) prodMn :: Int -> Int -> Int que, dados dois valores inteiros m e n, devolve o produto de todos os valores inteiros entre m e n (inclusive).
prodMn :: Int -> Int -> Int
prodMn m n = product [m..n]
-- gera lista de m a n e calcula o produto usando product


-- b) sumQuad :: Int -> Int que, dado um valor inteiro positivo n, devolve a soma dos quadrados de todos os inteiros compreendidos entre 0 e n.
sumQuad :: Int -> Int
sumQuad n = sum (map (^2) [0..n])
--Gera a lista de 0 a n, eleva cada elemento ao quadrado (map (^2)) e soma os resultados


--c) sumFats :: Int -> Int que, dado um valor inteiro positivo n, devolve a soma dos fatoriais de todos os inteiros entre 0 e n.
sumFacts :: Int -> Int
sumFacts n = sum (map (\k -> product [1..k] [0..n]))
--calcula o fatorial de cada numero entre 0 a n usando product [1..k] e soma os resultados


--d) duplicate :: Int -> String -> String que, dado um inteiro n e um string s devolve um novo string igual ao string dado duplicado n vezes. Se n = 0, devolve o string vazio.
duplicate :: Int -> String -> String
duplicate n s = concat (replicate n s)
--repete a string s n vezes com replicate e concatena o resultado.


-- e) makespaces :: Int -> String que, dado um número inteiro n, devolve um string de n espaços em branco. (Use a função definida no item anterior).
makespaces :: Int -> String
makespaces n = duplicate n " "
--reutiliza duplicate para criar uma string com n espaços


--f) rjustify :: Int -> String -> String que, dado o comprimento de uma linha e um string,alinha esse string à direita na linha, inserindo o número de 
-- espaços em branco necessários à sua esquerda. Caso o comprimento do string seja maior que o comprimento da linha, ele deve ser quebrado em mais linhas.
rjustify :: Int -> String -> String
rjustify len str = unlines (map ajustar (dividirChucks len str))
    where
      ajustar chunk = makespaces (len - length chucks) ++ chucks
      dividirChucks len str
        | null str = []
        | otherwise = take len str : dividirPartes len (drop len str)
--divide str em chucks de tamanho len usando (dividirChucks)
--justifica cada chucks a direita adicionando espaços usando (ajustar)
--Une as chucks com quebra de linha (unlines)



