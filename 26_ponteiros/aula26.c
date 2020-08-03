// Aula 26 - cadeia de ponteiros (um ponteiro apontando para outro)

# include <stdio.h>
# include <stdlib.h>

int main(){

    printf("-----------------------------\n");
    printf("CADEIA DE PONTEIROS\n");
    printf("-----------------------------\n");

    int var;
    int *point1;
    int **point2;

    printf("Digite um valor: ");
    scanf("%i", &var);
    printf("-----------------------------\n");

    point1 = &var;
    point2 = &point1;

    printf("Endereços de memória\n");
    printf(" var = %p \n point1 = %p \n point2 = %p \n\n", &var, point1, point2);

    printf("----------------------------------------\n");

    printf("Valor da variável\n");
    printf(" var = %i \n point1 = %i \n point2 = %i \n\n", var, *point1, **point2);

    printf("----------------------------------------\n");

    return 0;
}
