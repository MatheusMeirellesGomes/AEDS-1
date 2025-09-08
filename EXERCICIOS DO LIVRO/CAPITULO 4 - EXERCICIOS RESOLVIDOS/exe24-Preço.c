//Receba o preço, o tipo (A- alimentação; L- limpeza; V- vestuário) e a refrigeração (S- produto que necessita de refrigeração; N- produto que não necessita de refrigeração)
//Suponha que haverá apenas a digitação de dados válidos. Calcule e mostre:
//O valor adicional, de acordo com a tabela do livro. O valor do imposto de acordo com a tabela do livro. O preço do custo (Preço mais imposto).
//O desconto, de acordo com as regras do livro. O novo preço, preço de custo mais adicional menos desconto.
//A classificação de acordo com a regra do livro.
int main()
{
    //inicializar Variáveis.
    float preco, valor_adicional = 0, imposto = 0, preco_custo;
    float desconto = 0, preco_novo;
    char tipo, refrigeracao;

    //Receber informações.
    printf("Informe o preco do produto: R$ ");
    scanf("%f", &preco);

    printf("Informe o tipo do produto (A- alimentacao / L- limpeza / V- vestuario): ");
    scanf(" %c", &tipo);

    printf("Informe a refrigeracao (S- precisa de refrigeracao / N- nao precisa de refrigeracao): ");
    scanf(" %c", &refrigeracao);

    //Verificar, calcular e o valor do adicional de acordo com o preço do produto.
    if (refrigeracao == 'N')
    {
        if (tipo == 'A')
        {
            if (preco < 15){
                valor_adicional = 2;
            }
            else if (preco >= 15){
                valor_adicional = 5;
            }
        }
        else if (tipo == 'L')
        {
            if (preco < 10){
                valor_adicional = 1.50;
            }
            else if (preco >= 10){
                valor_adicional = 2.50;
            }
        }
        else
        {
            if (preco < 30){
                valor_adicional = 3;
            }
            else if (preco >= 30){
                valor_adicional = 2.50;
            }
        }
    }
    else if (refrigeracao == 'S')
    {
        if (tipo == 'A'){
            valor_adicional = 8;
        }
        else if (tipo == 'L'){
            valor_adicional = 0;
        }
        else {
            valor_adicional = 0;
        }
    }

    //Verificar, calcular e exibir o valor do imposto.
    if (preco < 25){
        imposto = preco * 0.05;
    }
    else if (preco >= 25){
        imposto = preco * 0.08;
    }

    printf("\nValor do Imposto: R$ %.2f\n", imposto);

    //Calcular e exibir o preço de custo.
    preco_custo = preco + imposto;

    printf("\nValor do preco de custo: R$ %.2f\n", preco_custo);

    //Calcular e exibir o desconto de acordo com as regras.
    if (tipo == 'A'){
        if (refrigeracao == 'S'){
            desconto = 0;
        }
    }
    else {
        desconto = preco_custo * 0.03;
    }

    printf("\nValor do desconto: R$ %.2f\n", desconto);

    //Calcular e exibir o novo preço do produto.
    preco_novo = preco_custo + valor_adicional - desconto;

    printf("\nValor do preco reajustado: R$ %.2f\n", preco_novo);

    //Verificar e exibir a classificação de acordo com o novo preço do produto.
    if (preco_novo <= 50){
        printf("\nProduto Barato.\n");
    }
    else if (preco_novo > 50 && preco_novo < 100){
        printf("\nProduto Normal.\n");
    }
    else if (preco_novo >= 100){
        printf("\nProduto Caro.\n");
    }

    return 0;

}
