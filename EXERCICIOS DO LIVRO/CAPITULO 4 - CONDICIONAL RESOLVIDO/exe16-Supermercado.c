//Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: o prroduto poderá ter seu preço aumentado
//ou diminuido. Para o preço ser alterado, o produto deve preencher um dos requisitos abaixo:
//venda média mensal < 500; preço atual < 30; 10% de aumento.
//venda média mensal >= 500 e < 1200; preço atual >= 30 e < 80; 15% de aumento.
//venda média mensal >= 1200; preço atual >= 80; 20% de diminuição.
int main()
{
    //inicializar Variáveis.
    float venda_media, preco_atual, preco_novo;
    float aumento, diminuicao;

    //Receber informações.
    printf("Informe a venda media mensal do produto: R$ ");
    scanf("%f", &venda_media);

    printf("Informe o preco atual do produto: R$ ");
    scanf("%f", &preco_atual);

    //Verificar se a venda média mensal é válida.
    if (venda_media < 500) //Se o valor da venda média for menor que 500.
    {
        if (preco_atual < 30){ //Se o preco atual for menor que 30.
            aumento = preco_atual * 0.10; //Aumento será de 10%.
            preco_novo = preco_atual + aumento;
            printf("\nPreco novo do produto com aumento de 10%%: R$ %.2f", preco_novo);
        }
        else{
            printf("\nProduto nao sofre alteracao de preco!\n");
        }
    }
    else if (venda_media >= 500 && venda_media < 1200) //Se o valor da venda média for maior ou igual a 500 e menor que 1200.
    {
        if (preco_atual >= 30 && preco_atual < 80){ //Se o preço atual for maior ou igual a 30 e menor que 80.
            aumento = preco_atual * 0.15; //Aumento será de 15%.
            preco_novo = preco_atual + aumento;
            printf("Preco novo do produto com aumento de 15%%: R$ %.2f", preco_novo);
        }
        else{
            printf("\nProduto nao sofre alteracao de preco!\n");
        }

    }
    else if (venda_media >= 1200) //Se o valor da venda média for maior ou igual a 1200.
    {
        if (preco_atual >= 80){ //Se o preco atual for maior ou igual a 80.
            diminuicao = preco_atual * 0.20; //Diminuição será de 20% e não terá aumento.
            preco_novo = preco_atual - diminuicao;
            printf("\nPreco novo do produto com diminuicao de 20%%: R$ %.2f\n", preco_novo);
        }
        else{
            printf("\nProduto nao sofre alteracao de preco!\n");
        }
    }

    return 0;
}
