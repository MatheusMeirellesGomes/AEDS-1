#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar variáveis.
    int resultado;

    //Primeiro for para indicar que vai mostrar tabuadas até o número 10.
    for (int N = 1; N <= 10; N++)
    {
        printf("Tabuada do %d", N); //Vai mostrar a tabuada de todos os números até o 10, onde é a condição de parada.

        //Segundo for para realizar o cálculo da tabuada.
        for (int cont = 1; cont <= 10; cont++)
        {
            resultado = N * cont; //O resultado vai ser o número da vez pelos 10 números da tabuada.
            printf("\n%d x %d = %d\n\n", N, cont, resultado);
            printf("");
        }
    }
    return 0;
}
