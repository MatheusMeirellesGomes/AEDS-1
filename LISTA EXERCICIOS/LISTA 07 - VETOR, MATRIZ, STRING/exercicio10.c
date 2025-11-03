#include <stdio.h>
#include <stdlib.h>
//Escreva um programa em C para ordenar um vetor de inteiros usando ponteiro. A primeira
//entrada deve ser o tamanho do vetor a ser inserido.
int main()
{
    //Inicializar Variáveis.
    int tamanhoVetor; //Variável para armazenar o tamanho do vetor.
    int *vetor; //Ponteiro para o vetor de inteiros.
    int temp; //Variável temporária para troca de valores.

    //Pedir para o usuário inserir o tamanho do vetor.
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    //Alocar memória para o vetor.
    vetor = (int *)malloc(tamanhoVetor * sizeof(int));

    //Pedir para o usuário inserir os valores do vetor.
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", (vetor + i)); //Usando aritmética de ponteiros para acessar os elementos.
    }

    //Ordenar o vetor usando o método de bolha (Bubble Sort).
    for (int i = 0; i < tamanhoVetor - 1; i++) {
        for (int j = 0; j < tamanhoVetor - i - 1; j++) {
            if (*(vetor + j) > *(vetor + j + 1)) {
                //Trocar os valores se estiverem na ordem errada.
                temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }

    //Exibir o vetor ordenado.
    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", *(vetor + i)); //Usando aritmética de ponteiros para acessar os elementos.
    }
    printf("\n");

    //Liberar a memória alocada.
    free(vetor);

    return 0;
}