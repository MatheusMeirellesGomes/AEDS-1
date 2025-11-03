#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca para usar strlen().
//Escreva um programa em C para imprimir um vetor de caracteres ao contrário usando um ponteiro.
int main() {
    //Inicializar Variáveis.
    char vetor[100]; //Vetor de caracteres com tamanho fixo.
    char *ponteiroVetor; //Ponteiro para o vetor.
    int tamanho;

    //Atribuir o endereço do vetor ao ponteiro.
    ponteiroVetor = vetor;

    //Pedir para o usuário inserir uma string.
    printf("Digite uma string: ");
    scanf("%s", ponteiroVetor); //Ler a string usando o ponteiro.

    //Calcular o tamanho da string.
    tamanho = strlen(ponteiroVetor); //Ex: "Matheus", tem tamanho 7, começa com 0 e termnina em 6, "Joao Ricardo", tem tamanho 12, começa com 0, conta o espeço
    //e termina em 11. 

    //Imprimir o vetor ao contrário usando um ponteiro.
    printf("Vetor ao contrario: ");
    for (char *ptr = ponteiroVetor + tamanho - 1; ptr >= ponteiroVetor; ptr--) {
        printf("%c", *ptr);
    }
    printf("\n");

    return 0;
}