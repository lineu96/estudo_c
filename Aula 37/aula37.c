// Aula 37 - funções que retornam inteiros

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/* Funções que retornam inteiros*/

/* ---- Prototipos ---- */

int soma(int n1, int n2);
int sub(int n1, int n2);
int mult(int n1, int n2);
int dv(int n1, int n2);

/* ---- Main ---- */

int main(){

    printf("-----------------------------\n");
    printf("FUNÇÕES QUE RETORNAM INTEIROS\n");
    printf("-----------------------------\n");

    int a,b;

    printf("Forneça um valor: \n");
    scanf("%i", &a);

    printf("Forneça outro valor: \n");
    scanf("%i", &b);

    printf("Soma: %i\n",soma(a,b));
    printf("Subtração: %i\n",sub(a,b));
    printf("Multiplicaçao: %i\n",mult(a,b));
    printf("Divisao: %i\n",dv(a,b));


    return 0;
}

/* ---- Funções ---- */

int soma(int n1, int n2){
    int s;

    s = n1+n2;
    return(s);

}

int sub(int n1, int n2){
    int s;

    s = n1-n2;
    return(s);

}

int mult(int n1, int n2){
    int s;

    s = n1*n2;
    return(s);

}

int dv(int n1, int n2){
    int s;

    s = n1/n2;
    return(s);

}
