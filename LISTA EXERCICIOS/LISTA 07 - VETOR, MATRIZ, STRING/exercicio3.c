#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando as posições de 0 a 9 em cada vetor). 
//Faça um outro procedimento que receba dois vetores preenchidos e gera um novo vetor com os elementos desses 2 vetores intercalados de tal forma que nas
//posições ímpares do novo vetor estejam os elementos do primeiro vetor e nas posições pares os elementos do segundo vetor recebido por parâmetro. 
//Faça um procedimento que receba e exiba o conteúdo de um vetor. Faça um programa que faça as devidas declarações e acione os módulos para exemplificar o seu uso.
void preencheVetores(int x[], int y[])
{
    //Preencher primeiro vetor x, com números aleatórios. 
    for (int i = 0; i < 10; i++) {
        x[i] = 1 + (rand() % 50); //Números aleatórios entre 1 e 50. 
    }

    //Preencher segundo vetor y, com números aleatórios. 
    for (int i = 0; i < 10; i++) {
        y[i] = 1 + (rand() % 50); //Números aleatórios entre 1 e 50. 
    }
}

void geraVetorIntercalado(int x[], int y[], int z[])
{
    //Gerar vetor z com elementos intercalados de x e y.
    for (int i = 0; i < 10; i++) {
        z[i * 2] = x[i]; //Elementos de x nas posições pares. 
        z[i * 2 + 1] = y[i]; //Elementos de y nas posições ímpares.
    }
}

void exibeVetor(int v[])
{
    //Exibir o conteúdo do vetor.
    for (int i = 0; i < 20; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{
    //Inicializar números aleatórios. 
    srand((unsigned)time(NULL));

    //Inicializar variáveis.
    int vetorX[10], vetorY[10], vetorZ[20]; //Vetores para armazenar os elementos.

    //Chamar procedimentos.
    preencheVetores(vetorX, vetorY); //Preencher vetores X e Y.
    geraVetorIntercalado(vetorX, vetorY, vetorZ); //Gerar vetor Z intercalado.
    exibeVetor(vetorZ); //Exibir vetor Z.

    return 0;
}