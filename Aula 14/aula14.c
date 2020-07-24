# include <stdio.h>
# include <stdlib.h>

int main(){

    int i;

    printf("\nWHILE\n");
    while(i<11){
        printf("%i\n",i);
        i+=1;
    }

    int j;

    printf("\nDO WHILE\n");
    do {
        printf("%i \n", j);
        j+=1;
    } while(j<11);

// LOOPS INFINITOS

//    while(1){
//        printf("%i\n", i);
//        i+=1;
//    }

// for(;;i++){
//     printf("%i\n",i);
// }

    return 0;
}
