#include <stdio.h>
#include <stdlib.h>
//Implemente um programa que leia um arquivo texto e imprima, linha a linha, o seu conteúdo na
//tela. Imprima também a quantidade de linhas que este arquivo possui, não é para usar vetor ou matriz.
int main()
{
    //Inicializar Arquivo gerado.
    FILE *arq = fopen ("./texto.txt", "r"); //Abrir o arquivo texto para leitura conforme o enunciado.
    char caracter;
    int qntdLinhas = 1; //Variável que vai contar as linhas do arquivo.
    //se qntdLinhas começar com 0, vai de 0 até total de lihas. Se começar com 1, vai de 1 até total de linhas.

    //Ler o arquivo linha a linha e e imprimir na tela o conteúdo deste arquivo.
    while (fscanf (arq, "%c", &caracter) != EOF) //Enquanto não chegar no final do arquivo.
    {
        //Imprimir na tela o texto lido do arquivo.
        printf("%c", caracter);

        //Verificar se o caracter lido é uma quebra de linha.
        if (caracter == '\n') {
            qntdLinhas++; //Incrementar a quantidade de linhas.
        }
    }

    //Imprimir a quantidade de linhas lidas.
    printf("\nQuantidade de linhas: %d\n", qntdLinhas);

    //Fechar o arquivo.
    fclose(arq);

    return 0;
}