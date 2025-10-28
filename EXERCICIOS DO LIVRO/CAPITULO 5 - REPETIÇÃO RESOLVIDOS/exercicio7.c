#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis. 
    int num1 = 0, num2 = 1, proximo; 

    //Imprimir os dois primeiros números da sequência. 
    printf("%d %d", num1, num2); 

    //Fazer a sequência. 
    for (int cont = 3; cont <= 8; cont++)
    {
        //Calcular qual o próximo número. 
        proximo = num1 + num2; //Próximo número é a soma do num1 + num2. (0 + 1) = 1. 
        printf("%d", proximo); //Imprimir os próximos números do Fibonacci. 
        num1 = num2; //O número 2 passa a ser o anterior. 
        num2 = proximo; //O número 2 passa a ser o próximo. 
    }
}