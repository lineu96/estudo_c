// Aula 5 - operadores logicos

# include <stdio.h>
# include <stdlib.h>

int main(void) {

    printf("\nOperadores logicos (e: &&, ||: ou, nao: !)\n");
    printf("\n---------------------------------------\n");

    printf("\nvalor1 = 1; valor2 = 2; valor3 = 3; valor4 = 1\n");

    int valor1 = 1;
    int valor2 = 2;
    int valor3 = 3;
    int valor4 = 1;

    printf("\n---------------------------------------\n");

    printf("\nvalor3 eh maior que valor1 E (&&) valor2?\n");

    if(valor3 > valor1 && valor3 > valor2){
        printf("\nSIM\n");
    } else {
        printf("\nNAO\n");
    }

    printf("\n---------------------------------------\n");

    printf("\nvalor1 eh igual a valor4 OU (||) valor2?\n");

    if(valor1 == valor4 || valor1 == valor2){
        printf("\nSIM\n");
    } else {
        printf("\nNAO\n");
    }

    return 0;
}
