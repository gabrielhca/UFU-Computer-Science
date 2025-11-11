{-
4. Defina uma função
dı́gitoRomano :: Char -> String
que converte um dı́gito qualquer em sua representação como um númeral
romano. Por exemplo, para '7' a função devolve "VII".
-}


digitoRomano :: Char -> String
digitoRomano c
    | c == '0' = "o zero nao e representado"
    | c == '1' = "I"
    | c == '2' = "II"
    | c == '3' = "III"
    | c == '4' = "IV"
    | c == '5' = "V"
    | c == '6' = "VI"
    | c == '7' = "VII"
    | c == '8' = "VIII"
    | c == '9' = "IX"
    | otherwise = "isso nao e um digito..."

