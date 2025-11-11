
{-
Integral a => é a restrição do tipo e espeficica que o tipo deve pertencer a classe de tipos integral
(-> e =>) tem significados diferentes.
=> (restrição do tipo)
ela aparece ANTES da assinatura do tipo principal, define uma condição sobre os tipos que podem ser usados
Integral a => significa que o tipo a deve ser um menbro da classe Integral.

-> (tipo de função)
aparece na assinatura do tipo principal
[a] -> a siginifica que a função recebe uma lista de elementos do tipo a e retorna um unico valor do tipo a
-}
media ns = soma `div` tamanho
  where
   {  soma = sum ns;
      tamanho = length ns };
