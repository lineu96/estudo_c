// Aula 24 - ponteiros e strings

# include <stdio.h>
# include <stdlib.h>

int main(){

    char *point;
    point = "string teste";

    printf("-----------------------------\n");
    printf("Printando string armazenada diretamente num ponteiro\n");
    printf("-----------------------------\n");

    printf("\n%s\n", point);
    printf(point);

    return 0;
}
