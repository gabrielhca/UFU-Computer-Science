/*
double *p, *q, *r, A[5]; 
p = A; q = p+1; r = p+2; 
printf("p = %ld; &A[0] = %ld;\n", p, &A[0]); p=1234600 e a =1234600
printf("q = %ld; &A[1] = %ld;\n", q, &A[1]); q=1234608 e a=1234608
printf("r = %ld; &A[2] = %ld;\n", r, &A[2]); r=1234616 e a=1234616
printf("q-p = %ld; r-p = %ld;\n", q-p, r-p); q-p=1 , r-p = 2 indica a distancia das posições, q esta 1 posição de distancia de p e r 2 de p
printf("ender(q)  -  ender(p)  =  %ld;  ender(r)  -  ender(p)  = 
%ld;\n",(long)q - (long)p, (long)r – (long)p) // q-p=8 , r-p = 16
// logng calcula a diferença em bytes, long é um tipo de int para numeros grandes, isso permite que logn subtraia os endereços diretamente sem interpretar o valor em termos de double
Considere  ainda  que  um  variável  do  tipo  double  ocupa  8  bytes  e  que  o 
endereço inicial de A é 1234600.
IMPORTANTE: como um variavel do tipo double ocupa 8 bytes, de a[0] para a[1] a uma diferença de 8 bytes
*/