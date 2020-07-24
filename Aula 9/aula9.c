# include <stdio.h>
# include <stdlib.h>

/*
    for(inicialização; condição; incremento)
    {
        comandos;
    }
*/

int main(){
    int i,j;

    for(i=1;i<11;i++){
        printf("%i ", i);
    }

    printf("\n");

    for(i = 10; i>0; i--){
        printf("%i ", i);
    }

    printf("\n");

    for(i = 1; i < 5; i++){
        for(j = 1; j < 5; j++){
            printf("%i %i \n", i,j);
        }
        printf("\n");
    }


    return 0;
}
