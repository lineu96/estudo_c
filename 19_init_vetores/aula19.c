// Aula 19 - inicializando vetores

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    printf("-----------------------------\n");
    printf("INICIALIZAÇÃO DE VETORES\n");
    printf("-----------------------------\n");

    printf("Vetor 1: sem definir tamanho do vetor\n");
    printf("tipo nome[] = {elemento1,...}\n");
    printf("-----------------------------\n");

    int vetor[] = {1,2,3,4,5};
    int i;

    for(i = 0; i < 5;i++){
        printf("%i ", vetor[i]);
    }

    printf("\n-----------------------------\n");
    printf("Vetor 2: definindo tamanho do vetor\n");
    printf("tipo nome[dim] = {elemento1,...elemento dim}\n");
    printf("-----------------------------\n");

    printf("Vetor 2\n");
    int vetor2[3] = {1,2,3};

    for(i = 0; i < 3;i++){
        printf("%i ", vetor2[i]);
    }

    printf("\n-----------------------------\n");
    printf("Obtendo tamanho do vetor\n");
    printf("sizeof(vetor)/sizeof(tipo)\n");
    printf("-----------------------------\n");

    printf("%i", sizeof(vetor)/sizeof(int));

    printf("\n-----------------------------\n");

    return 0;
}
