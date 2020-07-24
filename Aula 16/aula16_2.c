# include <stdio.h>
# include <stdlib.h>


# define tam 5

int main(){

    int i;
    int vetor[tam];

    for(i = 0; i < tam; i++){
        printf("Informe o elemento %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    for(i = 0; i < tam; i++){
        printf("%i \n", vetor[i]);
    }




    return 0;
}
