//Receba o salário mínimo, o turno de trabalho (M - matutino; V - vespertino; N - Noturno), a categoria (O - operário; G - gerente), e o número de horas trabalhadas no
//mês de um funcionário. Suponha a digitação apenas de dados válidos e, quando houver digitação de letras, utilize letra maiúsculas. Calcule e mostre:
//O coeficiente do salário de acordo com a tabela do livro.
//O valor do salário Bruto, ou seja, o número de horas trabalhadas multiplicado pelo valor do coeficiente do salário.
//O imposto, de acordo com a tabela do livro. A gratificação de acordo com as regras do livro. O auxílio alimentação de acordo com as regras a seguir.
//O salário liquído, ou seja, salário bruto menos o imposto mais a gratificação mais o auxilio alimentação.
//A classificação de acordo com a tabela do livro.
int main()
{
    //Inicializar Variáveis.
    int nmr_horas_trabalhadas;
    float sal_minimo, coeficiente, sal_bruto, imposto = 0, gratificacao = 0;
    float aux_alimentacao = 0, sal_liquido, classificacao;
    char turno, categoria;

    //Receber informações necessárias.
    printf("Informe o salario minimo: R$ ");
    scanf("%f", &sal_minimo);

    printf("Informe o turno de trabalho (M- matutino; V- vespertino; N- noturno): ");
    scanf(" %c", &turno);

    printf("Informe a categoria (O- operario; G- gerente): ");
    scanf(" %c", &categoria);

    printf("Informe o numero de horas trabalhadas no mes: ");
    scanf("%d", &nmr_horas_trabalhadas);

    //Calcular e mostrar o coeficiente do salário.
    if (turno == 'M')
    {
        coeficiente = sal_minimo * 0.10;
    }
    else if (turno == 'V')
    {
        coeficiente = sal_minimo * 0.15;
    }
    else
    {
        coeficiente = sal_minimo * 0.12;
    }

    printf("\nCoeficiente do Salario: R$ %.2f\n", coeficiente);

    //Calcular e exibir o salário bruto.
    sal_bruto = nmr_horas_trabalhadas * coeficiente;
    printf("\nSalario Bruto: R$ %.2f\n", sal_bruto);

    //Verificar, calcular e exibir imposto.
    if (categoria == 'O')
    {
        if (sal_bruto >= 300){
            imposto = sal_bruto * 0.05;
        }
        else if (sal_bruto < 300){
            imposto = sal_bruto * 0.03;
        }
    }
    else if (categoria == 'G')
    {
        if (sal_bruto >= 400){
            imposto = sal_bruto * 0.06;
        }
        else if (sal_bruto < 400){
            imposto = sal_bruto * 0.04;
        }
    }

    printf("\nValor do Imposto: R$ %.2f\n", imposto);

    //Verificar, calcular gratificação de acordo com os requisitos.
    if (turno == 'N')
    {
        if (nmr_horas_trabalhadas > 80){
            gratificacao = 50;
        }
    }
    else
    {
        gratificacao = 30;
    }

    //Verificar e calcular o auxílio alimentação de acordo com as regras.
    if (categoria == 'O' || coeficiente <= 25)
    {
        aux_alimentacao = sal_bruto / 3.0; //Um terço do salário bruto.
    }
    else
    {
        aux_alimentacao = sal_bruto / 2.0; //Metade do salário bruto.
    }

    printf("\nValor do auxilio alimentacao: R$ %.2f\n", aux_alimentacao);

    //Calcular e exibir o salário liquído.
    sal_liquido = sal_bruto - imposto + (gratificacao + aux_alimentacao);

    printf("\nValor do salario liquido: R$ %.2f\n", sal_liquido);

    //Verificar a classifição de acordo com o salário liquído.
    if (sal_liquido < 350){
        printf("\nMal Remunerado.\n");
    }
    else if (sal_liquido >= 350 && sal_liquido <= 600){
        printf("\nSalario Normal.\n");
    }
    else if (sal_liquido > 600){
        printf("\nBem Remunerado.\n");
    }

    return 0;

}
