#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um procedimento que preencha por linha uma matriz M 5 x 5. Faça uma função que receba uma matriz preenchida, calcule e
//retorne cada uma das somas a seguir (uma função para cada letra abaixo): (a) da quinta linha de M (b) da segunda coluna de M (c)
//da diagonal principal (d) da diagonal secundária (e) de todos os elementos da matriz. Faça um programa que faça as devidas declarações e
//acione os módulos para exemplificar o seu uso.
//Procedimento para calcular uma matriz 5 x 5.
void preencheMatriz(int mat[][5]){
    //Preenche a matriz 5 por 5 com números aleatórios entre 1 e 50.
    for (int ln = 0; ln < 5; ln++) {
        for (int col = 0; col < 5; col++){
            mat[ln][col] = 1 + (rand() % 50); //Cada linha e cada coluna da matriz vai ser preenchida com números aleatórios entre 1 e 50.
        }
    }
}

//Exibir matriz preenchida.
void exibeMatriz(int mat[][5]){
    //Exibir a matriz 5 x 5.
    for (int ln = 0; ln < 5; ln++) {
        for (int col = 0; col < 5; col++) {
            //Imprimir cada elemento da matriz.
            printf("%d ", mat[ln][col]);
        }
        printf("\n"); //Nova linha após imprimir cada linha da matriz.
    }
}

//Função para calcular e retornar a soma da quinta linha da matriz.
int somaQuintaLinha(int mat[][5]) {
    //Inicializar soma.
    int soma = 0;

    //Percorrer a quinta linha(indice 4) e somar os elementos da linha.
    for (int col = 0; col < 5; col++) { //Como se trata de somar linha, o for percorre apenas as colunas, porque a linha é fixa.
        soma += mat[4][col]; //Vai somar os elementos da linha 5 (na matriz, indice 4).
    }

    //Retorna o valor e salva na variável soma.
    return soma;
}

//Função para calcular e retornar a soma da segunda coluna da matriz.
int somaSegundaCol (int mat[][5]) {
    //Inicializar soma.
    int soma = 0;

    //Percorrer a segunda coluna (indice 1) e somar os elementos da coluna.
    for (int ln = 0; ln < 5; ln++) {
        soma += mat[ln][1]; //Vai somar os elementos da coluna 2 (na matriz, indice 1).
    }

    //Retorna o valor e salva na variável soma.
    return soma;
}

//Função para calcular e retornar a soma da diagonal principal da matriz.
int somaDiagonalPrincipal(int mat[][5]) {
    //Inicializar soma.
    int soma = 0;

    //Percorrer a diagonal principal (onde linha == coluna) e somar os elementos.
    for (int i = 0; i < 5; i++) {
        soma += mat[i][i]; //Vai somar os elementos da diagonal principal.
    }

    //Retorna o valor e salva na variável soma.
    return soma;
}

//Função para calcular e retornar a soma da diagonal secundária da matriz.
int somaDiagonalSecundaria(int mat[][5]) {
    //Inicializar soma.
    int soma = 0;

    //Percorrer a diagonal secundária (onde linha + coluna == 4) e somar os elementos.
    for (int i = 0; i < 5; i++) {
        //Somar elementos da diagonal secundária.
        soma += mat[i][4 - i];  //Nesse caso, a linha continua sendo i, mas a coluna é 4 - 1, como é diagonal secundária, então a coluna diminui
        //conforme a linha aumenta.
    }

    //Retorna o valor e salva na variável soma.
    return soma;
}

//Função para calcular e retornar a soma de todos os elementos da matriz.
int somaTodosElementos(int mat[][5]) {
    //Inicializar soma.
    int soma = 0;

    //Percorrer toda a matriz e somar todos os elementos.
    for (int ln = 0; ln < 5; ln++) {
        for (int col = 0; col < 5; col++) {
            soma += mat[ln][col]; //Vai somar todos os elementos da matriz.
        }
    }

    //Retorna o valor e salva na variável soma.
    return soma;
}

int main() {
    //Inicializar Variáveis.
    int matriz[5][5]; //Matriz 5 x 5.

    //Inicializar gerador de números aleatórios.
    srand((unsigned)time(NULL)); //Usar a função time() para inicializar o gerador de números aleatórios.

    //Chamar procedimento para preencher a matriz.
    preencheMatriz(matriz);

    //Chamar procedimento para exibir a matriz preenchida.
    printf("Matriz 5 x 5 preenchida:\n");
    printf("\n");
    exibeMatriz(matriz);

    //Chamar funções para calcular as somas e armazenar os resultados em variáveis.
    int somaLinha5 = somaQuintaLinha(matriz);
    int somaColuna2 = somaSegundaCol(matriz);
    int somaDiagPrincipal = somaDiagonalPrincipal(matriz);
    int somaDiagSecundaria = somaDiagonalSecundaria(matriz);
    int somaTotal = somaTodosElementos(matriz);

    //Exibir os resultados das somas.
    printf("\nSoma da quinta linha: %d\n", somaLinha5);
    printf("Soma da segunda coluna: %d\n", somaColuna2);
    printf("Soma da diagonal principal: %d\n", somaDiagPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaDiagSecundaria);
    printf("Soma de todos os elementos da matriz: %d\n", somaTotal);

    return 0;
}