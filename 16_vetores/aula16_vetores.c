// Aula 16 - vetores

# include <stdio.h>
# include <stdlib.h>

/*
    tipo nome[dimensao]
    int vetor[5] //vetor de inteiros de dimensão 5
*/

# define tam 6

int main(){

    int vetor1[tam];
    int vetor2[tam];
    int i;
    int prod = 0;

    printf("-----------------------------\n");
    printf("Produto escalar entre vetores\n");
    printf("-----------------------------\n");

    printf("Vetor 1\n");

    for(i = 0; i < tam; i++){
        printf("Digite o numero a ser colocado na posiçao %i do vetor 1: ", i);
        scanf("%i", &vetor1[i]);
    }

    printf("-----------------------------\n");
    printf("Vetor 2\n");

        for(i = 0; i < tam; i++){
        printf("Digite o numero a ser colocado na posiçao %i do vetor 2: ", i);
        scanf("%i", &vetor2[i]);
    }

    printf("-----------------------------\n");

    printf("\n\nVetores:\n");

    printf("Posição - Vetor 1 - Vetor 2\n");
    for(i = 0; i < tam; i++){
        printf("%i          %i          %i       \n", i, vetor1[i], vetor2[i]);
    }

    printf("-----------------------------\n");

    for(i = 0; i < tam; i++){
        prod = prod + (vetor1[i]*vetor2[i]);
    }

    printf("Produto escalar = %i\n", prod);

    printf("-----------------------------\n");

    return 0;
}
