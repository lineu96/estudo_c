# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define dim1 3
# define dim2 3

int main(){

    int i,j;
    int matriz[dim1][dim2];

    for(i = 0; i < dim1; i++){
        for(j = 0; j < dim2; j++){

        printf("Linha %i, Coluna %i: ", i,j);
        scanf("%i", &matriz[i][j]);
        }
    printf("\n");

    }

    printf("------\n");
    printf("Matriz\n");
    printf("------\n");

    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("------\n");


    return 0;
}
