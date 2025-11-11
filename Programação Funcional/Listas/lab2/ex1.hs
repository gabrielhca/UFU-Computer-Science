{-
O ı́ndice de massa corporal, IMC, é calculado como o peso dividido pelo quadrado da
altura em metros.
Resultado -> situacao
Abaixo de 17  -> muito abaixo do peso
Entre 17 e 18,49 -> abaixo do peso
Entre 18,50 e 24,99 -> peso normal
Entre 25 e 29,99 -> acima do peso
Entre 30 e 34,99 - obesidade I
Entre 35 e 39,99 - obesidade II (severa)
Acima de 40 - obesidade III (morbida)
Defina uma função que dados peso e altura, devolva uma string para a situação da
pessoa. Use guardas e implemente a função de forma eficiente, evitando recálculos.
-}

imc :: Double -> Double -> String
imc peso altura 
    | valorIMC < 17.0 = "Muito abaixo do peso"
    | valorIMC < 18.5 = "Abaixo do peso"
    | valorIMC < 25.0 = "peso normal"
    | valorIMC < 30.0 = "Acima do peso"
    | valorIMC < 35.0 = "Obesidade I"
    | valorIMC < 40.0 = "Obesidade II"
    | otherwise       = "Obesidade III"
    where
      valorIMC = peso / altura^2
{-

as GUARDS sao representadas por | e são usadas para definir condições em funções
elas tornam o codigo legivel e organizado, especialmente para varias condições
pode se usar a palavra otherwise para se referir a uma condição que não foi atendida
ex é possivel trocar 
IMC >= 40.0 = "Obesidade III"
para: 
otherwise = "Obesidade III"
ou: 
True = "Obesidade III"
ou seja, se as condições não forem atendidas, retorna "Obesidade III"

-}
