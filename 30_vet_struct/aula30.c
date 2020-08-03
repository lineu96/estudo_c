// Aula 30 - vetor de estruturas

# include <stdio.h>
# include <stdlib.h>

// Estruturas de dados

/*
    struct nome_da_estrutura
    {
        tipo nome;
        tipo nome;
        tipo nome;
    };
*/

int main(){

    printf("-----------------------------\n");
    printf("ESTRUTURA DE DADOS COM STRUCT\n");
    printf("-----------------------------\n");

    int i, reg;

    struct dados{
        char nome[51];
        int idade;
        float altura;
        float peso;
    };

    printf("Informe o numero de registros: ");
    scanf("%i", &reg);

    printf("-----------------------------\n");

    struct dados pessoas[reg];

    for(i=0;i<reg;i++){

    printf("Pessoa %i\n\n", i);
    printf("Escreva o nome da pessoa %i: ", i);
    scanf("%s", &pessoas[i].nome);

    printf("Escreva a idade da pessoa %i: ", i);
    scanf("%i", &pessoas[i].idade);

    printf("Escreva a altura da pessoa %i: ", i);
    scanf("%f", &pessoas[i].altura);

    printf("----------------------------------------\n");

    }


    printf("Registros realizados\n");
    printf("----------------------------------------\n");

    for(i=0;i<reg;i++){
        printf("Pessoa %i\n", i);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %i\n", pessoas[i].idade);
        printf("Altura: %f\n", pessoas[i].altura);

        printf("\n");
    }


    return 0;
}
