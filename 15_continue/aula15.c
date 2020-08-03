// Aula 15 - continue (salto de iterações)

# include <stdio.h>
# include <stdlib.h>

int main(){

    printf("---------------------------------------\n");
    printf("CONTINUE\n");
    printf("---------------------------------------\n");

    int i;

    for(i=1;i<=10;i++){

        if(i%2 != 0) continue;

        printf("%i\n",i);
    }

    return 0;
}
