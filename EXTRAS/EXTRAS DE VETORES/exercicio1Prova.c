#include <stdio.h>
#include <stdlib.h>
//Preenche vetor. 
void modulo1 (int *vetor, int N) {
    for (int pos = 0; pos < N; pos++) {
        printf("Digite o valor para o elemento %d ",pos); 
        scanf("%d", (vetor + pos)); //Uso de aritmética de ponteiros, que é a mesma coisa que &vetor[pos]. 
    }
}

//Exibir o conteúdo do vetor. 
void modulo2 (int *vetor, int N) {
    for (int i = 0; i < N; i++) {
        printf("Conteudo: %d\n", *(vetor + i)); //Uso de aritmética de ponteiros, que é a mesma coisa que vetor[i].
    }
}

int main()
{
    int total = 10; 
    int *valores = (int * )malloc(total * sizeof(int)); //Alocação dinâmica de memória para o vetor.

    modulo1 (valores, total); //Chamar o módulo para preencher o vetor sem usar o operador &, porque valores já é um ponteiro.
    modulo2 (valores, total); //Chamar o módulo para exibir o conteúdo do vetor sem usar o operador &, porque valores já é um ponteiro.

    free(valores); //Liberar a memória alocada para o vetor.

    return 0;
}