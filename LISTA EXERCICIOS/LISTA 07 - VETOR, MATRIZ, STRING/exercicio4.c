#include <stdio.h>
#include <stdlib.h>
//Escreva um programa em C para encontrar o maior elemento em um vetor de inteiros usando a Alocação de Memória Dinâmica. 
//Peça para o usuário inserir inicialmente o tamanho do vetor a ser criado, e após, peça para ele inserir um a um todos os valores do vetor.
int main()
{
    //Inicializar Variáveis para depois usar malloc. 
    int tamanhoVetor; //Variável para armazenar o tamanho do vetor. 
    int *vetor; //Ponteiro para o vetor de inteiros.

    //Pedir para o usuário inserir o tamanho do vetor.
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    //Alocar memória para o vetor.
    vetor = (int *)malloc(tamanhoVetor * sizeof(int));

    //Pedir para o usuário inserir os valores do vetor.
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    //Encontrar o maior elemento no vetor.
    int maior = vetor[0];
    for (int i = 1; i < tamanhoVetor; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    //Exibir o maior elemento encontrado.
    printf("O maior elemento do vetor é: %d\n", maior);

    //Liberar a memória alocada.
    free(vetor);

    return 0;
}