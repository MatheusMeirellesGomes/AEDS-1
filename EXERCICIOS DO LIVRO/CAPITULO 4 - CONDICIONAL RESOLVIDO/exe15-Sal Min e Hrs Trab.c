//Receba o valor do salário mínimo, o número de horas trabalhadas, o número de dependentes do funcionário e quantidade de horas extras trabalhadas.
//Calcule e mostre o salário a receber de acordo com as regras a seguir:
//1- O valor da hora trabalhada = 1/5 do salário mínimo; 2- O salário do mês = ao número de hrs trabalhadas * valor da hora trabalhada.
//3- Acrescentar R$ 32 para cada dependente; 4- Hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%.
//5- O salário bruto = salário do mês + valor dos dependentes + valor das horas extras; 6- Calcular o valor do imposto de renda de acordo com a tabela:
// salário bruto menor que 200 = isento de imposto; - salário bruto de 200 a 500 = 10% de imposto; - salário bruto maior que 500 = 20% de imposto.
//Salário Líquido = salário bruto - imposto.
//salário líquido até 350 = 100 reais de gratificação; - salário líquido superior a 350 = 50 reais de gratificação.
int main()
{
    //Iniciaizar Variáveis
    float sal_min, valor_hr_trab, valor_hr_extra, sal_receber, sal_bruto, imposto = 0, sal_liquido;
    int nmr_hrs_tra, nmr_dependentes, valor_dependentes, qntd_hrs_extras;

    //Receber informações.
    printf("Salario Minimo = R$ ");
    scanf("%f", &sal_min);

    printf("\nNumero de Horas Trabalhadas = ");
    scanf("%d", &nmr_hrs_tra);

    printf("Numero de Dependentes = ");
    scanf("%d", &nmr_dependentes);

    printf("Quantidade de Horas Extras = ");
    scanf("%d", &qntd_hrs_extras);

    //Calcular o que se pede.
    valor_hr_trab = sal_min / 5.0; //Valor da hora trabalhada é 1/5 do salário mínimmo.
    valor_dependentes = (nmr_dependentes * 32); //Para cada dependentes é somado 32 reais.
    sal_receber = nmr_hrs_tra * valor_hr_trab; //Salário do mês = número de horas trabalhadas vezes valor da hora trabalhada.
    valor_hr_extra = valor_hr_trab * 1.5 * qntd_hrs_extras; //Valor da hora extra = valor da hora trabalhada acrescido 50%.
    sal_bruto = sal_receber + valor_dependentes + valor_hr_extra; //Salário Bruto = salário a receber mais valor dos dependentes mais valor da hora extra.

    //Imprimir os resultados.
    printf("\nValor da Hora Trabalhada = R$ %.2f\n", valor_hr_trab);
    printf("Valor dos Dependentes = R$ %d\n", valor_dependentes);
    printf("Salario a Receber no Mes = R$ %.2f\n", sal_receber);
    printf("Valor da Hora extra = R$ %.2f\n", valor_hr_extra);
    printf("Salario Bruto = R$ %.2f\n", sal_bruto);

    //Verificar os impostos.
    if (sal_bruto < 200) //Se o salário bruto for menor que 200: Isento de Imposto.
    {
        printf("Isento de Imposto\n");
    }
    else if (sal_bruto >= 200 && sal_bruto <= 500) //Se o salário bruto for entre 200 - 500: Imposto de 10%
    {
        imposto = sal_bruto * 0.10;
        printf("Imposto de R$ %.2f\n", imposto);
    }
    else if (sal_bruto > 500) //Se o sálario bruto for maior que 500: Imposto de 20%.
    {
        imposto = sal_bruto * 0.20;
        printf("Imposto de R$ %.2f\n", imposto);
    }

    //Calcular e imprimir o salário líquido.
    sal_liquido = sal_bruto - imposto; //Salário Líquido = salário bruto menos imposto.
    printf("\nSalario Liquido Descontado do Imposto = R$ %.2f\n", sal_liquido);

    //Verificar Gratificação.
    if (sal_liquido <= 350) //Se o salário líquido for menor ou igual a 350: Gratificação de 100 reais.
    {
        sal_liquido += 100;
        printf("\nSalario Liquido Reajustado = %.2f\n", sal_liquido);
    }
    else if (sal_liquido > 350) //Se o salário líquido for maior que 350: Gratificação de 50 reais.
    {
        sal_liquido += 50;
        printf("\nSalario Liquido Reajustado = %.2f\n", sal_liquido);
    }
    return 0;
}
