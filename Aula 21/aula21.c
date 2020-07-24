# include <stdio.h>
# include <stdlib.h>


int main(){

    int teste;
    int *point1, *point2;

    teste = 500;

    point1 = &teste;
    point2 = point1;

    printf("No local %p encontra-se o valor %d.", point2, *point2);

    return 0;
}
