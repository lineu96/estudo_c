# include <stdio.h>
# include <stdlib.h>

/*
    if(condição)
    {
        bloco;
    }

    else
    {
        bloco;
    }
*/


int main(){
    int a, b;

    printf("Forneça um valor:\n");
    scanf("%i", &a);

    printf("Forneça um valor:\n");
    scanf("%i", &b);
    getchar();

    if (a<b)
    {
        printf("%i é menor que %i", a, b);
    } else if (b<a)
        {
            printf("%i é maior que %i", a, b);
        }
        else{
            printf("%i é igual a %i", a,b);
        }

    return 0;
}
