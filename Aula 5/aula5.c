# include <stdio.h>
# include <stdlib.h>

// Operadores lógicos
// && e
// || ou
// !  não

int main(){

    printf("Operadores Lógicos:\n");
    int a = 1, b = 10, c = 1, d = 100;

    if (a < b && a < d){
        printf("%i é menor que %i E %i\n", a,b,d);
    }

    if (a > b || a == c){
        printf("%i é maior que %i OU igual a %i\n", a,b,c);
    }

    return 0;
}

