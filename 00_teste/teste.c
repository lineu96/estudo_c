#include <stdio.h>
#include <string.h>

void leEValidaPedido(){
    float valorUnit, valorTotal;
    int unidades;

    do{
        printf("Entre com o preco unitario do produto: ");
        scanf("%f", &valorUnit);
    } while(valorUnit <= 0.0);

    do{
        printf("Entre com o numero de unidades: ");
        scanf("%d", &unidades);
    } while(unidades <= 0.0);

    valorTotal = valorUnit*unidades;
    printf("Valor de compra: %f\n", valorTotal);

}

int main(){
    leEValidaPedido();
}
