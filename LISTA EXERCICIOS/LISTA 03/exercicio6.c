#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor lógico (true ou false).
// Faça um programa que lê N números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, dependendo se foi retornado verdadeiro ou falso
// pela função. Lembre-se de que zero não é positivo.
bool verifica (int num)
{
    //Verificar se é positivo ou negativo.
    if (num > 0){
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    //Inicializar Variáveis.
    int N, x;

    //Ler N números.
    printf("Quantos Numeros: ");
    scanf("%d", &N);

    for (int cont = 1; cont <= N; cont++)
    {
        //Receber numero.
        printf("\nInforme um valor: ");
        scanf("%d", &x);

       if (verifica(x)){
        printf("\nPOSITIVO.\n");
       }
       else {
        printf("\nNEGATIVO OU ZERO.\n");
       }
    }
}
