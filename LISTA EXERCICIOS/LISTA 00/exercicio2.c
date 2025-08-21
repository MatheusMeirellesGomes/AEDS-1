//Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um algoritmo que leia o valor do salário mínimo e a quantidade de kilowatt
//gasta por uma residência, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago;
// e o novo valor a ser pago por essa residência com um desconto de 10%.
int main()
{
    //Inicializar variáveis.
    float sal_min, preco_kW, valor_pago, desconto, preco_desconto;
    int qntd_kW;

    //Receber informações.
    printf("Salario Minimo = R$ ");
    scanf("%f", &sal_min);

    printf("Quantidade de Kilowatt = ");
    scanf("%d", &qntd_kW);

    //Fazer os cálculos
    preco_kW = (sal_min / 7.0) / 100; // 100 kW custam 1/7 do salário mínimo, então 1 kW = (sal/7)/100; Se fosse 100 kW seria: 100kW = sal_min / 7.0;
    valor_pago = preco_kW * qntd_kW; //O valor a pagar é nada menos que o preço de 1 kW multiplicado pela quantidade de kW;
    desconto = valor_pago * 0.10; //Para achar o desconto é so multiplicar o valor a ser pago pela quantidade de desconto, que no caso é 10%.
    preco_desconto = valor_pago - desconto; //O preço final, que é o preço com desconto, é o valor a ser pago menos o desconto encontrado.

    //Imprimir resultados
    printf("Valor do kW = R$ %.2f\n", preco_kW);
    printf("Valor a pagar = R$ %.2f\n", valor_pago);
    printf("Valor com desconto = R$ %.2f", preco_desconto);

    return 0;

}
