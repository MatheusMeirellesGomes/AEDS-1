//O funcionário recebe um salario fixo mais 4% de comissão sobre as vendas.
//Receba o salario inicial, e o valor de suas vendas, calcule e mostre a comissao e
//seu salário final.
int main()
{
    //Inicializar com dados do programa
    float salario_inicial, comissao, valor_vendas, salario_final;

    //Receber o salario inicial e o valor total de vendas do funcionario.
    printf("Salario fixo do funcionario: R$ ");
    scanf("%f", &salario_inicial);
    printf("Total de vendas do funcionario: ");
    scanf("%f", &valor_vendas);

    //Calcular a comissao e o salario final do funcionario.
    comissao = valor_vendas * 0.4;//A comissão é o valor das vendas multiplicado por 4% (0.04), valor da comissão que 
    //foi informado no enunciado. Sempre transformar a porcentagem em decimal para fazer o cálculo.
    salario_final = salario_inicial + comissao;

    //Imprimir salario final do funcionario e o valor da comissao.
    printf("Valor da comissao: R$ %.2f\n", comissao);
    printf("Salario final do funcionario = R$ %.2f ", salario_final);
    
    return 0; 
}
