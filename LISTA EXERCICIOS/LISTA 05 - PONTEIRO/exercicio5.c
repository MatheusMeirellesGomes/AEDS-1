#include <stdio.h>
#include <stdlib.h>
//Implemente um programa em C que declare variáveis para armazenar um valor inteiro, um valor real e um caractere. Deve existir no programa ponteiros
//associados a cada um deles. O programa deve solicitar novos dados para as variáveis e elas devem ser modificadas usando os respectivos ponteiros.
//Exiba os endereços e os conteúdos de todas as variáveis e ponteiros, antes e após aalteração.
int main()
{
    //Inicializar Variáveis normais.
    int inteiro = 10;
    float real = 5.5;
    char caracter = 'A';

    //Inicializar Variáveis com ponteiro.
    int *ptrinteiro = &inteiro; //O conteúdo do ponteiro de ptrinteiro é o endereço de inteiro.
    float *ptrreal = &real; //O conteúdo do ponteiro de ptrreal é o endereço de real.
    char *ptrcaracter = &caracter; //O conteúdo do ponteiro de ptrcaracter é o endereço de caracter.

    //Mostrar valor, conteúdo e endereço de cada um antes de serem modificados.
    //Conteúdo e endereço das variáveis normais.
    printf("VARIAVEIS NORMAIS:\n");
    printf("\nConteudo do inteiro: %d\n", inteiro);
    printf("Conteudo do real (float): %.2f\n", real);
    printf("Conteudo do Caracter: %c\n", caracter);

    printf("\nEndereco do inteiro: %p\n", &inteiro);
    printf("Endereco do real: %p\n", &real);
    printf("Endereco do caracter: %p\n", &caracter);

    //Variáveis com ponteiro.
    printf("\nVARIAVEIS COM PONTEIRO:\n");
    printf("\nConteudo de ptrinteiro: %p\n", ptrinteiro);
    printf("Conteudo de ptrreal: %p\n", ptrreal);
    printf("Conteudo de ptrcaracter: %p\n", ptrcaracter);

    printf("\nEndereco de ptrinteiro: %p\n", &ptrinteiro);
    printf("Endereco de ptrreal: %p\n", &ptrreal);
    printf("Endereco de ptrcaracter: %p\n", &ptrcaracter);

    //Receber novos dados para os ponteiros. O scanf ele tem duas formas de ser usado, mas nesse caso vai ser usado a troca por ponteiros. 
    printf("\nInforme um novo numero inteiro: ");
    scanf("%d", ptrinteiro); //pode ser também &inteiro.

    printf("Informe um novo numero real: ");
    scanf("%f", ptrreal); //pode ser também &real. 

    printf("Informe um novo caracter: ");
    scanf(" %c", ptrcaracter); //pode ser &caracter. 

    //Modificar novos valores.
    printf("\nVALORES MODIFICADOS.\n");

    //Variáveis Normais.
    printf("\nNovo conteudo de inteiro: %d\n", inteiro);
    printf("Novo conteudo de real: %.2f\n", real);
    printf("Novo conteudo de caracter: %c\n", caracter);

    printf("\nNovo endereco de inteiro: %p\n", &inteiro);
    printf("Novo endereco de real: %p\n", &real);
    printf("Novo endereco de caracter: %p\n", &caracter);

    //Variáveis com ponteiros.
    printf("\nNovo conteudo de ptrinteiro: %p\n", ptrinteiro);
    printf("Novo conteudo de ptrreal: %p\n", ptrreal);
    printf("Novo conteudo de ptrcaracter: %p\n", ptrcaracter);

    printf("\nNovo endereco de ptrinteiro: %p\n", &ptrinteiro);
    printf("Novo endereco de ptrreal: %p\n", &ptrreal);
    printf("Novo endereco de ptrcaracter: %p\n", &ptrcaracter);
    
    return 0;
}