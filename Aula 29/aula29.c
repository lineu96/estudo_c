// Aula 29 - estrutura de dados

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


    struct dados{
        char nome[51];
        int idade;
        float altura;
        float peso;
    };

    struct dados pessoa1;

    printf("----------------------------------------\n");

    printf("Escreva seu nome: ");
    scanf("%s", &pessoa1.nome);

    printf("Escreva sua idade: ");
    scanf("%i", &pessoa1.idade);

    printf("Escreva sua altura: ");
    scanf("%f", &pessoa1.altura);

    printf("Escreva seu peso: ");
    scanf("%f", &pessoa1.peso);

    printf("----------------------------------------\n");
    printf("Pessoa 1   \n");

    printf("Nome: %s   \n", pessoa1.nome);
    printf("Idade: %i  \n", pessoa1.idade);
    printf("Peso: %.2f   \n", pessoa1.peso);
    printf("Altura: %.2f \n", pessoa1.altura);
    printf("----------------------------------------\n");

    return 0;
}
