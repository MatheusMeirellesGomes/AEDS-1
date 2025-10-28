//Um banco terá um crédito especial, de acordo com o saldo médio no último ano. Receba o salário médio e calcule o valor do crédito, de acordo com a tabela do livro: 
int main()
{
    //Inicializar Variáveis. 
    float saldo_medio, valor_credito, saldo_final; 

    //Receber Informações. 
    printf("Informe o saldo medio: R$ "); 
    scanf("%f", &saldo_medio); 

    //Verificar o saldo e o valo do crédito de acordo com a tabela. 
    if (saldo_medio > 400){
        valor_credito = saldo_medio * 0.30; 
        printf("\nValor do credito: R$ %.2f\n", valor_credito); 
    }
    else if (saldo_medio <= 400 && saldo_medio > 300){
        valor_credito = saldo_medio * 0.25; 
        printf("\nValor do credito: R$ %.2f\n", valor_credito); 
    }
    else if (saldo_medio <= 300 && saldo_medio > 200){
        valor_credito = saldo_medio * 0.20; 
        printf("\nValor do credito: R$ %.2f\n", valor_credito); 
    }
    else {
        valor_credito = saldo_medio * 0.10; 
        printf("\nValor do credito: R$ %.2f\n", valor_credito);
    }

    //Calcula o saldo médio final. 
    saldo_final = saldo_medio + valor_credito; 

    //Imprimir resultado. 
    printf("\nSaldo médio final: R$ %.2f\n", saldo_final); 

    return 0;

}