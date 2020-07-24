# include <stdio.h>
# include <stdlib.h>

// Ponteiros

/*
So apontadores para endereços de memória

A variável tem um valor
Este valor é armazenado em um endereço da memória

Um ponteiro ocupa um espaço na memória,
ou seja,
tem outro endereço que aponta para o endereço da variavel original

O ponteiro armazena o endereço na memória da variável

*/

// operadores & e *


int main(){

    int variavel = 250; // variavel inteira
    int *ponteiro; // ponteiro para a variavel
    int exibe; // variavel que vai exibir o valor 250

    ponteiro = &variavel; // ponteiro esta apontando para o endereço da variável

    exibe = *ponteiro; // recebe o conteudo do endereço para o qual o ponteiro aponta

    printf("%i\n", exibe);
    printf("%i\n", ponteiro);
    printf("%i\n", *ponteiro);


    return 0;
}
