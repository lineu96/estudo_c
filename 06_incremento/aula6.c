// Aula 6 - operadores de assinalamento, incremento e decremento

# include <stdio.h>
# include <stdlib.h>

int main(void){

    printf("\nOperadores de assinalamento, incremento e decremento\n");
    printf("\n---------------------------------------\n");

    printf("var1 = 1, var2 = 2, var3 = 3, var4 = 1");

    int var1 = 1, var2 = 2, var3 = 3, var4 = 1;

    printf("\n---------------------------------------\n");

    printf("\nAssinalamento\n");

    printf("\nvar1 += 1 equivale a var1 = var1 + 1 \n");

    printf("%i",var1 += 1);

    printf("\nvar2 -= 1 equivale a var2 = var2 - 1 \n");

    printf("%i",var2 -= 1);

    printf("\n---------------------------------------\n");

    printf("\nIncremento\n");

    printf("\nvar3++ ou ++var3 equivale a var3 = var3 + 1 \n");
    printf("%i", ++var3);

    printf("\nvar4-- ou --var4 equivale a var4 = var4 - 1 \n");
    printf("%i", --var4);


return 0;

}
