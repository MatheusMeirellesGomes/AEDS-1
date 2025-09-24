#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    //Inicializar Variáveis.
    int N; 
    float num, maiorImpar = 0; 
    
    //Receber a quantidade de números que o programa vai ter. 
    printf("Quantos numeros: "); 
    scanf("%d", &N); 
    
    //Usar estrutura de repetição. 
    for (int cont = 1; cont <= N: cont++)
    {
        //Receber números.
        printf("\nInforme um numero: "); 
        scanf("%f", &num); 
        
        //Verificar maior ímpar. 
        if (fmod(num,2) != 0){ //Fmod é uma forma de calcular a divisão pelo resto do número desejado usando float. 
            maiorImpar = num; 
        }
        else if (num > maiorImpar){
            maiorImpar = num;
        }
    }
    
    //Imprimir maior Ímpar. 
    printf("\nMaior Impar: %.2f\n", maiorImpar); 
    
    return 0;
}