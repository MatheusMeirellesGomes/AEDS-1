//Receba o código de um produto comprado, supondo que a digitação do código do produto seja sempre válida, isto é, umm número inteiro entre 1 e 10. 
//Receba o peso do produto é em Kgs. Receba o código do  país de origem, supondo que a digitação do código seja sempre válida, isto é, um número entre 1 e 3. 
//Calcule e mostre: o peso do produto convertido em gramas. O preço total do produto comprado. Valor do imposto, sabendo que ele é cobrado sobre o preço total do produto
//comprado e depende do país de origem. O valor total, preço total do produto mais imposto.
int main()
{
    //Inicializar Variáveis. 
    int cod_produto, cod_pais; 
    float peso_produto, imposto = 0, peso_gramas, preco_total, valor_total; 

    //Receber informações.
    printf("Informe o codigo do produto (1 - 10): "); 
    scanf("%d", &cod_produto);

    printf("Informe o codigo do pais (1 - 3): "); 
    scanf("%d", &cod_pais);

    printf("Informe o peso do produto (kgs): "); 
    scanf("%f", &peso_produto); 

    //Calcular o preço em gramas. 
    peso_gramas = peso_produto * 1000; //Multiplicar peso em Kgs por 1000 para achar o peso em gramas. 

    if (cod_produto >= 1 && cod_produto <= 4)
    {
        preco_total = peso_gramas * 0.10;  
    }
    else if (cod_produto >= 5 && cod_produto <= 7)
    { 
        preco_total = peso_gramas * 0.25;
    }
    else if (cod_produto >= 8 && cod_produto <= 10)
    {
        preco_total = peso_gramas * 0.35;
    }
    else 
    {
        printf("\nCodigo Invalido!\n"); 
    }

    //Verificar o imposto de acordo com o código do país. 
    if (cod_pais == 1)
    {
        imposto = 0; 
    }
    else if (cod_pais == 2)
    {
        imposto = preco_total * 0.15;  
    }
    else if (cod_pais == 3)
    {
        imposto = preco_total * 0.20; 
    }
    else 
    {
        printf("\nCodigo de pais invalido.\n"); 
    }

    //Calcular o valor total do produto com o imposto imbutido. 
    valor_total = preco_total + imposto; 

    //Imprimir resultados. 
    printf("\nPeso do produto em gramas = %.2f gramas", peso_gramas);
    printf("\nPreco total do produto = R$ %.2f\n", preco_total);
    printf("\nValor do imposto = R$ %.2f\n", imposto);
    printf("\nValor Total do produto = R$ %.2f", valor_total); 

    return 0; 
}