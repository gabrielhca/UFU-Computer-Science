/* 
Faça um programa que leia informações sobre 15 pessoas. Essa 
informação deve ficar em um vetor de variáveis do tipo estruturado pessoa, 
o qual deve conter as seguintes informações: 
• Nome: string de tamanho 30; 
• Sexo: tipo enumerativo com os valores masc, fem; 
• Idade: valor inteiro; 
• Estado Civil: tipo enumerativo com os valores solteiro,casado, 
separado, viúvo. 
• Salário: valor real. 
Em seguida, imprima o número de homens, número de mulheres e 
informações da pessoa com maior salário.
*/

#include <stdio.h>
#include <string.h>

//Por padraão o primeiro elemento de uma enum tem o valor 0 e cada elementos subsequencte incrementa 1;
//Tambem é possivel atribuir valores especificos;

typedef enum { Masc, Fem } Sexo;
typedef enum { Solteiro, Casado, Separado, Viuvo } EstCiv;

typedef struct{
    char nome[30];
    Sexo sexo;
    int idade;
    EstCiv estadoCivil;
    float salario;
} pessoa;

// funções para retorna enum como string
//retorna strings literais sem permitir que elas sejam modificadas
// ao usar const char* estou dizendo o ponteiro não deve ser usado para modificar a string que ele aponta
//a função é declarada para retornar um ponteiro constante para um caracter
const char* strSexo(Sexo sexo) {
    switch (sexo) {
    case Masc: return "Masculino"; break;
    case Fem: return "Feminino"; break;
    default: return "Desconhecido";
    }
}

const char* strCiv(EstCiv estadoCivil) {
    switch (estadoCivil)
    {
    case Solteiro: return "Solteiro";
    case Casado: return "Casado";
    case Separado: return "Separado";
    case Viuvo: return "Viuvo";
    default: return "Desconhecido";
    }
}

#define N 2

int main() {
    pessoa dadoPessoa[N];
    char sexoInput, civInput[30];
    int i, numMas=0, numFem=0, premiado=0;
    int valido;
    float maiorSalario=0;
    for(i=0;i<N;i++){
        printf("%d° Nome:\n", i+1);
        // Use fgets para ler strings com espaços
        fgets(dadoPessoa[i].nome, 30, stdin);
        // Remover o '\n'
        dadoPessoa[i].nome[strcspn(dadoPessoa[i].nome, "\n")] = 0;
        do{
            valido = 1; // Assuminos que a entrada é valida 
            printf("Sexo (M/F): \n");
            scanf(" %c", &sexoInput);
            while (getchar() != '\n');
            // limpa \n que podem atrapalhar o cod
            if(sexoInput == 'm' || sexoInput == 'M') {
                dadoPessoa[i].sexo = Masc;
                numMas += 1;
            } else if (sexoInput == 'f' || sexoInput == 'F') {
                dadoPessoa[i].sexo = Fem;
                numFem += 1;
            } else {
                printf("Entrada inválida! Tente novamente.\n");
                valido = 0; // Marca como invalido e o loop continuara
            }
        } while (!valido);
        // O loop so termina quandovalido for 1 (entrada correta)

        printf("Idade:\n");
        scanf("%d", &dadoPessoa[i].idade);
        while (getchar() != '\n');
        // limpa \n que podem atrapalhar o cod
        do{
            valido = 1; // Assuminos que a entrada é valida 
            printf("Estado civil:\n");
            fgets(civInput,30,stdin);
            civInput[strcspn(civInput, "\n")] = 0;
            if(strcmp(civInput, "Solteiro") == 0 || strcmp(civInput, "solteiro") == 0) {
                dadoPessoa[i].estadoCivil = Solteiro;
            } else if(strcmp(civInput, "Casado") == 0 || strcmp(civInput, "casado") == 0) {
                dadoPessoa[i].estadoCivil = Casado;
            } else if(strcmp(civInput, "Separado") == 0 || strcmp(civInput, "separado") == 0) {
                dadoPessoa[i].estadoCivil = Separado;
            } else if(strcmp(civInput, "Viuvo") == 0 || strcmp(civInput, "viuvo") == 0) {
                dadoPessoa[i].estadoCivil = Viuvo;
            } else {
                printf("Entrada inválida! Tente novamente.\n");
                valido = 0; // Marca como invalido e o loop continuara
            }
        } while (!valido);
        // O loop so termina quandovalido for 1 (entrada correta)
        printf("Salario:\n");
        scanf("%f", &dadoPessoa[i].salario);
        while (getchar() != '\n');
        // limpa \n que podem atrapalhar o cod
        if(dadoPessoa[i].salario > maiorSalario) {
            maiorSalario = dadoPessoa[i].salario;
            premiado = i;
        }
    }
    printf("Temos %d Homens e %d Mulheres.", numMas, numFem);
    printf("Informações da pessoa com maior salario:\nNome: %s\nSexo: %s\nIdade: %d\nEstado civil: %s\nSalario: %.2f", dadoPessoa[premiado].nome, strSexo(dadoPessoa[premiado].sexo), dadoPessoa[premiado].idade, strCiv(dadoPessoa[premiado].estadoCivil), dadoPessoa[premiado].salario);
    return 0;
}