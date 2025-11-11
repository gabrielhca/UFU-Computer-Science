par x = (mod x 2) == 0

{-
Essa função verifica se x é par usando o operador mod (módulo).
Se x for divisível por 2, o resto será 0, retornando True; caso contrário, retorna False.
-}

par1 x = if (x == 0)
         then True
         else not (par1 (x - 1))

{-
par1 é uma função recursiva, e a chave para seu funcionamento está no operador NOT.

Ela recebe um valor x. Se x for 0, retorna True (caso base).  
No caso recursivo, quando x é diferente de 0, a função se chama novamente,  
subtraindo 1 do valor de x e aplicando NOT ao resultado da chamada recursiva.

A função continuará se repetindo até atingir o caso base.  
Como NOT inverte o valor booleano a cada chamada, o número de repetições  
até chegar a 0 determina o resultado final:  

- Se a recursão acontecer um número ímpar de vezes, o resultado será False.  
- Se acontecer um número par de vezes, o resultado será True.  

Isso revela se o valor original de x é par ou ímpar.
-}

