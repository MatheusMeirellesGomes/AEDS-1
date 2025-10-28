#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis. 
    int N, resposta = 0; 

    //Receber número para tabuada. 
    printf("Informe o numero da tabuada: "); 
    scanf("%d", &N); 

    //Verficar se o número não é 0. 
    if (N == 0){
        printf("\nNao existe tabuada do zero.\n"); 
    }
    else {
    //Fazer a tabuada do número. 
    for (int cont = 1; cont <= N; cont++)
    {
        resposta = N * cont; 
        printf("\n%d * %d = %d\n", resposta); 
    }
    }
}