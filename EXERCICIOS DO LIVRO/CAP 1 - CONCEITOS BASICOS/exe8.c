
//Receber o salario de um funcionario , calcular e mostrar o novo salário,
//sabendo que este sofreu um aumento de 25%. 25% = 0.25
int main()
{
    //inicializar o programa
    float sal_atual, sal_novo;

    //receber o salario
    printf("Digite o salario: R$ ");
    scanf("%f", &sal_atual);

    //calcular o aumento e mostrar o salario atual
    sal_novo = sal_atual + sal_atual * 0.25; // O salario ajustado é basicamente o salario atual mais o salario atual com o aumento ( multiplicado por 0.25 )
    printf("O salario ajustado eh de: R$ %.2f \n", sal_novo);


    return 0;

}
