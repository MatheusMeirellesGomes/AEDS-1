//Receba o preço de um produto, calcule e mostre, de acordo com a tabela do livro, o novo preço e a classificação.
int main()
{
    //Inicializar Variáveis.
    float preco_produto, aumento, preco_final;

    //Receber preço do produto.
    printf("Informe o preço do produto: R$ ");
    scanf("%f", &preco_produto);

    //Verificar o preço de acordo com a tabela e mostrar classificação.
    if (preco_produto <= 50){
        aumento = preco_produto * 0.05;
    }
    else if (preco_produto > 50 && preco_produto <= 100){
        aumento = preco_produto * 0.10;
    }
    else {
        aumento = preco_produto * 0.15;
    }

    //Calcular e exibir o preço final do produto.
    preco_final = preco_produto + aumento;
    printf("\nPreco Final: R$ %.2f\n", preco_final);

    //Verificar o preço final e mostrar a classificação.
    if (preco_final  <= 80){
        printf("\nCLASSIFICACAO: BARATO!\n");
    }
    else if (preco_final > 80 && preco_final <= 120){
        printf("\nCLASSIFICACAO: NORMAL!");
    }
    else if (preco_final > 120 && preco_final <= 200){
        printf("\nCLASSIFICACAO: CARO!");
    }
    else {
        printf("\nCLASSIFICACAO: MUITO CARO!\n");
    }

    return 0;

}
