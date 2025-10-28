//Receber o preço de um produto, calcular e mostrar o novo preço,
//sabendo que este sofreu um desconto de 10%.
int main()
{
    //Inicializar o programa com dados do enunciado
    float preco_inicial, desconto, preco_final;

    //Receber o preço do produto e o desconto.
    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco_inicial);

    //Calcular o desconto e o preço final do produto.
    desconto = preco_inicial * 0.10; //Multiplica o preço inical por 10% , no caso 0.10 em forma decimal para obter o valor do desconto.
    preco_final = preco_inicial - desconto;

    //Imprimir o preço final do produto.
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Preco final do produto = R$ %.2f ",preco_final);

    return 0;



}
