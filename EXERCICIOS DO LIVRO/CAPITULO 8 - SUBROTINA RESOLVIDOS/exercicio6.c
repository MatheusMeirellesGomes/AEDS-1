#include <stdio.h>
#include <stdlib.h>
int multiplica (int numero) //Vai receber o número 5 informado na main. 
{
    //Calcular a tabela de multiplicação do número inteiro informado.
    for (int i = 1; i <= numero; i++) //Vai de 1 até o número informado, no caso 5. Esse primeiro for é o responsável por fazer as linhas. 
    {
        for (int j = 1; j <= i; j++) //Vai de 1 até o número da linha, no caso 5. Esse segundo for é o responsável por fazer a multiplicação.
        {
            printf("%d x %d = %d\n", i, j, i * j); //Exibe a multiplicação.
        }
        printf("\n");
    }
}
int main()
{
    //Inicializar Variáveis.
    int num;

    //Receber número.
    do {
        //Receber um número de 1 até 9.
        printf("Informe um numero de 1 a 9: "); //Ex: 5. 
        scanf("%d", &num);

    } while (num < 1 || num > 9);

    //Acionar função.
    multiplica(num); //Vai enviar um numero inteiro de 1 a 9 para o procedimento. 

    return 0;
}