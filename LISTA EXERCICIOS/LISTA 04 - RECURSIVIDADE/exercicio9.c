#include <stdio.h>
#include <stdlib.h>
//Faça uma função recursiva que calcula o resto da divisão usando subtrações sucessivas: int resto (int numerador, int denominador)
 //Faça um programa principal que leia dois números, acione a função e exiba o resultado gerado.
int resto(int numerador, int denominador)
{
    //Caso base - denominador = 0.
    if (denominador == 0){
        return -1;
    }
    //Caso base - numerador menor que denominador.
    else if (numerador < denominador){
        return numerador; //Resto nesse caso é o numerador.
    }
    else {
        return resto(numerador - denominador, denominador);
    }
}
int main()
{
    //Inicializar Variáveis.
    int num_N, num_D;

    //Receber numerador e denominador.
    printf("Informe numerador: ");
    scanf("%d", &num_N);

    printf("Informe denominador: ");
    scanf("%d", &num_D);

    //Acionar função.
    int resultado = resto(num_N, num_D);

    //Verificar valor do denominador e numerador.
    if (resultado == -1){
        printf("\nNao existe divisao por zero.\n");
    }
    else if (resultado == 0){
        printf("\nResto = %d\n", num_N); //Resto vai ser o numerador.
    }
    else {
        printf("\nResto da divisao de %d / %d = %d\n", num_N, num_D, resultado);
    }

    return 0;
}
