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
    if(n1 > n2 && n1 > n3)//Verificar primeiro número.
    {
        if(n2 > n3){
            printf("A ordem crescente = %d, %d, %d\n", n1, n2, n3); //Verificar se o segundo é maior que o terceiro. 
        }
        else{
            printf("\nA ordem crescente = %d, %d, %d\n", n1, n3, n2); //Se não for, inverter a ordem do segundo e terceito número.
        }
    }
    else if(n2 > n1 && n2 > n3)//Verificar segundo número. 
    {
        if(n1 > n3){
             printf("\nA ordem crescente = %d, %d, %d\n", n2, n1, n3); //Verificar se o primeiro é maior que o terceiro. 
        }
        else{
            printf("\nA ordem crescente = %d, %D-d, %d\n", n2, n3, n1);//Se não for, inverter a ordem do primeiro e o terceiro número.
        }
    }
    else if(n3 > n1 && n3 > n2)//Verificar terceiro número.
    {
        if(n1 > n2){
            printf("\nA ordem crescente = %d, %d, %d\n", n3, n1, n2);//Verificar se o primeiro é maior que o segundo.
        }
        else{
            printf("\nA ordem crescente = %d, %d, %d\n", n3, n2, n1);//Se não for, inverter a ordem do primeiro e o segundo número.
        }
    }
    else 
    {
        printf("\nOs numeros sao iguais.\n");//Se os números forem iguais, informar que eles são iguais. 
    }

    return 0; 

}