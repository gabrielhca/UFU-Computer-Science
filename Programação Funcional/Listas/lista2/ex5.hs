{-
Escreva uma função de nome tema que receba um verbo (String) re-
gular no infinitivo e devolva um par de strings contendo o radical e
a vogal temática do verbo dado. Como exemplos:
> tema "andar"
("and", "a")
> tema "escrever"
("escrev", "e")
> tema "partir"
("part", "i")

aqui usei listas, funções polimorficas predefinidas e definição basica de funções
-}


tema :: String -> (String, String)
tema verbo = (radical, vogalTematica)
  where
    desinencia = drop (length verbo - 2) verbo  -- Pega os dois últimos caracteres
    vogalTematica = [head desinencia]          -- Primeiro caractere da desinência
    radical = take (length verbo - 2) verbo     -- Remove a desinência
