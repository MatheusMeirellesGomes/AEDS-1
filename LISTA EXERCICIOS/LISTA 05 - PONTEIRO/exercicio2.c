#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia 3 números inteiros (a, b, c). Para cada valor lido, mostre o nome da variável, o endereço e o seu valor.
int main()
{
    //Inicializar Variáveis.
    int a, b, c;

    //Receber e ler valores inteiros.
    printf("Informe a: ");
    scanf("%d", &a);

    printf("Informe b: ");
    scanf("%d", &b);

    printf("Informe c: ");
    scanf("%d", &c);

    //Imprimir mostrando nome, endereço e valor.
    //Variável A.
    printf("\nVariavel A:\n");
    printf("\nEndereco de A: %p\n", &a); //Vai acessar o endereço de A na memória. 
    printf("Valor de A: %d\n", a); 

    //Variável B.
    printf("\nVariavel B:\n");
    printf("\nEndereco de B: %p\n", &b); //Vai acessar o endereço de B na memória.
    printf("Valor de B: %d\n", b);

    //Variável C.
    printf("\nVariavel C:\n");
    printf("\nEndereco de C: %p\n", &c); //Vai acessar o endereço de C na memória.
    printf("Valor de C: %d\n", c);

    return 0;
}