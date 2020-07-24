# include <stdio.h>
# include <stdlib.h>

/*Sistema de consulta a região e vendedores*/

int main(){

    int regiao;
    int vendedor;

    printf("Regiões disponíveis:\n");
    printf("--------------------\n");
    printf("1 - Norte\n");
    printf("2 - Sul\n");
    printf("--------------------\n");
    printf("Selecione a região:\n");
    scanf("%i", &regiao);
    printf("--------------------\n");

    switch(regiao){

        case 1:
            printf("Selecione o vendedor:\n");
            printf("1 - vendedor 1\n");
            printf("2 - vendedor 2\n");
            scanf("%i", &vendedor);

            switch(vendedor){

                case 1:
                    printf("Vendedor 1 Norte...\n");
                    printf("Informações pessoais\n");
                    printf("Vendas\n");
                break;

                case 2:
                    printf("Vendedor 2 Norte...\n");
                    printf("Informações pessoais\n");
                    printf("Vendas\n");
                break;

                default:
                    printf("Vendedor não encontrado.");
                break;

            }

        break;

        case 2:
            printf("Selecione o vendedor:\n");
            printf("1 - vendedor 1\n");
            printf("2 - vendedor 2\n");
            scanf("%i", &vendedor);

            switch(vendedor){

                case 1:
                    printf("Vendedor 1 Sul...\n");
                    printf("Informações pessoais\n");
                    printf("Vendas\n");
                break;

                case 2:
                    printf("Vendedor 2 Sul...\n");
                    printf("Informações pessoais\n");
                    printf("Vendas\n");
                break;

                default:
                    printf("Vendedor não encontrado.");
                break;

            }

        break;

        default:
                printf("Região inválida");

    }


    return 0;
}
