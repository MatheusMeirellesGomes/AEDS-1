#include <stdio.h>
#include <stdlib.h>

// Função que calcula a soma S = 1 + 1/1! + 1/2! + ... + 1/N!
float soma_inverso_fatorial(int N)
{
    //Inicializar Variáveis.
    float S = 1.0; //Soma inicializada com o primeiro termo da soma, que é 1.
    int fat; //Variável para armazenar o fatorial.

    for (int i = 1; i <= N; i++) //Laço que percorre de 1 até N para calcular cada termo da soma. 
    {
        //Calcula o fatorial de i
        fat = 1; //Inicializa o fatorial como 1 para cada i. 

        //Laço que calcula o fatorial de i. 
        for (int j = 1; j <= i; j++)
        {
            fat *= j; //Multiplica fat pelo valor atual de j, para calcular o fatorial.
        }

        //Adicionar o termo 1/i! a soma S.
        S += 1.0 / fat;
    }

    //Retornar o valor da soma S.
    return S;
}

int main()
{
    //Inicializar Variável. 
    int N;
    
    //Receber N
    printf("Insira o valor de N: "); //Número inteiro para indicar até onde a soma deve ser calculada.
    scanf("%d", &N);

    //Acionar função. 
    float resultado = soma_inverso_fatorial(N); //Vai mandar o valor de N para a função e receber o resultado da soma. 

    //Imprimir resultado. 
    printf("S = %.2f\n", resultado);

    return 0;
}