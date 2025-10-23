#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que concatene o conteúdo de dois arquivos. O conteúdo dos dois arquivos
//deverá ser adicionado em um terceiro arquivo.
int main()
{
    //Abrir os arquivos para leitura e escrita.
    FILE *arq1 = fopen("./arquivos1.txt", "r"); //Arquivo 1 para leitura.
    FILE *arq2 = fopen("./arquivos2.txt", "r"); //Arquivo 2 para leitura.
    FILE *arq3 = fopen("./arquivo3.txt", "w"); //Arquivo para escrita.
    char caracter;

    //Ler conteúdo do primeiro arquivo e adicionar ao arquivo 3.
    while (fscanf(arq1, "%c", &caracter) != EOF) {
        printf("%c", caracter); //Mostrar na tela o conteúdo do arquivo 1.
        fprintf(arq3, "%c", caracter); //Escrever no arquivo 3 inicialmente o conteúdo do arquivo 1.
    }

    //Adicionar quebra de linha para melhor visualização entre os conteúdos dos arquivos.
    fprintf(arq3, "\n");
    printf("\n");

    //Ler conteúdo do segundo arquivo e adicionar ao arquivo 3.
    while (fscanf(arq2, "%c", &caracter) != EOF) {
        printf("%c", caracter); //Mostra na tela o conteúdo do arquivo 2.
        fprintf(arq3, "%c", caracter); //Escrever no arquivo 3 o conteúdo do arquivo 2.
    }

    //Fechar os arquivos.
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    return 0;
}