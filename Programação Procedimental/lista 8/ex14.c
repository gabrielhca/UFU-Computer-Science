/*
3. Considere o trecho de codigo a seguir e indique qual será sua saída.
Considere ainda que o endereço de a e 1234, de b é 1238, de p é 1300 e de q é
1304.
*/

/*
float a = 20.8, *p, b = 15.7, *q;
p = &a; q = &b; 
printf("a = %g; b = %g;\n", a, b); a=20.8 e b=15.7
printf("p = &a = %ld; q = &b = %ld;\n", p, q); p = 1234, q=1238
printf("&p = %ld; &q = %ld;\n", &p, &q); p=1300, q=1304
printf("a = %g; *p = %g;\n", a, *p); a=20.8, p=20.8
printf("b = %g; *q = %g;\n", b, *q); b=15.7, q=15.7
*q = *p + 2;
printf("a = %g; *p = %g;\n", a, *p); a=20.8, p=20.8
printf("b = %g; *q = %g;\n", b, *q); b=22.8, q=22.8
p = q;
printf("a = %g; *p = %g;\n", a, *p);printf("b = %g; *q = %g;\n", b, *q); //a=20.8, p=22.8 b=22.8, q=22.8
*/