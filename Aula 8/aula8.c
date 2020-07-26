// Aula 8 - exercicio: conversor decimal - hexadecimal

# include <stdio.h>
# include <stdlib.h>

int main(void){

    int opcao, valor;
    printf("---------------------------------------\n");
    printf("CONVERSOR DECIMAL/HEXADECIMAL\n");
    printf("---------------------------------------\n");
    printf("Digite 1 para converter decimal para hexadecimal\n");
    printf("Digite 2 para converter hexadecimal para decimal\n");
    printf("---------------------------------------\n");

    scanf("%i", &opcao);

    printf("---------------------------------------\n");

    if(opcao == 1){
        printf("Digite digite o valor a ser convertido: \n");
        scanf("%i", &valor);
        printf("---------------------------------------\n");
        printf("%i em hexadecimal é %x\n", valor, valor);
        printf("---------------------------------------\n");
    } else if (opcao == 2){
        printf("Digite digite o valor a ser convertido: \n");
        scanf("%x", &valor);
        printf("---------------------------------------\n");
        printf("%x em decimal é %i\n", valor, valor);
        printf("---------------------------------------\n");
    } else {
        printf("---------------------------------------\n");
        printf("Opção inválida!\n");
        printf("---------------------------------------\n");
    }

return 0;
}
