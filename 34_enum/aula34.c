// Aula 34 - enumeraçao

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    printf("-----------------------------\n");
    printf("ENUMERAÇÃO\n");
    printf("-----------------------------\n");

    enum teste{a,b,c,d};

    printf("%i\n",a);
    printf("%i\n",b);
    printf("%i\n",c);
    printf("%i\n",d);

    printf("----------------------\n",d);

    enum teste2{e=2,f,g=173,h};

    printf("%i\n",e);
    printf("%i\n",f);
    printf("%i\n",g);
    printf("%i\n",h);

    return 0;
}
