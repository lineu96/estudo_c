// Aula 20 - ponteiros

# include <stdio.h>
# include <stdlib.h>

// Ponteiros

/*
Sao apontadores para endereços de memória

A variável tem um valor, este valor é armazenado em um endereço da memória

O ponteiro que aponta para esta variavel diz em o endereço na memoria em que o valor está

*/

// operadores & e *


int main(){

    printf("-----------------------------\n");
    printf("PONTEIROS\n");
    printf("-----------------------------\n");

    printf("variavel recebe um valor\n");
    printf("ponteiro recebe o endereço da variavel (&variavel)\n");
    printf("*ponteiro mostra o conteudo da variavel\n");
    printf("ponteiro mostra o endereço da variavel\n");
    printf("-----------------------------\n");

    int variavel; // variavel inteira igual a 250
    int *ponteiro;      // ponteiro para a variavel

    printf("Digite um valor: ");
    scanf("%i", &variavel);

    ponteiro = &variavel; // ponteiro recebe o endereço de memoria da variavel

    printf("Sua variavel está no endereço %p e possui valor %i\n", ponteiro, *ponteiro);

    printf("-----------------------------\n");

    return 0;
}
