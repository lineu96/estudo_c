// Aula 7 - condicional if else

# include <stdio.h>
# include <stdlib.h>

int main(void){

    printf("\nCondicional if else\n");
    printf("---------------------------------------\n");

    printf("\nLe 2 valores e diz se o primeiro é menor que o segundo ou o oposto\n");
    printf("---------------------------------------\n");

    int valor1,valor2;

    printf("Forneça um valor: ");
    scanf("%i", &valor1);

    printf("---------------------------------------\n");

    printf("Forneça outro valor: ");

    scanf("%i", &valor2);

    printf("---------------------------------------\n");

    if (valor1 > valor2){
        printf("%i é maior que %i", valor1, valor2);
    } else {
        printf("%i não é maior que %i", valor1,valor2);
    }

    printf("\n---------------------------------------\n");
return 0;
}
