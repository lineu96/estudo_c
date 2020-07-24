# include <stdio.h>
# include <stdlib.h>

// Tipos de variável

// char - caracter
// int - inteiro
// float - real
// double - real mais precisa
// void - sem valor


int main(){

    printf("Variáveis não inicializadas:");

    // variaveis locais (dentro da função)
    char caracter;
    int inteiro;
    float real;
    double real2;

    // quando a variável não  incializada um valor é atribuído a ela
    // é chamado de lixo de memória
    printf("%c\n", caracter);
    printf("%i\n", inteiro);
    printf("%f\n", real);
    printf("%d\n", real2);

    printf("\nVariáveis inicializadas:\n");

    // inicializando
    char   caracter2 = 'a';
    int    inteiro2  = 19;
    float  real21    = 0.6;
    double real22    = 0.2;

    printf("%c\n", caracter2);
    printf("%i\n", inteiro2);
    printf("%.1f\n", real21);
    printf("%.1d\n", real22);

    return 0;
}
