//Receba dois números e execute as operações listadas a seguir, de acordo com a escolha do usuário. 
int main()
{
    //Inicializar Variáveis. 
    float n1, n2, media, diferenca, produto, divisao;
    int opcao;  

    //Receber os dois números.
    printf("Informe o primeiro numero: "); 
    scanf("%f", &n1); 

    printf("Informe o segundo numero: "); 
    scanf("%f", &n2);

    //Receber a escolha do usuário. 
    printf("Escolha uma opcao (1 - 4): "); 
    scanf("%d", &opcao); 

    //Verificar as operções de acordo com a opção do usuário. 
    switch (opcao)
    {
    case 1:
        media = (n1 + n2) / 2; 
        printf("\nMedia dos dois numeros = %.2f\n", media); 
        break;
    case 2: 
        if (n1 > n2){
            diferenca = n1 - n2;
        }
        else{
            diferenca = n2 - n1; 
        }
        printf("\nDiferenca do maior pelo menor = %.2f\n", diferenca);
        break;
    case 3: 
        produto = n1 * n2; 
        printf("\nProdutos entre os numeros digitados = %.2f\n", produto); 
        break; 
    case 4: 
        if (n1 > 0){
            divisao = n1 / n2; 
        }
        else if (n1 <= 0){
            printf("\nNao existe divisao por zero.\n");
        }
        printf("\nDivisao do primeiro pelo segundo = %.2f\n", divisao); 
    
    default:
        printf("\nOpcao Invalida.\n"); 
        break;
    }

    return 0; 

}