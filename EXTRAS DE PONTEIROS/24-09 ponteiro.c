#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int *ptrX = NULL, x = 20; //Colocar o ponteiro como NULL para não dar lixo na memória.

    //Atribuir o endereço de x ao ponteiro ptrX.
    ptrX = &x;

    //Imprimir o valor de x usando o ponteiro.
    printf("Conteudo do ponteiro: %p\n", ptrX); //Vai imprimir o endereço de x.
    printf("Endereco de x: %p\n", &ptrX); //Vai imprimir o endereço do ponteiro ptrX.
    printf("Conteudo indicado pelo ponteiro: %d\n", *ptrX); //Vai imprimir o valor de x que é 20.

    //Imprimir os valores de x e do ponteiro.
    printf("\nConteudo de x: %d\n", x); //Vai imprimir o valor de x que é 20.
    printf("Endereco do ponteiro: %p\n", ptrX); //Vai imprimir o endereço de x.

    x += 30; //x = x + 30.
    ptrX = ptrX + 1; //Vai incrementar o endereço do ponteiro em 1, ptrX++.

    //Imprimir os novos valores.
    printf("\nConteudo de x: %d\n", x); //Vai imprimir o valor de x depois da soma, que vai ser 50.
    printf("Endereco de x: %p", &x); //Vai imprimir o endereço de x.

    //Imprimir os novos valores do ponteiro.
    printf("\nConteudo do ponteiro: %d\n", ptrX); //Vai imprimir o endereço de x + 1.
    printf("Endereco do ponteiro: %p\n", &ptrX); //Vai imprimir o endereço do ponteiro ptrX.
    printf("Conteudo indicado pelo ponteiro: %d\n", *ptrX); //Vai dar erro pq o ponteiro esta apontando para um endereço que não foi inicializado.

    return 0;



}
