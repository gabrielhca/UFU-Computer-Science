calculaDesconto :: Double -> String -> Double
calculaDesconto preco tipo --tipo de cliente(Premium, Reglar, Novo)
    |tipo == "Premium" = preco * 0.80
    |tipo == "Regular" = preco * 0.90
    |tipo == "Novo"    = preco * 0.95
    |otherwise         = preco
