# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define pi 3.141592

// Protótipos

float teste(float numero);
float area_circulo(float raio);

// Principal
int main(){
    float a,b;

    printf("O float digitado será arredondado para baixo: ");
    scanf("%f", &a);
    printf("%f\n\n", teste(a));

    printf("Forneça o raio da circunferência: ");
    scanf("%f", &b);
    printf("A area é igual a    %f", area_circulo(b));

    return 0;
}

// Funções

float teste(float numero){
    float n;
    n = floor(numero);
    return n;
}

float area_circulo(float raio){
    float area;

    area = pi*pow(raio,2);
    return area;
}
