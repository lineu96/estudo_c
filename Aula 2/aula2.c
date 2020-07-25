// Aula 2 - printf e scanf
// scanf() - ler entrada do teclado

# include <stdio.h>
# include <stdlib.h>

int main(void){

    int numero;

    printf("Digite um numero: \n");
    scanf("%i", &numero);

    printf("\nVoce digitou %i\n", numero);

return 0;

}
