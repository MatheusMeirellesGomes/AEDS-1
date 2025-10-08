#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Inicializar Variáveis.
    int numero_canal, numero_pessoas;
    int soma_pessoas = 0;
    int canal4 = 0, canal5 = 0, canal7 = 0, canal12 = 0;
    float porcentagem_canal4, porcentagem_canal5, porcentagem_canal7, porcentagem_canal12;

    //Receber número do canal primeiro para verificar se é 0 ou não.
    printf("Informe o numero do canal (4, 5, 7, 12) ou 0 para encerrar: ");
    scanf("%d", &numero_canal);

    //Verificar se o número do canal é diferente de 0.
    while (numero_canal != 0) 
    {
        if (numero_canal == 4 || numero_canal == 5 || numero_canal == 7 || numero_canal == 12) {
            //Informar número de pessoas que estão assistindo.
            printf("Informe o numero de pessoas que estao assistindo: ");
            scanf("%d", &numero_pessoas);

            //Verificar se o número de pessoas é maior que 0.
            if (numero_pessoas > 0) {
                //Se for maior que zero, primeiro somar ao total de pessoas. 
                soma_pessoas += numero_pessoas;

                //Depois, somar a cada canal especificamente.
                if (numero_canal == 4){
                    canal4 += numero_pessoas; //Está somando o número de pessoas que estão assistindo o canal 4. 
                }
                else if (numero_canal == 5) {
                    canal5 += numero_pessoas;
                }
                else if (numero_canal == 7) {
                    canal7 += numero_pessoas;
                }
                else if (numero_canal == 12) {
                    canal12 += numero_pessoas;
                }
            }
        }

        //Receber o canal novamente, para entrar no loop até que seja 0.
        printf("Informe o numero do canal (4, 5, 7, 12) ou 0 para encerrar: ");
        scanf("%d", &numero_canal);
    }

    //Calcular porcentagem de audiência de cada canal.
    porcentagem_canal4 = (canal4 * 100.0) / soma_pessoas;
    porcentagem_canal5 = (canal5 * 100.0) / soma_pessoas;
    porcentagem_canal7 = (canal7 * 100.0) / soma_pessoas;
    porcentagem_canal12 = (canal12 * 100.0) / soma_pessoas;

    //Se tiver pessoas que assistem TV, 
    if (soma_pessoas > 0) {
        printf("\nPorcentagem de audiencia canal 4: %.2f%%\n", porcentagem_canal4);
        printf("Porcentagem de audiencia canal 5: %.2f%%\n", porcentagem_canal5);
        printf("Porcentagem de audiencia canal 7: %.2f%%\n", porcentagem_canal7);
        printf("Porcentagem de audiencia canal 12: %.2f%%\n", porcentagem_canal12);
    } else {
        printf("\nNenhuma pessoa assiste TV.\n");
    }

    return 0;
}