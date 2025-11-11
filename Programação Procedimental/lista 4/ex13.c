#include <stdio.h>

float elevado(float x, int y) {
       int i, exp;
       float resul = 1;
       exp = y;
       if(y<0) {
           y = y * -1;
       }
       for(i=1; i <=y; i++) {
           resul *= x;
           }
       if (exp < 0) {
           return 1/(resul);
       } else {
           return resul;
       }
}


int main() {
     float a, resul;
     int b;
     printf("informe o valor de a e o valor de b:\n");
     scanf("%f %d", &a, &b);
     resul = elevado(a,b);
     printf("Resultado: %.3f", resul);
}
