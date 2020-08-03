// Aula 21 - ponteiros

# include <stdio.h>
# include <stdlib.h>


int main(){

    printf("-----------------------------\n");
    printf("ARITIMETICA COM PONTEIROS\n");
    printf("-----------------------------\n");

    printf("Se incrementarmos ponteiros ele serão deslocados o numero de bytes\n");
    printf("-----------------------------\n");

    int   *int_point;
    char  *char_point;
    float *float_point;

    printf("Endereço do ponteiro inteiro: %i.\n", int_point);
    printf("Endereço do ponteiro inteiro incrementado: %i.\n", ++int_point);
    printf("Endereço do ponteiro inteiro decrementado: %i.\n", --int_point);
    printf("-----------------------------\n");

    printf("Endereço do ponteiro character: %i.\n", char_point);
    printf("Endereço do ponteiro character incrementado: %i.\n", ++char_point);
    printf("Endereço do ponteiro character decrementado: %i.\n", --char_point);
    printf("-----------------------------\n");

    printf("Endereço do ponteiro float: %i.\n", float_point);
    printf("Endereço do ponteiro float incrementado: %i.\n", ++float_point);
    printf("Endereço do ponteiro float decrementado: %i.\n", --float_point);
    printf("-----------------------------\n");


    return 0;
}
