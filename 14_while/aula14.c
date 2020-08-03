// Aula 13 - while & do while

# include <stdio.h>
# include <stdlib.h>

int main(){

    printf("---------------------------------------\n");
    printf("WHILE & DO WHILE\n");
    printf("---------------------------------------\n");

    printf("WHILE\n");

    int i = 1;

    while(i<=10){
        printf("%i\n",i);
        i++;
    }

    printf("---------------------------------------\n");

    printf("DO WHILE\n");

    i=1;

    do{
        printf("%i\n",i);
        i++;
    } while(i<=10);

    return 0;
}
