int main()
{
    //Inicializar Variáveis. 
    float valor; 
    float soma_vista = 0, soma_prazo = 0, valor_total = 0; 
    float valor_prestacao = 0; 
    char pagamento; 

    //Como são 15 transações fazer um for para as 15. 
    for (int cont = 1; cont <= 15; cont++)
    {
        //Receber o código da transação. 
        printf("\nCodigo da Transacao\n"); 
        printf("V- a vista. / P - a prazo.\n");
        scanf(" %c", &pagamento);

        //Receber o valor de cada transação. 
        printf("Informe o valor da transacao: R$ "); 
        scanf("%f", &valor); 

        //calcular o valor total das somas á vista.
        if (pagamento == 'V'){
            soma_vista += valor; //Vai somar os valores das transações á vista.
        }

        //Calcular o valor das compras á prazo.
        if (pagamento == 'P'){
            soma_prazo += valor; //Vai somar os valores das transações a prazo.
        }

        //Calcular o valor total das compras efetuadas. 
        valor_total += valor; //Vai somar todos os valores das 15 transações.

        //Calcular o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.
        if (cont == 1 && pagamento == 'P'){
            valor_prestacao = valor / 3; 
        }
    } 

    //Imprimir resultados. 
    printf("\nValor total das compras a vista: R$ %.2f\n", soma_vista); 
    printf("Valor total das compras a prazo: R$ %.2f\n", soma_prazo); 
    printf("Valor total das compras efetuadas: R$ %.2f\n", valor_total); 
    printf("Valor de cada parcela: R$ %.2f\n",valor_prestacao);

    return 0;
}