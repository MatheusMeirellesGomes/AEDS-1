#include <stdio.h>
#include <stdlib.h>

int main() {
    //Inicializar Variáveis normais. 
    int num = 20;
    float num1 = 5.0;
    double numero = 10.0;
    char letra = 'a';

    //Inicializar Variáveis de ponteiros. 
    int *ptrInt = &num;
    float *ptrFloat = &num1;
    double *ptrDouble = &numero;
    char *ptrChar = &letra;

    //Variável Int.
    printf("\nVariavel int:\n");
    printf("Valor: %d\n", num);
    printf("Endereco: %p\n", &num);
    printf("Tamanho: %d bytes\n", sizeof(num));

    //Variável float.
    printf("\nVariavel float:\n");
    printf("Valor: %.2f\n", num1);
    printf("Endereco: %p\n", &num1);
    printf("Tamanho: %d bytes\n", sizeof(num1));

    //Variável double.
    printf("\nVariavel double:\n");
    printf("Valor: %lf\n", numero);
    printf("Endereco: %p\n", &numero);
    printf("Tamanho: %d bytes\n", sizeof(numero));

    //Variável char.
    printf("\nVariavel char:\n");
    printf("Valor: %c\n", letra);
    printf("Endereco: %p\n", &letra);
    printf("Tamanho: %d bytes\n", sizeof(letra));

    //Variável int *.
    printf("\nPonteiro int*:\n");
    printf("Valor (endereco apontado): %p\n", ptrInt);
    printf("Endereco do ponteiro: %p\n", &ptrInt);
    printf("Tamanho: %d bytes\n", sizeof(ptrInt));

    //Variável float *.
    printf("\nPonteiro float*:\n");
    printf("Valor (endereco apontado): %p\n", ptrFloat);
    printf("Endereco do ponteiro: %p\n", &ptrFloat);
    printf("Tamanho: %d bytes\n", sizeof(ptrFloat));

    //Variável double *.
    printf("\nPonteiro double*:\n");
    printf("Valor (endereco apontado): %p\n", ptrDouble);
    printf("Endereco do ponteiro: %p\n", &ptrDouble);
    printf("Tamanho: %d bytes\n", sizeof(ptrDouble));

    //Variável char *.
    printf("\nPonteiro char*:\n");
    printf("Valor (endereco apontado): %p\n", ptrChar);
    printf("Endereco do ponteiro: %p\n", &ptrChar);
    printf("Tamanho: %d bytes\n", sizeof(ptrChar));

    return 0;
}