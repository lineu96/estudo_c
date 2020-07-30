// Aula 31 - estruturas em funções

# include <stdio.h>
# include <stdlib.h>

struct dados{
    char nome[51];
    int idade;
    float altura;
    float peso;
    };


void imprimir(struct dados parametro){
    printf("----------------------------------------\n");
    printf("Pessoa 1   \n");

    printf("Nome: %s   \n", parametro.nome);
    printf("Idade: %i  \n", parametro.idade);
    printf("Altura: %.2f \n", parametro.altura);
    printf("Peso: %.2f   \n", parametro.peso);
    printf("----------------------------------------\n");
}

int main(){

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

    imprimir(pessoa1);

    return 0;
}
