# include <stdio.h>
# include <stdlib.h>


int main(){

    int vet[10] = {3,5,2,4,7,8,4,1,8,9};
    int *point, i;

    point = vet;

    printf("\n------------------------------\n");

    for(i = 0; i < 10; i++){
        printf("%i  ", point[i]);
    }

    printf("\n------------------------------\n");

    for(i = 0; i < 10; i++){
        printf("%i  ", *(point+i));
    }

    printf("\n------------------------------\n");
    return 0;
}
