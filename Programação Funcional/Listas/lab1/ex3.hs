mediaNotas :: [Double] -> Double
mediaNotas notas =
  let soma = sum notas
      comprimento = fromIntegral (length notas) -- converte int para double, parametro length é um inteiro
  in soma / comprimento
-- a função é chamada, por ex: mediaNotas [15,20,15,18]
