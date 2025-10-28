//Uma agência bancária possui dois tipos de investimentos. Receba o tipo de investimento e seu valor. Calcule e mostre o valor corrigido após um mês de investimentos
//de acordo com o tipo de investimento.
int main()
{
    //Inicializar Variáveis.
    float valor_inves, rendimento, investimento_final;
    int tipo; 

    //Receber informações. 
    printf("Informe o valor do investimento: R$ ");
    scanf("%f", &valor_inves); 

    printf("Informe o tipo do investimento (1- poupanca / 2- fundos de renda fixa): "); 
    scanf("%d", &tipo); 

    //Verificar o rendimento de acordo com a tabela. 
    if (tipo == 1){
        rendimento = valor_inves * 0.03; 
    }
    else if (tipo == 2){
        rendimento = valor_inves * 0.04; 
    }
    else {
        printf("\nOpcao Invalida.\n"); 
    }

    //Calcular o valor investido após um mês. 
    investimento_final = valor_inves + rendimento; 
    
    //Imprimir o valor corrigido após um mês. 
    printf("Valor do Investimento corrigido: R$ %.2f", investimento_final); 

    return 0;

}