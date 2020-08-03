// Aula 35 - typedef

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/*
    typedef

    mudar a forma como se declaram variáveis

    ex. em vez de
    char variavel;

    typedef char caracter;
    caracter variavel;

*/

typedef int inteiro;
typedef float flutuante;
typedef char caracter;

int main(){

    printf("-----------------------------\n");
    printf("TYPEDEF\n");
    printf("-----------------------------\n");

    inteiro x;
    flutuante a;
    caracter s;

    x=10;
    printf("%i\n", x);

    a=1.1;
    printf("%.2f\n", a);

    s='s';
    printf("%c\n", s);

    return 0;
}
