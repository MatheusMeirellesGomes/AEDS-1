#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int potencia(int a, int b)
{
    //Inicializar Variáveis.
    if (b == 0){
        return 1; //Se o expoente for 0, retornar um,porque todo número elevado a zero é um.
    }
    else {
        return pow(a, b);
    }
}
int main()
{
    //Inicializar Variáveis.
    int n1, n2; //Precisam ser inteiros e positivos.

    //Receber os números.
    printf("Informe primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe segundo numero: ");
    scanf("%d", &n2);

    //Imprimir resultado e acionar função.
    printf("\n%d elevado a %d = %d\n", n1, n2, potencia(n1,n2));

    return 0;
}