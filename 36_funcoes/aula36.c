// Aula 36 - funções

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/*
    Funções

    tipo nome (parametros){
        instruções;
    }

    usualmente define-se antes da main os protótipos das funções:
    tipo nome (parametros);
    e após a main o corpo da função:

    tipo nome (parametros){
        instruções;
    }
*/

void exemplo(){
    printf("Função teste\n");
}

int soma2n(n1,n2);

int main(){

    printf("-----------------------------\n");
    printf("FUNÇÕES\n");
    printf("-----------------------------\n");

    exemplo();

    int a,b, soma;

    printf("Forneça um valor: ");
    scanf("%i", &a);

    printf("Forneça outro valor: ");
    scanf("%i", &b);

    soma = soma2n(a,b);

    printf("A soma entre %i e %i é %i.",a,b,soma);

    return 0;

}

int soma2n(int n1, int n2){

    int s;

    s = n1+n2;

    return(s);
}
