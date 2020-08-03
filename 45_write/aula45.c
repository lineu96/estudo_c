// Aula 45 - escrita de arquivos

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

// Protótipos


// Principal
int main(){

    printf("-----------------------------\n");
    printf("ARQUIVOS\n");
    printf("-----------------------------\n");

    FILE *arquivo; // cria-se um ponteiro para o arquivo

    arquivo = fopen("teste.txt", "w"); // abre o arquivo (w para escrita, r para leitura)

    fprintf(arquivo, "\nHello World\n"); // escreve no arquivo

    fclose(arquivo); // fecha o arquivo

    return 0;
}

// Funções

