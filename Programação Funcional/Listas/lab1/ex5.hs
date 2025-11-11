{-
Escreva uma função info(a, b) que recebe um ponto (a, b) e devolve três informações
sobre o segmento que passa por esse ponto e a origem:
1. O coeficiente angular da inclinação
2. A inclinação em graus
3. O ponto médio
4. O comprimento do segmento, ou seja, a distância entre o ponto e a origem
O valor retornado deve ser uma quádrupla (m, grau, ptm, comp)
-}

info :: Double -> Double -> (Double, Double, (Double, Double), Double)
info a b = (m, g, ptm, comp)
  where
    m = b / a --coenficiente angular
    r = atan m --angulo de inclinação em radianos
    -- atan é a funçao que calcul o arco tangente (tangente inversa) de um numero
    g = 180 * r / pi --angulo de inclinação em graus
    xM = a / 2
    yM = b/ 2
    ptm = (xM, yM) --ponto medio
    comp = sqrt ( a^2 + b^2 ) --comprimento do segmento 
