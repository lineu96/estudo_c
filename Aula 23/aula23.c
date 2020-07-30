// Aula 23 - indexação de ponteiros

# include <stdio.h>
# include <stdlib.h>


int main(){
    printf("-----------------------------\n");
    printf("INDEXAÇÃO DE PONTEIROS\n");
    printf("-----------------------------\n");

    int vet[10];
    int *point, i;

    for(i=0;i<10;i++){
        printf("Informe o elemento %i do vetor: ", i);
        scanf("%i", &vet[i]);
    }

    point = vet;

    printf("Acessando os elementos do vetor pelo ponteiro\n");
    printf("-----------------------------\n");

    for(i = 0; i < 10; i++){
        printf("%i  ", point[i]);
    }

    printf("\n-----------------------------\n");
    printf("Acessando os elementos do vetor pelo ponteiro via indexação\n");
    printf("-----------------------------\n");

    for(i = 0; i < 10; i++){
        printf("%i  ", *(point+i));
    }

    printf("\n------------------------------\n");
    return 0;
}
