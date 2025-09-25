#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    float sal_min, gasto, acrescimo;
    int qntd_klwts = 0, tipo;
    float valor_klw, valor_final, faturamente_geral = 0, total_geral = 0;
    int qntd_consumidores = 0;

    //Receber dados necessários.
    printf("Informe o salario minimo: ");
    scanf("%f", &sal_min);

    printf("Informe a quantidade de quilowatt(s): ");
    scanf("%d", &qntd_klwts);

    //Calcular o valor do quilowatt.
    valor_klw = sal_min / 8.0; //Um oitavo do salário mínimo.

    //Ver se a quantidade de quilowatts é diferente de zero.
    while (qntd_klwts != 0)
    {
        //Calcular o gasto.
        gasto = qntd_klwts * valor_klw;

        //Receber o tipo de consumidor.
        printf("Informe o tipo de consumidor [1- residencial / 2- comercial / 3- industrial]: ");
        scanf("%d", &tipo);

        //Verificar de acordo com o tipo de consumidor.
        switch (tipo)
        {
        case 1:
            acrescimo = gasto * 0.05;
            break;
        case 2:
            acrescimo = gasto * 0.10;
            break;
        case 3:
            acrescimo = gasto * 0.15;
            break;
        default:
            printf("\nTipo de consumidor invalido.\n");
            break;
        }

        //Calcular o faturamento geral.
        faturamente_geral = gasto + acrescimo;

        //Calcular o total geral.
        total_geral += faturamente_geral;

        //Verificar o faturamento geral.
        if (faturamente_geral >= 500 && faturamente_geral <= 1000){
            qntd_consumidores++;
        }

        //Imprimir resultados.
        printf("\nGasto = %.2f\n", gasto);
        printf("Acrescimo = %.2f\n", acrescimo);
        printf("Faturamento geral = %.2f\n", faturamente_geral);

        //Ler novamente quantidade de kwlts.
        printf("\nInforme a quantidade de quilowatt(s): ");
        scanf("%d", &qntd_klwts);
    }

    //Imprimir o total geral e a quantidade de consumidor.
    printf("\nTotal Geral: %.2f\n", total_geral);
    printf("Quantidade de consummidor: %d\n", qntd_consumidores);

    return 0;
}
