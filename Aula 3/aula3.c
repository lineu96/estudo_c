// Aula 3 -

# include <stdio.h>
# include <stdlib.h>

int main(void){

    // declaracao de variaveis locais (dentro da funcao main)

    printf("--------------------------------\n");
    printf("Variaveis nao inicializadas (lixo de memoria) \n");

    // variaveis não inicializadas
    int inteiro;
    float real;
    char caracter;

    // lixo
    printf("\n%i\n%f\n%c\n", inteiro, real, caracter);

    printf("--------------------------------\n");
    printf("Variaveis inicializadas \n");

    // inicializando variaveis
    int inteiro2 = 10;
    float real2 = 9.1;
    char caracter2 = 'x';

    printf("%i\n", inteiro2);
    printf("%f\n", real2);
    printf("%c\n", caracter2);

    printf("--------------------------------\n");

return 0;

}
