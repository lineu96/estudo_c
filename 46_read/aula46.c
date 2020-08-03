// Aula 46 - leitura de arquivos

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

// Protótipos
void leArquivo(int *vet);

// Principal
int main(){

    printf("-----------------------------\n");
    printf("ARQUIVOS\n");
    printf("-----------------------------\n");

    int vet[10];

    leArquivo(vet);

    printf("Arquivo lido e criado com sucesso\n\n");

    return 0;
}

// Funções
void leArquivo(int *vet){

    char i = 0;

    FILE *arquivo;

    arquivo = fopen("teste.txt", "r");

        for(i=0;i<9;i++){
            fscanf(arquivo, "%d\n", &vet[i]);
            }

        arquivo = fopen("teste02.txt", "w");

        for(i=0;i<9;i++){
            fprintf(arquivo, "%d\n", vet[i]+2);
            }

         fclose(arquivo);

}
