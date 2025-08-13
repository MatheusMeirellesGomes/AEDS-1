//Receba o numero de horas trabalhadas, o valor do salario minimo e o numero de horas extras trabalhadas.
//Calcule e mostre o salario a receber, de acordo com as regras:
//a) A hora trabalhada vale 1/8 do salario minimo.
//b) a hora extra equivale a 1/4 do salário mínimo.
//c) O salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada.
//d) A quantia a receber pelas horas extras equivale ao numero de horas extras trabalhadas multiplicado pelo valor da hora extra.
//e) O salario a receber equivale ao salario bruto mais a quantia a receber pelas horas trabalhadas.
int main()
{
    //Inicializar com dados do enunciado.
    float sal_minimo, sal_bruto, valor_hora_extra, hora_extra_recebida, valor_hora_trabalhada, sal_receber;
    int hora_trabalhada, num_hrs_extra;

    //Receber as informações necessárias.
    printf("Valor do salario minimo: R$ ");
    scanf("%f", &sal_minimo);

    printf("Quantidade de horas trabalhadas: ");
    scanf("%d", &hora_trabalhada);

    printf("Quantidade de horas extras trabalhadas: ");
    scanf("%d", &num_hrs_extra);


    //Calcular o que se pede no enunciado.
    valor_hora_trabalhada = sal_minimo / 8.0;
    valor_hora_extra = sal_minimo / 4.0;
    sal_bruto = hora_trabalhada * valor_hora_trabalhada;
    hora_extra_recebida = num_hrs_extra * valor_hora_extra;
    sal_receber = sal_bruto + valor_hora_trabalhada;

    //Imprimir resultados:
    printf("Valor da hora trabalhada = R$ %.2f\n", valor_hora_trabalhada);
    printf("Valor da hora extra = R$ %.2f\n", valor_hora_extra);
    printf("Salario Bruto = R$ %.2f\n", sal_bruto);
    printf("Hora extra recebida = R$ %.2f\n", hora_extra_recebida);
    printf("Salario a receber = R$ %.2f", sal_receber);

    return 0;

}
