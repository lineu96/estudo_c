// Aula 13 - exercicio: jogo da soma

# include <stdio.h>
# include <stdlib.h>

int main(void){

    printf("---------------------------------------\n");
    printf("JOGO DA SOMA\n");
    printf("---------------------------------------\n");

    int n1,n2,resposta,acertos,erros;

    acertos = 0;
    erros = 0;

    for(n1=0;n1<=5;n1++){
        for(n2=0;n2<=3;n2++){

            printf("Quanto é %i + %i?", n1,n2);
            scanf("%i", &resposta);

            if(n1 + n2 == resposta){
                printf("Resposta correta\n");
                acertos++;
            } else{
                printf("Resposta incorreta\n");
                erros++;
                }
        }
        printf("\n%i acertos\n", acertos);
        printf("\n%i erros\n\n", erros);
    }

    return 0;
}
