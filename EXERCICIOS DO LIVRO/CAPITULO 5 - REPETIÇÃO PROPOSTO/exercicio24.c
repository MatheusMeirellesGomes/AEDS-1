#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar variáveis.
    int numero, maior_num, menor_num;

    //Receber primeiro número.
    printf("Informe um numero: ");
    scanf("%d", &numero);

    //Verificar se o primeiro número é positivo.
    if (numero > 0)
    {
        //Inicializar maior e menor número com o primeiro número válido.
        maior_num = numero;
        menor_num = numero;

        //Enquanto os números do conjunto forem maiores que zero, execute.
        while (numero > 0)
        {
            //Receber novamente outro número dentro do loop.
            printf("\nInforme outro numero: ");
            scanf("%d", &numero);

            //Verificar qual é o maior número (apenas se for positivo).
            if (numero > 0 && numero > maior_num) {
                maior_num = numero;
            }

            //Verificar qual é o menor número (apenas se for positivo).
            if (numero > 0 && numero < menor_num) {
                menor_num = numero;
            }
        }

        //Imprimir maior e menor número.
        printf("\nMaior Numero: %d.\nMenor Numero: %d\n", maior_num, menor_num);
    }

    else {
        printf("\nNenhum numero valido foi informado.\n");
    }

    return 0;
}