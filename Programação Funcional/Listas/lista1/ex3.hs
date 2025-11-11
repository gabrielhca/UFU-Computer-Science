test n = if (n `mod` 2 == 0)
         then n
         else test (2 * n + 1)

{-
Para quais valores de entrada (n) a função não se encerra? Por que?
Use exemplos simples para explicar sua resposta.

A função test verifica se n é par. Se for, retorna n e encerra.  
Caso contrário, ela chama test recursivamente com o valor (2 * n + 1).  

O problema é que essa operação sempre gera outro número ímpar,  
o que faz a função continuar indefinidamente.
-}
