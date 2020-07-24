# include <stdio.h>
# include <stdlib.h>
# include <string.h>


int soma2n(n1,n2);


int main(){

    int a,b, soma;

    printf("Forneça um valor: \n");
    scanf("%i", &a);

    printf("Forneça outro valor: \n");
    scanf("%i", &b);

    soma = soma2n(a,b);

    printf("A soma entre %i e %i é %i.",a,b,soma);

}

int soma2n(int n1, int n2){
    int s;

    s = n1+n2;

    return(s);
}
