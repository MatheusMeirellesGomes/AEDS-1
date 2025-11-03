#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um procedimento que preencha 2 matrizes, A 4 x 6 e B 4 x 6. Faça uma função para cada uma das situações a seguir,
//que recebe duas matrizes preenchidas, calcula e retorna as matrizes indicadas : (a) uma matriz S que seja a soma de A e B. (b)
//uma matriz D que seja a diferença de A e B. (A - B). Faça um programa que faça as devidas declarações e acione os módulos para exemplificar o seu uso.
//Escreva as matrizes resultantes do acionamento de cada uma das funções.
void preencheMatrizes(int matA[][6], int matB[][6]) {
    //Preencher a matriz A com números aleatórios entre 1 e 50.
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 6; col++) {
            matA[ln][col] = 1 + (rand() % 50); //Números aleatórios entre 1 e 50.
        }
    }

    //Preencher a matriz B com números aleatórios entre 1 e 50.
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 6; col++) {
            matB[ln][col] = 1 + (rand() % 50); //Números aleatórios entre 1 e 50.
        }
    }
}

//Procedimento para exibir as matrizes.
void exibeMatrizes(int matA[][6], int matB[][6]) {
    //Exibir a matriz A.
    printf("Matriz A (4 x 6):\n");
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 6; col++) {
            printf("%d ", matA[ln][col]); //Imprimir cada elemento da matriz A.
        }
        printf("\n"); //Nova linha após imprimir cada linha da matriz A.
    }
    printf("\n"); //Linha em branco entre as matrizes.

    //Exibir a matriz B.
    printf("Matriz B (4 x 6):\n");
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 6; col++) {
            printf("%d ", matB[ln][col]); //Imprimir cada elemento da matriz B.
        }
        printf("\n"); //Nova linha após imprimir cada linha da matriz B.
    }
    printf("\n"); //Linha em branco após exibir a matriz B.
}

//Função para calcular e retornar a soma das duas matrizes.
void somaMatrizes(int matA[][6], int matB[][6], int matSoma[][6]) {
    //Percorrer as matrizes e somar os elementos correspondentes.
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 6; col++) {
            matSoma[ln][col] = matA[ln][col] + matB[ln][col]; //Soma dos elementos de A e B.
        }
    }
}

//Função para calcular e retornar a diferença das duas matrizes.
void subtraiMatrizes(int matA[][6], int matB[][6], int matDif[][6]) {
    //Percorrer as matrizes e subtrair os elementos correspondentes.
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 6; col++) {
            matDif[ln][col] = matA[ln][col] - matB[ln][col]; //Diferença dos elementos de A e B.
        }
    }
}

//Procedimento para exibir a matriz resultante.
void exibeMatrizResultado(int mat[][6]) {
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 6; col++) {
            printf("%d ", mat[ln][col]); //Imprimir cada elemento da matriz resultante.
        }
        printf("\n"); //Nova linha após imprimir cada linha da matriz resultante.
    }
}
int main() {
    //Inicializar gerador de números aleatórios.
    srand((unsigned int)time(NULL)); //Usar a função time() para inicializar o gerador de números aleatórios.

    //Declarar as matrizes A, B, Soma e Diferença.
    int matrizA[4][6];
    int matrizB[4][6];
    int matrizSoma[4][6];
    int matrizDif[4][6];

    //Chamar procedimento para preencher as matrizes A e B.
    preencheMatrizes(matrizA, matrizB);

    //Chamar procedimento para exibir as matrizes A e B.
    exibeMatrizes(matrizA, matrizB);

    //Chamar função para calcular a soma das matrizes A e B.
    somaMatrizes(matrizA, matrizB, matrizSoma);

    //Exibir a matriz resultante da soma.
    printf("Matriz Soma (A + B):\n");
    exibeMatrizResultado(matrizSoma);
    printf("\n"); //Linha em branco após exibir a matriz soma.

    //Chamar função para calcular a diferença das matrizes A e B.
    subtraiMatrizes(matrizA, matrizB, matrizDif);

    //Exibir a matriz resultante da diferença.
    printf("Matriz Diferença (A - B):\n");
    exibeMatrizResultado(matrizDif);

    return 0;
}