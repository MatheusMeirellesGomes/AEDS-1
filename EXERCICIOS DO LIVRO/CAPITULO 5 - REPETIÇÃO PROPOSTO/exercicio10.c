#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int num, soma_par = 0, soma_primo = 0;

    //Receber 10 números.
    for (int cont = 1; cont <= 10; cont++)
    {
        //Zerar variável para cada núumero informado.
        int divisores = 0;

        //Receber número.
        printf("Informe %d numero: ", cont);
        scanf("%d", &num);

        //Verificar se o número é par.
        if (num % 2 == 0){
            soma_par += num; //Vai somar apenas os números que forem pares.
        }

        //Verificar se o número é primo.
        for (int i = 1; i <= num; i++) // i nesse caso é o divisor.
        {
            //Um número é primo quando ele só é divisível por 1 e por ele mesmo.
            if (num % i == 0){
                divisores++; //Vai contar quantos divisores o número tem.
            }
        }

        //Se o número de divisores for igual a 2, então o número é primo.
        if (divisores == 2){
            soma_primo += num; //Vai somar apenas os números que forem primos.
        }
    }

    //Imprimir resultados.
    printf("\nSoma dos numeros pares: %d\n", soma_par);
    printf("\nSoma dos numeros primos: %d\n", soma_primo);

    return 0;
}