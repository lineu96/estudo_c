// Aula 10 - switch

# include <stdio.h>
# include <stdlib.h>

/*
    switch(variavel)
    {

        case constante 1:
            comandos;
            break;

        case constante 2:
            comandos;
            break;

        default:
            comandos;
    }

*/

int main(void){

    int opcao, valor;
    printf("---------------------------------------\n");
    printf("CONVERSOR DECIMAL/HEXADECIMAL\n");
    printf("---------------------------------------\n");
    printf("Digite 1 para converter decimal para hexadecimal\n");
    printf("Digite 2 para converter hexadecimal para decimal\n");
    printf("---------------------------------------\n");

    printf("Opção:  ");
    scanf("%i", &opcao);

    switch(opcao){

        case 1:
            printf("Digite o valor decimal: ");
            scanf("%i", &valor);
            printf("%i em hexa é igual a %x\n", valor,valor);
        break;

        case 2:
            printf("Digite o valor hexadecimal: ");
            scanf("%x", &valor);
            printf("%x em decimal é igual a %i", valor, valor);
        break;

        default:
            printf("Opção inválida");
        break;

    }

    return 0;
}
