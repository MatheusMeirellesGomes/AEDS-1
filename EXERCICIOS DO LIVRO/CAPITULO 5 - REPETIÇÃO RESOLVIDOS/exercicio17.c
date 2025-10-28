#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    float sal_carlos, sal_joao;
    int meses = 0; //Inicializar meses igual a zero para não ter lixo de memória.

    //Receber informações.
    printf("Informe salario de carlos: R$ ");
    scanf("%f", &sal_carlos);

    //Calcular o salário de joão.
    sal_joao = sal_carlos / 3.0; //Um terço do salário do carlos.
    printf("\nSalario de Joao: R$ %.2f\n", sal_joao);

    //Verificar o que é necessário fazer para verificar em quantos meses o salário de joão passará o de carlos.
    do
    {
        //Calcular salário do carlos e do joão.
        sal_carlos += (sal_carlos * 2) / 100; //Salário do carlos rende 2% ao mês na cardeneta de poupança.
        sal_joao += (sal_joao * 5) / 100; //Salário do joão rende 5% ao mês na cardeneta de poupança.
        meses++; //Vai salvar na variável quantos meses vão se passar até que o salário de joão fique igual ou maior que o de carlos.
    } while (sal_joao <= sal_carlos);

    //Imprimir o total de meses.
    printf("\nTotal de meses: %d\n", meses);

    return 0;
}
