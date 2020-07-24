# include <stdio.h>
# include <stdlib.h>

int main(){

    int i,j;


    // Incremento e decremento tradicional de qualquer valor
    i = 0;
    printf("%i\n",i);
    i = i + 4;
    printf("%i\n",i);
    i = i - 4;
    printf("%i\n\n",i);

    // Incremento e decremento com recurso (+= e -=) de qualquer valor
    i = 0;
    printf("%i\n",i);
    i += 4;
    printf("%i\n",i);
    i -= 4;
    printf("%i\n\n",i);

    //Incremento e decremento em 1
    j = 1;
    printf("%i\n", j);
    printf("%i\n", ++j);
    printf("%i\n", --j);


    return 0;
}
