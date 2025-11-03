#include <stdio.h>
#include <stdlib.h>
//Escreva um programa em C para calcular a soma de todos os elementos em um vetor de inteiros usando ponteiros. 
//A primeira entrada deve ser o tamanho do vetor a ser inserido.
int main()
{
    //Inicializar Variáveis.
    int tamanhoVetor; //Variável para armazenar o tamanho do vetor.
    int *vetor; //Ponteiro para o vetor de inteiros.
    int soma = 0; //Variável para armazenar a soma dos elementos.

    //Pedir para o usuário inserir o tamanho do vetor.
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    //Alocar memória para o vetor.
    vetor = (int *)malloc(tamanhoVetor * sizeof(int));

    //Pedir para o usuário inserir os valores do vetor e calcular a soma ao mesmo tempo.
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", (vetor + i)); //Usando aritmética de ponteiros para acessar os elementos.
        
        //Somar os elementos do vetor.
        soma += *(vetor + i); //Calcular a soma enquanto lê os valores.
    }

    //Exibir a soma dos elementos.
    printf("A soma dos elementos do vetor e: %d\n", soma);

    //Liberar a memória alocada.
    free(vetor);

    return 0;
}