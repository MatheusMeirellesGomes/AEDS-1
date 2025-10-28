#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    //Inicializar Variáveis. 
    int num, qntd_divisor = 0; 

    //Receber número. 
    printf("Informe um numero: "); 
    scanf("%d", &num); 

    //Verificar se o número é primo. 
    for (int cont = 1; cont <= num; cont++) //Vai verificar os números que estão de 1 até o número informado. Ex: num = 7 enão 1, 2, 3, 4, 5, 6, 7. 
    {
        if (num % cont == 0){ //Vai verificar quais números de 1 até o número informado possui algum divisor. 
            qntd_divisor++; //Se encontrar adiciona na variável a quantidade de divisor que o número tem. 
        }
    }

    //Verificar se o número informado tem mais de 2 divisor. 
    if (qntd_divisor > 2){
        printf("\nNumero nao primo.\n");  //Se tiver mais de dois divisores não é número primo. 
    }
    else {
        printf("\nNumero primo.\n"); //Se tiver 2 divisores é número primo. 
    }

    return 0;
}