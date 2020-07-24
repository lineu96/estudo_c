# include <stdio.h>
# include <stdlib.h>

struct estrutura {
    int a;
    int b;
    char c;
};

void imprimir(struct estrutura parametro){
    printf("%i\n", parametro.a);
    printf("%i\n", parametro.b);
    printf("%c\n", parametro.c);
}

int main(){

    struct estrutura argumento;

    argumento.a = 10;
    argumento.b = 15;
    argumento.c = 'd';

    imprimir(argumento);

    return 0;
}
