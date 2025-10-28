//Uma empresa quer aplicar descontos nos seus preços usando a tabela do livro. Receba o preço atual de um produto, calcule e nostre o valor do 
//desconto e o preço novo. 
int main()
{
    //Inicializar Variáveis.
    float preco_atual, desconto, preco_final; 

    //Receber Informações. 
    printf("Informe o preco atual: "); 
    scanf("%f", &preco_atual); 

    //Verificar o desconto de acordo com o preço. 
    if (preco_atual <= 30){
        desconto = 0;
    }
    else if (preco_atual > 30 && preco_atual <= 100){
        desconto = preco_atual * 0.10; 
    }
    else {                      
        desconto = preco_atual * 0.15;
    } 
    
    //Calcular o preço final do produto. 
    preco_final = preco_atual - desconto; 

    //Imprimir Resultado. 
    printf("\nPreco Final: R$ %.2f\n", preco_final); 

    return 0;

}