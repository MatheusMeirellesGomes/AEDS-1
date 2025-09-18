#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Leia o número de termos e um valor positivo para X. Calcule e mostre o valor de s, conforme a fórmula a seguir: 
//s = -x²/1! + x³/2! - x^4/3! + x^5/4! - x^6/3! + x^7/2! - x^8/1! + x^9/2! - x^10/3! + x^11/4!. 
//Estrutura de Repetição. 
int main()
{
    //Inicializar Variáveis. 
    int expo = 2, N, den = 1, incremento = 1; //Expoente começa com 2, N = número de vezes que vai ser calculado. 
    float x, s = 0, fatorial = 2; //X é o número da fórmula que vai ser calculado. 

    //Receber informações. 
    printf("Digite quantas parcelas: "); //Informar quantas parcelas vão ser feitas. 
    scanf("%d", &N); 

    printf("Digite valor de X: "); //Saber o valor do X, para substituí-lo.
    scanf("%f", &x); 

    //Verificar e fazer a conta com for. 
    for (int parcela = 1; parcela <= N; parcela++)// Parcela começa com 1, tem que ser menor ou igual a quantidade de parcelas e vai incrementando.
    {
        fatorial = 1; //Igualar fatorial. 
        for (int val = den; val >= 2; val--)//calcular o fatorial.
        {
            fatorial *= val; 
        }
        if (parcela % 2 == 0)// Se a parcela for par, o resultado é positivo. 
        {
            s += pow(x,expo) / fatorial; //S = valor de s mais ao numero elevado a potência dividido pelo fatorial. 
        }
        else 
        {
            s -= pow(x,expo) / fatorial; //Se for ímpar, o resultado é negativo. 
        }
        expo++; //Incrementar o expoente. 

        if (den == 1) 
        {
            incremento = 1;  //Inccrementar o denominador até chegar ao denominador = 4. 
        }
        else if (den == 4)
        {
            incremento = -1; //Quando chegar em 4, o denominador começa a diminuir.
        }
        den += incremento; //Denominador recebe o valor do incremento. Ex: den = 1 + 1 = 2. 
    }

    //Imprimir resultado.
    printf("S = %.2f", s); 

    return 0; 
}