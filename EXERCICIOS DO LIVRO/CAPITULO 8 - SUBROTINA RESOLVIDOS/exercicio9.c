#include <stdio.h>
#include <stdlib.h>
void maior_menor()
{
    //Inicializar variáveis
    int num, maior, menor;

    //Receber os números
    for (int cont = 1; cont <= 5; cont++)
    {
        //Receber numero.
        printf("Insira o %d numero:", cont);
        printf("\nNumero: ");
        scanf("%d", &num);

        //Se for o primeiro número, inicializa maior e menor
        if (cont == 1) { //Primeiro número que será inicializado.
            maior = num;
            menor = num;
        }
        else {
            //Verificar se o número atual é maior
            if (num > maior) {
                maior = num;
            }
            //Verificar se o número atual é menor
            if (num < menor) {
                menor = num;
            }
        }
    }

    //Imprimir maior e menor número após o for
    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
}

int main()
{
    //Acionar procedimento
    maior_menor();

    return 0;
}