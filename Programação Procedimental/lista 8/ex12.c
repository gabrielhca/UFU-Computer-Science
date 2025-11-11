/*
1. Faça um programa que leia informações sobre 15 pessoas. Essa informação 
deve ficar em um vetor de variáveis do tipo estruturado pessoa, o qual deve 
conter as seguintes informações: 
Nome: string de tamanho 30; 
Sexo: tipo enumerativo com os valores masc, fem; 
Idade: valor inteiro; 
Estado  Civil:  tipo  enumerativo  com  os  valores  solteiro,  casado, 
separado,viúvo. 
Salário: valor real. 
Pede-se: 

b)  Leia os dados gravados em arquivo no item a) de modo a obter e escrever o 
número  de  homens,  número  de  mulheres  e  informações  da  pessoa  com 
maior salário. 
c) Gravar os dados lidos em arquivo binário; 
d)  Leia os dados gravados em arquivo no item c) de modo a obter e escrever o 
número  de  homens,  número  de  mulheres  e  informações  da  pessoa  com 
maior salário.
*/

#include <stdio.h>
#include <string.h>

#define N 2

typedef enum {
    masc, fem
} Sexo;

typedef enum {
    solteiro, casado, separado, viuvo
} EstCiv;

typedef struct
{
    char nome[30];
    Sexo sexo;
    int idade;
    EstCiv estado;
    float salario;
} Funcionario;

// Gravação em Arquivo de Texto
void gravarTexto(Funcionario f[], int n) {
    //abri um arquivo de escrita (w) chamados dados.txt
    FILE *file = fopen("dados.txt", "w");
    //verifica se o arquivo foi/pode ser aberto
    if(file == NULL) {
        printf("Erro ao abir o arquivo.\n");
        return;
    }

    //grava as informações na matriz
    for(int i = 0; i < n; i++) {
        // file, antes das "" é o ponteiro para o arq, indica o local onde o conteudo vai ser gravado
        fprintf(file, "%s %d %d %d %.2f\n", f[i].nome, f[i].sexo, f[i].idade, f[i].estado, f[i].salario);
    }
    //fecha o arq
    fclose(file);
}

//Leitura dos Dados do Arquivo de Texto
//now let's read the data from the text file and perform the requested operations
void lerTextoEProcessar(){
    //opening the file for reading
    FILE *file = fopen("dados.txt", "r");
    if(file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    Funcionario f, fMaiorSal;
    int numH = 0, numM = 0;
    fMaiorSal.salario = 0.0;
    //scanf le dados de entrada (teclado), ja fscanf le dados de um arquivo especifico
    // funciona como o scanf mas requer um ponteiro do arquivo como promeiro argumento (no caso file,)
    while(fscanf(file, "%s %d %d %d %f", f.nome, (int *)&f.sexo, &f.idade, (int *)&f.estado, &f.salario) != EOF) {
        //formato 0.0 float
        if (f.sexo == masc) {
            numH++;
        } else if(f.sexo == fem) {
            numM++;
        } if (f.salario > fMaiorSal.salario) {
            fMaiorSal = f;
        }
        //EOF significa "End of File" (Fim de Arquivo)
    }

    fclose(file);
    printf("Numero de homens: %d\n", numH);
    printf("Numero de mulheres: %d\n", numM);
    printf("Pessoa com maior salario: %s, Salario: %.2f\n", fMaiorSal.nome, fMaiorSal.salario);
}

//Gravação em Arquivo Binário
//now let's create a function to write the data to a binary file
void gravarBinario(Funcionario f[], int n) {
    FILE *file = fopen("dados.bin", "wb");
    if(file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    //por se tratar de um arq binary, usamos uma forma um pouco diferente
    // que nos permite pegar/copiar seus bytes diretamente para o arquivo
    //quando usando fwrite estamos escrevendo uma estrutura inteira em uma so linha
    /*
    Neste comando:
    f é o array de structs que queremos escrever.
    sizeof(Funcionario) indica o tamanho de cada elemento.
    n indica quantos elementos estamos gravando.
    file é o arquivo binário.
    */
    fwrite(f, sizeof(Funcionario), n, file);
    fclose(file);
}

//Leitura dos Dados do Arquivo Binário
//Finally, we will create a function to read the data from the binary file
// and peform the requested operations
void lerBinarioEProcessar() {
    FILE *file = fopen("dados.bin", "rb");
    if(file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    Funcionario f[N], fMaiorSal;
    fread(f, sizeof(Funcionario), N, file);
    fclose(file);
    int numH = 0, numM = 0;
    fMaiorSal = f[0];
    for(int i=0; i<N;i++) {
        if(f[i].sexo == masc){
            numH++;
        } else if(f[i].sexo == fem) {
            numM++;
        } if (f[i].salario > fMaiorSal.salario){
            fMaiorSal = f[i];
        }

    }

    printf("Numero de homens: %d\n", numH);
    printf("Numero de mulheres: %d\n", numM);
    printf("Pessoa com maior salario: %s, Salario: %.2f\n", fMaiorSal.nome, fMaiorSal.salario);
}

int main() {
    Funcionario f[N];

    for (int i = 0; i < N; i++) {
        printf("Digite o nome: ");
        scanf("%s", f[i].nome);
        printf("Digite o sexo (0 para masc, 1 para fem): ");
        //(int *)&f é um ex de "type casting" (conversão de tipo)
        // permite tratar o endereço f[i].sexo como um ponteiro para int enquanto você grava nele
        //esse cast apenas engana o scanf e não muda o tipo real de sexo
        scanf("%d", (int *)&f[i].sexo);
        printf("Digite a idade: ");
        scanf("%d", &f[i].idade);
        printf("Digite o estado civil (0: solteiro, 1: casado, 2: separado, 3: viuvo): ");
        scanf("%d", (int *)&f[i].estado);
        printf("Digite o salario: ");
        scanf("%f", &f[i].salario);
    }

    // Gravar e ler do arquivo de texto
    gravarTexto(f, N);
    lerTextoEProcessar();

    // Gravar e ler do arquivo binário
    gravarBinario(f, N);
    lerBinarioEProcessar();
    return 0;
}
