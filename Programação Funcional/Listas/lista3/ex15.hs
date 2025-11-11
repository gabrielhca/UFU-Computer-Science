{-
Implemente uma função polimórfica que descarte um elemento a cada n elementos de uma lista.
Exemplo
> descarte [1,2,3,4,5,6,7,8,9,10] 3
[1,2,4,5,7,8,10]
-}

descarte :: [a] -> Int -> [a]
descarte [] _ = []
descarte xs n = take (n-1) xs ++ descarte (drop n xs) n

--take (n-1) xs: mantem os primeiros n-1 elementos da lista.
--drop n xs: remove os primeiros n elementos (os n-1 mantidos + 1 descartado).


