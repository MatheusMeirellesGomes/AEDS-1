//Receba o salário base e o tempo de serviço de um funcionário. Calcule e mostre o imposto comforme a tabela do livro, a gratificação conforme a tabela do livro
//o salário líquido, ou seja, o salário base menos o imposto mais a gratificação e, por fim, a categoria, que a tabela ta,bém está no livro.
int main()
{
    //Inicializar Variáveis.
    int tempo_servico;
    float sal_bruto, sal_liquido, gratificacao = 0, imposto = 0;

    //Receber informações.
    printf("Informe o salario bruto: ");
    scanf("%f", &sal_bruto);

    printf("Informe o tempo de servico: ");
    scanf("%d", &tempo_servico);

    //Verificar o imposto.
    if (sal_bruto < 200)
    {
        imposto = 0;
        printf("\nIsento de Imposto.\n");
    }
    else if (sal_bruto >= 200 && sal_bruto <= 450)
    {
        imposto = sal_bruto * 0.03;
    }
    else if (sal_bruto > 450 && sal_bruto < 700)
    {
        imposto = sal_bruto * 0.08;
    }
    else if (sal_bruto >= 700)
    {
        imposto = sal_bruto * 0.12;
    }

    printf("\nValor do Imposto: R$ %.2f\n", imposto);

    //Verificar a gratificação.
    if (sal_bruto > 500)
    {
        if (tempo_servico <= 3){
            gratificacao = 20;
        }
        else if (tempo_servico > 3){
            gratificacao = 30;
        }
    }
    else if (sal_bruto <= 500)
    {
        if (tempo_servico <= 3){
            gratificacao = 23;
        }
        else if (tempo_servico > 3 && tempo_servico <= 6){
            gratificacao = 35;
        }
        else if (tempo_servico > 6){
            gratificacao = 33;
        }
    }

    //Calcular o salário liquído, que é o salário menos o imposto mais a gratificação.
    sal_liquido = (sal_bruto - imposto) + gratificacao;

    //Imprimir salário liquído.
    printf("\nSalario Liquido: R$ %.2f\n", sal_liquido);

    //Verificar a categoria de acordo com o salário liquído.
    if (sal_liquido <= 350)
    {
        printf("\nCLASSIFICACAO A.\n");
    }
    else if (sal_liquido > 350 && sal_liquido <= 600)
    {
        printf("\nCLASSIFICACAO B.\n");
    }
    else if (sal_liquido > 600)
    {
        printf("\nCLASSIFICACAO C.\n");
    }

    return 0;

}
