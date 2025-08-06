//Receber o salário base de um funcionário, calcular e mostrar seu salário a receber
//sabendo-se que o funcionário tem gratificação de 50 reais e paga imposto de 10% sobre o salário base.
int main()
{
    //incializar o programa colocando os dados do enunciado.
    float sal_atual, novo_sal, grat, imposto;

    //receber o salário do funcionário
    printf("Digite o salario base do funcionario: R$ ");
    scanf("%f", &sal_atual);

    //calcular e mostrar o salario a receber com a gratificação e o imposto
    imposto = sal_atual * 10/100; // esse calculo do imposto foi para saber a quantidade total de imposto com base no salário atual, podendo ser 0.10
    novo_sal = sal_atual + 50 - imposto; // o novo salário sera o salario atual mais o aumento de 50 reais menos o imposto que foi calculado

    printf("O salario ajustado eh de: R$ %.2f",novo_sal);// imprimir o salário ajustado com base nos ajustes que ele sofreu

}