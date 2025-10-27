#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Considere um arquivo texto entrada.txt que armazene números em ponto flutuante em cada uma de suas linhas. Escreva um programa em C que determine
//o valor máximo, o valor mínimo e a média desses valores armazenados no arquivo. Imprima esses valores na tela.
int main()
{
    //Inicializar Variáveis.
    int numero, maximo, minimo, qntdNumeros = 0, qntdLinhas;
    float soma = 0, media;

    //Gerar números aleatórios.
    srand((unsigned)time(NULL)); //Inicializar gerador de números aleatórios.

    //Gerar quantidade aleatória de números entre 1 e 20
    qntdLinhas = 1 + (rand() % 20);

    //Criar arquivo para escrita com os números aleatórios.
    FILE *arqEscrita = fopen("./entrada.txt", "w");

    //Gerar números aleatórios e gravar no arquivo
    for (int cont = 0; cont < qntdLinhas; cont++) {
        //Gerar número aleatório entre 1 e 100.
        numero = 1 + (rand() % 100);

        //Imprimir os números gerados no arquivo.
        fprintf(arqEscrita, "%d\n", numero);
    }

    //Fechar o arquivo de escrita para abrir o de leitura.
    fclose(arqEscrita);

    //Agora abrir o arquivo para leitura dos números gerados no arquivo 'w'.
    FILE *arq = fopen("./entrada.txt", "r");

    //Ler o primeiro número para inicializar máximo e mínimo
    fscanf(arq, "%d", &numero); //Primeiro número lido do arquivo .

    //Inicializar Máximo, Mínimo, Soma e Quantidade de Números..
    maximo = numero;
    minimo = numero;
    soma = numero;
    qntdNumeros = 1;

    //Ler os demais números do arquivo
    while (fscanf(arq, "%d", &numero) != EOF) { //Enquanto não chegar no final do arquivo.
        //Verificar e atualizar o valor máximo.
        if (numero > maximo) {
            maximo = numero;
        }

        //Verificar e atualizar o valor mínimo.
        if (numero < minimo) {
            minimo = numero;
        }

        //Acumular a soma dos números
        soma += numero;
        qntdNumeros++;
    }

    //Calcular a média dos números lidos.
    media = soma / qntdNumeros;

    //Imprimir os resultados na tela.
    printf("Valor maximo: %d\n", maximo);
    printf("Valor minimo: %d\n", minimo);
    printf("Media: %.2f\n", media);

    //Fechar o arquivo.
    fclose(arq);

    //Reabrir o arquivo para adicionar os resultados ao final do arquivo.
    FILE *arqResultado = fopen("./entrada.txt", "a"); //Modo "a" para adicionar ao final do arquivo.
    fprintf(arqResultado, "\nValor maximo: %d\n", maximo);
    fprintf(arqResultado, "Valor minimo: %d\n", minimo);    
    fprintf(arqResultado, "Media: %.2f\n", media);

    //Fechar o arquivo.
    fclose(arqResultado);

    return 0;
}
