// Calcular o novo salario de um funcionario. Os que recebem ate 500 reais
//  terão aumento de 20%, os demais terão aumento de 10%
int main()
{
    //inicilizar o salario do funcionaario
    float sal_atual, novo_sal;

    //receber o salario do funcionario
    printf("Digite o salario atual do funcionario: R$ ");
    scanf("%f", &sal_atual);

    //verificar quanto o funcionario recebe
    if ( sal_atual <= 500 )
    {
        novo_sal = sal_atual * 1.20;
    }
    else
    {
        novo_sal = sal_atual * 1.10;
    }
    printf("o novo salario do funcionario eh de: %.2f", novo_sal);
    return 0;

}
