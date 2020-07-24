# include <stdio.h>
# include <stdlib.h>

// conversor de bases numéricas

int main(){

    int opcao, valor;

    printf("----------------------------\n\n");
    printf("Conversor de bases numéricas\n");
    printf("----------------------------\n\n");

    printf("1: decimal para hexadecimal\n");
    printf("2: hexadecimal para decimal\n");
    printf("Informe a opção: ");

    scanf("%i", &opcao);

    if (opcao == 1){
        printf("Digite o valor decimal: ");
        scanf("%d",&valor);
        printf("%d em hexadecimal é %x\n", valor,valor);
    } else if (opcao == 2){
            printf("Digite o valor em hexadecimal: ");
            scanf("%x", &valor);
            printf("%x em decimal é %d\n", valor,valor);
        } else {
            printf("Opção inválida!");
        }

    return 0;
}
