--a) fat :: Integer -> Integer, que computa o fatorial de um número natural
fat :: Integer -> Integer
fat n = fatAux n 1
    where
      fatAux 0 acc = acc
      fatAux n acc = fatAux (n-1) (n*acc)


--b) reverse :: [a] -> [a], que inverte uma lista
reverse' :: [a] -> [a]
reverse' xs = reverseAux xs []
    where
      reverseAux [] acc = acc
      reverseAux (x:xs) acc = reverseAux xs (x : acc)

