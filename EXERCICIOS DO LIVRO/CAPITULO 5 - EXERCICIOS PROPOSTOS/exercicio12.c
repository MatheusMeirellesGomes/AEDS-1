#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int qntd_primo = 0, num, divisores;

    //Receber 10 numeros inteiros.
    for (int cont = 1; cont <= 10; cont++)
    {
        //Receber valor.
        printf("Informe o %d numero: ", cont);
        scanf("%d", &num);

        //Inicializar divisores com 0.
        divisores = 0; //Fazer dentro do for para zerar o contador de divisores a cada número.

        //Verificar se o número é primo.
        if (num >= 2){
            //Percorrer todos os números de 1 até num.
            for (int i = 1; i <= num; i++){
                //Verificar se i é divisor de num.
                if (num % i == 0){
                    divisores++; //Incrementar o contador de divisores.
                }
            }

            //Verificar se o número é primo.
            if (divisores == 2) {
                qntd_primo++; //Incrementar o contador de números primos.
            }
        }
    }

    //Imprimir a quantidade de números primos.
    printf("\n\nQuantidade de numeros primos: %d\n", qntd_primo);

    return 0;
}