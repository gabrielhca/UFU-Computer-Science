#include <stdio.h>

float validaNota() {
        float n;
        printf("Inf a nota [0 a 10]:\n");
        scanf("%f", &n);
        if (n < 0 || n > 10) {
            return -1;
        } else {
            return n;
        }
}

int main() {
     float nota;
     nota = validaNota();
     printf("%.1f", nota);
     return 0;
}
