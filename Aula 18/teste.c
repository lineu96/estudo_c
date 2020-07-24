# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
    int dim1,dim2,i,j;
    int matriz[dim1][dim2];

    dim1 = 3;
    dim2 = 3;


    for(i = 0; i < dim1; i++){
        for(j = 0; j < dim2; j++){

            printf("%i_%i ", i,j);

        }
        printf("\n");
    }


    return 0;
}
