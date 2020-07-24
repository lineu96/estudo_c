# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// Inicialização de vetores

int main(){

    printf("\n----------------------\n");

    printf("Vetor 1\n");
    int vetor[] = {1,2,3,4,5};
    int i;

    for(i = 0; i < 5;i++){
        printf("%i ", vetor[i]);
    }

    printf("\n----------------------\n");

    printf("Vetor 2\n");
    int vetor2[3] = {1,2,3};

        for(i = 0; i < 3;i++){
        printf("%i ", vetor2[i]);
    }

    printf("\n----------------------\n");

    return 0;
}
