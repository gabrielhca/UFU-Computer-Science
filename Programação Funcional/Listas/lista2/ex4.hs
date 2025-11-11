{-
Escreva uma função para retornar a média de três inteiros
médiaTres :: Integer -> Integer -> Integer -> Double
Usando essa função defina a função
quantosAcimaMédia :: Integer -> Integer -> Integer -> Integer
que devolve quantas de suas entradas são maiores que o valor médio
delas.
-}

mediaTres :: Integer -> Integer -> Integer -> Double
mediaTres a b c = fromIntegral (a + b + c) / 3  -- garante que o resultado nao seja truncado

quantosAcimaMedia :: Integer -> Integer -> Integer -> Integer
quantosAcimaMedia a b c =
    let media = mediaTres a b c --variavel recebe a funcao
        acima x = if fromIntegral x > media then 1 else 0  -- se maior retorna 1
    in acima a + acima b + acima c --declara que acima deve comparar a b c 
