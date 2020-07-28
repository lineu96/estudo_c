// Aula 17 - strings

# include <stdio.h>
# include <stdlib.h>

/*Strings (cadeias de caracteres)
 é um vetor.
 o ultimo caractere é o nulo \o
*/

# include <string.h> //biblioteca especializada

int main(){

    printf("-----------------------------\n");
    printf("STRINGS\n");
    printf("-----------------------------\n");

    char nome[50+1], snome[50+1];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("-----------------------------\n");

    printf("Digite seu sobrenome: ");
    scanf("%s", &snome);

    printf("-----------------------------\n");

    strcat(nome, " ");
    strcat(nome, snome);

    printf("Olá %s", nome);

    printf("\n-----------------------------\n");

    printf("Seu nome todo tem %i letras.\n", strlen(nome)-1);
    printf("Seu primeiro nome tem %i letras.\n", strlen(nome)-strlen(snome)-1);
    printf("Seu sobrenome tem %i letras.", strlen(snome));
    printf("\n-----------------------------\n");

    return 0;
}
