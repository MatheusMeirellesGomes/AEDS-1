#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
float calcula(int N)
{
    //Inicializar S. 
    float S = 0; 

    //Verifica de onde começa até onde vai. 
    for (int cont = 1; cont <= N; cont++)
    {
         S += (pow(N, 2) + 1) / (N + 3);
    }

    return S; 
}
int main()
{
    //Inicializar Variável. 
    int N; 

    //Receber valor de N. 
    printf("Informe u valor inteiro e positivo para N: "); 
    scanf("%d", &N); 

    printf("\nS = %.2f", calcula(N)); 

    return 0; 
}