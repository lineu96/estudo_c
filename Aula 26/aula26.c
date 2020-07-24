# include <stdio.h>
# include <stdlib.h>

int main(){

    int var;
    int *point1;
    int **point2;

    var = 15;
    point1 = &var;
    point2 = &point1;

    printf("----------------------------------------\n");

    printf(" var = %i \n point1 = %i \n point2 = %i \n\n", &var, point1, point2);

    printf("----------------------------------------\n");

    printf(" var = %i \n point1 = %i \n point2 = %i \n\n", var, *point1, **point2);

    printf("----------------------------------------\n");

    return 0;
}
