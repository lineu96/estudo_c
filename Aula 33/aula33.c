# include <stdio.h>
# include <stdlib.h>

/*
    unios - structs que ocupam menos espaço
*/

union estrutura1 {
    int a;
    char b;
    float c;
};

struct estrutura2 {
    int a2;
    char b2;
    float c2;
};

int main(){

    printf("União %i\n", sizeof(union estrutura1));
    printf("Estrutura %i\n", sizeof(struct estrutura2));

    return 0;
}
