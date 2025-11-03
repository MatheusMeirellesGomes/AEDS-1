#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Escrever um procedimento que preenche uma matriz M(10,10). Faça outros procedimentos que recebam uma matriz preenchida, realize as trocas indicadas a
//seguir (um procedimento para cada uma delas). No final, exiba a matriz resultante das trocas (linha por linha): (a) a 2ª linha com a 8ª linha (b) a
//4ª coluna com a 10ª coluna (c) a diagonal principal com a diagonal secundária (d) a 5ª linha com a 10ª coluna.
//Faça um programa que faça as devidas declarações e acione os módulos para exemplificar o seu uso.
void preencheMatriz(int mat[][10]) {
    //Preencher a matriz 10 x 10 com números aleatórios entre 1 e 50.
    for (int ln = 0; ln < 10; ln++) {
        for (int col = 0; col < 10; col++) {
            mat[ln][col] = 1 + (rand() % 50); //Números aleatórios entre 1 e 50.
        }
    }
}

//Procedimento para exibir a matriz.
void exibeMatriz(int mat[][10]) {
    //Exibir a matriz 10 x 10.
    for (int ln = 0; ln < 10; ln++) {
        for (int col = 0; col < 10; col++) {
            printf("%d ", mat[ln][col]); //Imprimir cada elemento da matriz.
        }
        printf("\n"); //Nova linha após imprimir cada linha da matriz.
    }
}

//Procedimento para trocar a 2ª linha com a 8ª linha.
void trocaLinhas(int mat[][10]) {
    for (int col = 0; col < 10; col++) {
        int temp = mat[1][col]; //Armazena temporariamente o valor da 2ª linha.
        mat[1][col] = mat[7][col]; //Troca o valor da 2ª linha com o da 8ª linha.
        mat[7][col] = temp; //Atribui o valor temporário à 8ª linha.
    }
}

//Procedimento para trocar a 4ª coluna com a 10ª coluna.
void trocaColunas(int mat[][10]) {
    for (int ln = 0; ln < 10; ln++) {
        int temp = mat[ln][3]; //Armazena temporariamente o valor da 4ª coluna.
        mat[ln][3] = mat[ln][9]; //Troca o valor da 4ª coluna com o da 10ª coluna.
        mat[ln][9] = temp; //Atribui o valor temporário à 10ª coluna.
    }
}

//Procedimento para trocar a diagonal principal com a diagonal secundária.
void trocaDiagonais(int mat[][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = mat[i][i]; //Armazena temporariamente o valor da diagonal principal.
        mat[i][i] = mat[i][9 - i]; //Troca o valor da diagonal principal com o da diagonal secundária.
        mat[i][9 - i] = temp; //Atribui o valor temporário à diagonal secundária.
    }
}

//Procedimento para trocar a 5ª linha com a 10ª coluna.
void trocaLinhaColuna(int mat[][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = mat[4][i]; //Armazena temporariamente o valor da 5ª linha.
        mat[4][i] = mat[i][9]; //Troca o valor da 5ª linha com o da 10ª coluna.
        mat[i][9] = temp; //Atribui o valor temporário à 10ª coluna.
    }
}

int main() {
    //Inicializar gerador de números aleatórios.
    srand((unsigned)time(NULL)); //Usar a função time() para inicializar

    //Inicializar a matriz 10 x 10.
    int matriz[10][10];

    //Chamar a função para preencher a matriz.
    preencheMatriz(matriz);

    //Exibir a matriz original.
    printf("Matriz 10 x 10 original:\n");
    exibeMatriz(matriz);
    printf("\n");

    //Chamar o procedimento para trocar a 2 linha com a 8 linha.
    trocaLinhas(matriz);
    printf("Matriz apos trocar a 2 linha com a 8 linha:\n");
    exibeMatriz(matriz);
    printf("\n");

    //Chamar o procedimento para trocar a 4 coluna com a 10 coluna.
    trocaColunas(matriz);
    printf("Matriz apos trocar a 4 coluna com a 10 coluna:\n");
    exibeMatriz(matriz);
    printf("\n");

    //Chamar o procedimento para trocar a diagonal principal com a diagonal secundária.
    trocaDiagonais(matriz);
    printf("Matriz apos trocar a diagonal principal com a diagonal secundária:\n");
    exibeMatriz(matriz);
    printf("\n");

    //Chamar o procedimento para trocar a 5 linha com a 10 coluna.
    trocaLinhaColuna(matriz);
    printf("Matriz apos trocar a 5 linha com a 10 coluna:\n");
    exibeMatriz(matriz);
    printf("\n");

    return 0;
}
