# include <stdio.h>
# include <stdlib.h>

/*Strings (cadeias de caracteres)
 é um vetor.
 o ultimo caractere é o nulo \o
*/

# include <string.h>

int main(){
    char nome[51], snome[51];
    int comp1, comp2;

    printf("--------\n");
    printf("Strings \n");
    printf("--------\n");

    printf("Escreva seu nome: ");
    scanf("%s", &nome);
    comp1 = strlen(nome);

    printf("Escreva seu sobrenome: ");
    scanf("%s", &snome);
    comp2 = strlen(snome);

    strcat(nome, " "); // concatena strings (a primeira é a de destino)
    strcat(nome, snome); // concatena strings

    printf("-------------------\n");
    printf("Olá %s\n", nome);

    printf("-------------------\n");

    printf("Seu nome tem %i caracteres\n", comp1);
    printf("Seu sobrenome tem %i caracteres\n", comp2);

    printf("-------------------\n");

    return 0;
}
