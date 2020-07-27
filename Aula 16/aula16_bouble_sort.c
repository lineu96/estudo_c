// Aula 16 - metodo bolha

# include <stdio.h>
# include <stdlib.h>

int main(void){

    int vetor[5], i, temp, troca;

    printf("---------------------------------------\n");
    printf("ORDENAÇÃO METODO BOLHA\n");
    printf("---------------------------------------\n");

    printf("Forneça o vetor\n");
    printf("---------------------------------------\n");

    for(i=0;i<=4;i++){
        printf("Digite o elemento numero %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("---------------------------------------\n");
    printf("Vetor fornecido\n");
    printf("---------------------------------------\n");

    for(i=0;i<=4;i++){
        printf("%i   ", vetor[i]);
    }

    printf("\n---------------------------------------\n");
    printf("Vetor ordenado\n");
    printf("---------------------------------------\n");

    do{
        troca = 0;

        for(i=0;i<=4;i++){
            if(vetor[i] > vetor[i+1]){
                temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temp;
                troca = 1;
                }
            }
       }while(troca != 0);

    for(i=0;i<=4;i++){
        printf("%i   ", vetor[i]);
    }


    return 0;
}
