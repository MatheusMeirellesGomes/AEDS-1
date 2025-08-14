#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//Receba três números e mostre em ordem crescente.
int main()
{
    //Indicar variáveis
    int n1, n2, n3;

    //Receber os números.
    printf("Primeiro Numero: "); 
    scanf("%d", &n1); 
    printf("Segundo Numero: "); 
    scanf("%d", &n2); 
    printf("Terceiro Numero: "); 
    scanf("%d", &n3); 
    //Verificar para por em ordem crescente. 
    if(n1 > n2 && n1 > n3)
    {
        if(n2 > n3){
            printf("A ordem crescente = %d, %d, %d\n", n1, n2, n3); 
        }
        else{
            printf("\nA ordem crescente = %d, %d, %d\n", n1, n3, n2); 
        }
    }
    else if(n2 > n1 && n2 > n3)
    {
        if(n1 > n3){
             printf("\nA ordem crescente = %d, %d, %d\n", n2, n1, n3); 
        }
        else{
            printf("\nA ordem crescente = %d, %D-d, %d\n", n2, n3, n1);
        }
    }
    else if(n3 > n1 && n3 > n2)
    {
        if(n1 > n2){
            printf("\nA ordem crescente = %d, %d, %d\n", n3, n1, n2);
        }
        else{
            printf("\nA ordem crescente = %d, %d, %d\n", n3, n2, n1);
        }
    }
    else 
    {
        printf("\nOs numeros sao iguais.\n");
    }

    return 0; 

}