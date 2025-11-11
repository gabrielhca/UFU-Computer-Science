#include <stdio.h>

int main() {
    float x, subida, total;
    printf("Digite a altura do degrau e em seguida qual altura voce deseja subir \n");
    scanf("%f %f", &x, &subida);
    total = subida/x;
    printf("Voce ira precisar de %f degraus.", total);
    return 0;
}
