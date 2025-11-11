{-
As fórmulas para conversão entre graus Celsius (C) e Fahrenheit (F) são:
Escreva uma função em Haskell com a seguinte assinatura
converteTemperatura :: Double -> String -> Double
que ao receber uma temperatura e uma escala na forma de uma string C ou F, converta a
temperatura para a outra escala. Por exemplo:
ghci> convertaTemperatura 25.0 "C"
77.0 -- converte 25 ºC para 77 ºF
A função deve retornar a mensagem Escala inválida se a escala não for uma das duas
informadas
-}

converteTemperatura :: Double -> String -> Double
converteTemperatura temp escala
    |escala == "c" = 9/5 * temp + 32 -- converte para F
    |escala == "f" = 5/9  * (temp - 32) --converte para C
    |otherwise     = error "Escala invalida"
