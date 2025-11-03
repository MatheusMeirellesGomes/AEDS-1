#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a soma dos elementos abaixo da diagonal principal. 
//Mostre na tela os elementos da diagonal principal também.
void preencherMatriz(int mat[][4]) {
    //Preencher a matriz com números aleatórios entre 1 e 50. 
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 4; col++) {
            mat[ln][col] = 1 + (rand() % 50); //Números aleatórios entre 1 e 50.
        }
    }
}

void exibirMatriz(int mat[][4]) {
    //Exibir a matriz 4 x 4.
    for (int ln = 0; ln < 4; ln++) {
        for (int col = 0; col < 4; col++) {
            printf("%d ", mat[ln][col]); //Imprimir cada elemento da matriz.
        }
        printf("\n"); //Nova linha após imprimir cada linha da matriz.
    }
}

int somaDiagonalPrincipal(int mat[][4]) {
    //Inicializar soma.
    int soma = 0;

    //Percorrer a diagonal principal (onde linha == coluna) e somar os elementos.
    for (int i = 0; i < 4; i++) {
        soma += mat[i][i]; //Vai somar os elementos da diagonal principal.
    }

    //Retorna o valor e salva na variável soma.
    return soma;
}

int main() {
    //Inicializar gerador de números aleatórios.
    srand((unsigned)time(NULL)); //Usar a função time() para inicializar

    //Inicializar a matriz 4 x 4.
    int matriz[4][4];

    //Chamar a função para preencher a matriz.
    preencherMatriz(matriz);

    //Chamar a função para exibir a matriz.
    printf("Matriz 4 x 4 preenchida:\n");
    exibirMatriz(matriz);
    printf("\n"); 

    //Chamar a função para calcular a soma da diagonal principal.
    int somaDiagPrincipal = somaDiagonalPrincipal(matriz);

    return 0;
}