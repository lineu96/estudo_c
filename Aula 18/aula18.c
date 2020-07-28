// Aula 18 - matrizes

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// tipo nome[dim1][dim2]...[dimn];

int main(void){

    int linhas, colunas, i, j;

    printf("-----------------------------\n");
    printf("MATRIZES (VETORES MULTIDIMENSIONAIS)\n");
    printf("-----------------------------\n");

    printf("Informe o número de linhas da matriz: ");
    scanf("%i", &linhas);

    printf("Informe o número de colunas da matriz: ");
    scanf("%i", &colunas);

    printf("-----------------------------\n");

    int matriz[linhas][colunas];

     for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){

        printf("Linha %i, Coluna %i: ", i,j);
        scanf("%i", &matriz[i][j]);
        }
    printf("\n");

    }

    printf("-----------------------------\n");
    printf("Matriz fornecida\n");
    printf("-----------------------------\n");

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
