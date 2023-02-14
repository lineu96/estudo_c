#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv []) {

//mascara - matriz mascara
//lm - linha da mascara
//cm - coluna da mascara

double mascara[3][3] = {1/9, 1/9, 1/9, 1/9, 1/9, 1/9, 1/9, 1/9, 1/9};
int lm,cm;
int m,n;

for(int m = -1,lm = 0; m < 2, lm < 3; m++, lm++){
    for(int n = -1, cm = 0; n < 2, cm < 3; n++, cm++){

        printf("m = %i\n", m);
        printf("lm = %i\n", lm);
        printf("n = %i\n", n);
        printf("cm = %i\n", cm);

        }
    }


//for(int m = -1; m < 2; m++){
//    for(int n = -1; n < 2; n++){
//        for(lm = 0;lm < 3; lm++){
//            for(cm = 0; cm < 3; cm++){
//
//        printf("Linha imagem = %i\n", m);
//        printf("Linha mascara = %i\n", lm);
//        printf("Coluna imagem = %i\n", n);
//        printf("Coluna mascara = %i\n", cm);
//
//                }
//            }
//        }
//    }

return 0;
}
