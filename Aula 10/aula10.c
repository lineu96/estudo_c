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

int main(){

    int opcao, valor;

    printf("----------------------------\n");
    printf("Conversor de bases numéricas\n");
    printf("----------------------------\n\n");

    printf("Para converter de decimal para hexadecimal, tecle 1\n");
    printf("Para converter de hexadecimal para decimal, tecle 2\n");

    printf("Digite a opção: ");
    scanf("%i", &opcao);

    switch(opcao){
        case 1:
            printf("Digite o valor em decimal: ");
            scanf("%i", &valor);
            printf("%i em hexadecimal é %x", valor, valor);
        break;

        case 2:
            printf("Digite o valor em hexadecimal: ");
            scanf("%x", &valor);
            printf("%x em decimal é %i", valor, valor);
        break;

        default:
            printf("Opção inválida");
    }


    return 0;
}
