//Receber o salário base de um funcionario, calcular e mostrar o salário a receber,
//sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto
//de 7% também sobre o salário base;
int main()
{
    //incializar o programa colocando os dados do enunciado.
    float sal_atual, sal_novo, grat, imposto;

    //Receber o salario do funcionario
    printf("Digite o salario base do funcionario: R$ ");
    scanf("%f", &sal_atual);

    //calcular a gratificação do salario base
    grat = sal_atual * 5/100; // a gratificação é o salário atual mutiplicado por 5%, podendo ser tambem 0.05.
    imposto = sal_atual * 7/100; // O imposto é o salário atual multiplicado por 7%, podendo ser tambem 0.07.

    sal_novo = sal_atual + grat - imposto; // O salário novo é a soma do salário com a gratificação ( aumento ), menos o imposto.
    printf("O salario ajustado do funcionario eh de: R$ %.2f",sal_novo);

    return 0;

}