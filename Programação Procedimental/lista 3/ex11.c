#include <stdio.h>

int main() {
    int i, m = 0, f = 0;  // Inicializando contadores de homens e mulheres
    float altura, maior = 0, menor = 99999, altfem = 0, mafem, porcfem, porcmas, porcdif, porc;

    for (i = 1; i <= 5; i++) {
        char sexo;
        printf("Digite o sexo (‘M’ para masculino e ‘F’ para feminino) da %d pessoa:\n", i);
        scanf(" %c", &sexo);  // %c para char e espaço antes do %c para consumir o newline
        printf("Digite a altura da %d pessoa:\n", i);
        scanf("%f", &altura);

        // Atualizar maior e menor altura
        if (altura > maior) {
            maior = altura;
        }
        if (altura < menor) {
            menor = altura;
        }

        // Contar homens e mulheres, somar alturas femininas
        if (sexo == 'M' || sexo == 'm') {  // Verifica tanto 'M' quanto 'm'
            m++;
        } else if (sexo == 'F' || sexo == 'f') {
            f++;
            altfem += altura;  // Acumula a altura das mulheres
        } else {
            printf("Sexo invalido! Por favor, insira 'M' ou 'F'.\n");
            i--;  // Repetir iteração para entrada inválida
        }
    }

    // Cálculo da média de altura das mulheres
    if (f > 0) {
        mafem = altfem / f;
    } else {
        mafem = 0;
    }

    // Cálculo da porcentagem de homens e mulheres
    porc = 100.0 / (f + m);  // Usando 100.0 para garantir ponto flutuante
    porcfem = f * porc;
    porcmas = m * porc;
    porcdif = porcfem - porcmas;
    if (porcdif < 0) {
        porcdif = -porcdif;  // Diferença percentual absoluta
    }

    // Exibição dos resultados
    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Media da altura das mulheres: %.2f\n", mafem);
    printf("Numero de homens: %d\n", m);
    printf("Diferenca percentual entre homens e mulheres: %.2f%%\n", porcdif);

    return 0;
}
