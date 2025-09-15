#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa que leia x e N quando necessário, acione a respectiva função escolhida e exiba o resultado. As leituras e escitas devem estar no programa principal e os cálculos 
//nas respectivas funções.

//1º opção, Somatório. 
float expressaoS (int N){
    float S = 0;
    for (int i = 1; i <= N; i++)
    {
        S += (2 * i + 1.0) / (i + 4.0); 
    }
    return S; //Vai retornar o resultado do somatório. 
}

//2º opção, Produtório. 
float expressaoE (int N){
    float E = 1; 
    for (int i = 1; i <= N; i++)
    {
        E *= (i - 1.0) / (i + 2.0); 
    }
    return E; //Vai retornar o resultado do produtório. 
}

//3º opção, Somatório. 
float expressaoP (int N, int X){
    float P = 0, numerador; 
    for (int i = 1; i <= N; i++)
    {
        numerador = 0; //Numerador é igual a zero. 
        for (int a = 1; a <= i; a++)
        {
            numerador += i * pow(x, a); 
        }
        p += numerador / (i + 1); 
    }
    return P; //Vai retorna o resultado do cálculo deste somatório. 
}

//Depois de fazer as funções retornando o cálculo juntamente com a resposta, agora irá retornar a opção escolhida pelo usuário. 
int escolha (){ 
    //Inicializar Variável. 
    int opcao; 

    //Receber as opções. 
    printf("\nEscolha a opcao: \n"); 

    printf("\n1: S; 2: E; 3: \n"); 
    scanf("%d", &opcao); 

    return opcao; //Retornar opção escolhida pelo usuário. 
}

//Montar o principal agora, usando as funções acima. 
int main()
{
    //Inicializar Variáveis. 
    int N, opcao; 
    float x;

    //Receber informações. 
    printf("Informe valor de N: "); 
    scanf("%d", &N); 

    printf("Informe valor de x: "); 
    scanf("%f", &x); 

    //Puxar a função de escolha, que foi feita para verificar a escolha do usuário.
    opcao = esoclha(); 
    
    //Verificar o que for necessário fazer, puxando as funções de acordo com a opção do usuário, enquanto a opção 4 (sair), não for escolhida. 
    do
    {
        switch (opcao)
        {
        case 1:
            printf("\nS = %.2f\n", expressaoS(N)); //Puxar a função expressaoS(N), substituindo o valor de N pelo valor informado dentro do main caso seja escolhida a 1º opção. 
            break;
        case 2:
            printf("\nE = %.2f\n", expressaoE(N)); //Puxar a função expressaoE(N), substituindo o valor de N pelo valor informado dentro do main caso seja escolhida a 2º opção.
            break; 
        case 3: 
            printf("\nP = %.2f\n", expressaoP(N, x)); //Puxar a função expressaoP(N, x) substituindo os valores que estão sendo informados dentro do main caso a 3º opção seja escolhida.
        
        default:
            printf("\nOpcao Invalida.\n"); 
            break;
        }
    } while (opcao != 4);
}

