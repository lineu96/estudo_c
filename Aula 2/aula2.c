# include <stdio.h>
# include <stdlib.h>

// printf e scanf

int main(){

    int numero; // declara variavel tipo inteira

    printf("Digite um número inteiro: ");
    scanf("%i", &numero); // le uma variavel inteira (%i) e armazena na variavel numero (&numero)

    getchar() // limpa buffer do teclado

    printf("\nVocê digitou o número %i.\n", numero);

    return 0;
}
