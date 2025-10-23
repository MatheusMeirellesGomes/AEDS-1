#include <stdio.h>
#include <stdlib.h>
//Faça um programa para inserir N letras informadas pelo usuário em um arquivo texto, onde N é uma quantidade de letras definida pelo
//usuário. Depois de inseridas as N letras, o programa deverá ler todas as N letras do arquivo, calcular e mostrar a quantidade de
//vogais, ou seja, quantas letras a, e, i, o, u.
int main()
{
    //Inicializar Variáveis.
    int N, qntdVogais = 0;
    char letra;

    //Abrir arquivo para escrita.
    FILE *arq = fopen("./Letra.txt", "w");

    //Solicitar ao usuário a quantidade de letras que ele deseja inserir.
    printf("Quantas letras vai informar: ");
    scanf("%d", &N);

    //Loop para inserir as letras no arquivo.
    for (int letras = 1; letras <= N; letras++) {
        //Solicitar ao usuário uma letra.
        printf("Informe uma letra: ");
        scanf(" %c", &letra);
        fprintf(arq, "%c\n", letra);
    }

    //Fechar o arquivo após a escrita das letras.
    fclose(arq);

    //Abrir o arquivo para leitura.
    FILE *arqLeitura = fopen("./Letra.txt", "r");

    //Loop para ler as letras do arquivo e contar as vogais.
    while (fscanf(arqLeitura, "%c", &letra) != EOF) {
        //Verificar se a letra é uma vogal.
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            qntdVogais++;
        }
    }

    //Fechar o arquivo após a leitura.
    fclose(arqLeitura);

    //Reabrir o arquivo para adicionar a quantidade de vogais encontradas.
    FILE *arqEscrita = fopen("./Letra.txt", "a"); //Modo "a" para adicionar ao final do arquivo.
    fprintf(arqEscrita, "\nQuantidade de vogais encontradas: %d\n", qntdVogais);

    //Fechar o arquivo após a escrita.
    fclose(arqEscrita);

    //Mostrar a quantidade de vogais encontradas.
    printf("Quantidade de vogais encontradas: %d\n", qntdVogais);

    return 0;
}