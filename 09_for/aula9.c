// Aula 9 - for

# include <stdio.h>
# include <stdlib.h>

int main(void){

    /*
    for (inicialização;condição;incremento){
        BLOCO
        }
    */

    printf("---------------------------------------\n");
    printf("FOR\n");

    int i,j;

    printf("For com incremento\n");

    for(i=1;i<=10;i++){
        printf("%i\n",i);
    }

    printf("---------------------------------------\n");
    printf("For com decremento\n");

    for(i=10;i>=1;i--){
        printf("%i\n",i);
    }

    printf("---------------------------------------\n");
    printf("For aninhado\n");

    for(i=1;i<=5;i++){
        for(j=1;j<=3;j++){
            printf("%i,%i\n",i,j);
        }
        printf("\n");
    }

return 0;

}
