# include <stdio.h>
# include <stdlib.h>

// Operadores aritméticos
// Soma +
// Subtração -
// Multiplicação *
// Divisão /
// Módulo (resto da divisão) %

// Operadores relacionais
// Maior >
// Maior ou igual <=
// Menor <
// Menor ou igual <=
// Igual ==
// Diferente !=

int main(){

    printf("Operadores Aritméticos:\n");
    printf("%d\n", 1+1);
    printf("%d\n", 1-1);
    printf("%d\n", 3*2);
    printf("%d\n", 10/5);
    printf("%d\n", 9%4);

    printf("\n\nOperadores Relacionais:\n");
        int a = 1, b = 10, c = 1, d = 100;

    if (a < b){
        printf("%i é menor que %i\n", a,b);
    }

    if (d > c){
        printf("%i é maior que %i\n", d,c);
    }

    if (a == c){
        printf("%i é igual a %i\n", a,c);
    }

    if (d == c || d == a){
        printf("%c é igual a %c ou %c\n", d,c,a);
    }

    return 0;
}
