#include <stdio.h>
#include <stdlib.h>
//Escreva um programa em C para imprimir todas as permutações de um vetor de char usando ponteiros.
int main()
{
    //Inicializar Variáveis.
    char str[5]; //Vetor para 4 caracteres + '\0'
    char *ptr = str;
    char temp;

    //Pedir para o usuário inserir uma string de 3 caracteres.
    printf("Digite uma string de 3 caracteres: ");
    scanf("%s", ptr);

    //Imprimir todas as permutações.
    printf("\nPermutacoes:\n");

    //Permutação 1: ABC
    printf("%s\n", ptr);

    //Permutação 2: ACB
    temp = *(ptr + 1);
    *(ptr + 1) = *(ptr + 2);
    *(ptr + 2) = temp;
    printf("%s\n", ptr);

    //Permutação 3: BAC
    temp = *(ptr + 0);
    *(ptr + 0) = *(ptr + 1);
    *(ptr + 1) = temp;
    printf("%s\n", ptr);

    //Permutação 4: BCA
    temp = *(ptr + 1);
    *(ptr + 1) = *(ptr + 2);
    *(ptr + 2) = temp;
    printf("%s\n", ptr);

    //Permutação 5: CBA
    temp = *(ptr + 0);
    *(ptr + 0) = *(ptr + 1);
    *(ptr + 1) = temp;
    printf("%s\n", ptr);

    //Permutação 6: CAB
    temp = *(ptr + 1);
    *(ptr + 1) = *(ptr + 2);
    *(ptr + 2) = temp;
    printf("%s\n", ptr);

    return 0;
}