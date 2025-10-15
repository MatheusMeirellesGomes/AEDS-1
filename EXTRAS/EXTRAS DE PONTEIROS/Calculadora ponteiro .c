//Fazer uma funcção para receber a operação e os números. 
char menu (int *val1, int *val2)
{
    //Inicializar Variáveis.
    char operacao; 

    printf("MENU DE OPERACOES:\n"); 

    //Mostrar as opções do menu.
    printf("+ : Soma\n"); 
    printf("* : Multiplicacao.\n");
    printf("/ : Divisao.\n"); 
    printf("- : Subtracao.\n");
    printf(". : Sair do programa.\n");

    //Escolher a operação. 
    printf("\nEscolha a operacao: "); 
    scanf(" %c", &operacao); 

    //Verificar operação e informar os números. 
    if (operacao != '.'){
        printf("\nInforme o primeiro numero: "); 
        scanf("%d", val1);  //Como val1 é ponteiro, não precisa do &, porque já é um endereço, e precisamos apenas do conteúdo que está nesse endereço. 

        printf("Informe o segundo numero: "); 
        scanf("%d", val2); 
    }
    
    //Retornar a operação escolhida.
    return operacao;
}

//Fazer um procedimento com parâmetros para calcular a operação escolhida.
void calculaOperaco (int num1, char simbolo, int num2) //Usar parâmetros, porque os valores vão ser passados pela função menu.
{
    //Inicializar Variável para o resultado.
    float resultado; 

    //Verificar a operação escolhida e fazer o cálculo. 
    switch (simbolo)
    {
    case '+':
        resultado = num1 + num2;
        printf("\nResultado: %.2f\n", resultado);
        break;

    case '-':
        resultado = num1 - num2; 
        printf("\nResultado: %.2f\n", resultado);
        break;

    case '*': 
        resultado = num1 * num2; 
        printf("\nResultado: %.2f\n", resultado);
        break;

    case '/': 
        if (num2 != 0){
            resultado = (float)num1 / num2; 
            printf("\nResultado: %.2f\n", resultado);
        }
        else {
            printf("\nERRO! Nao e possivel dividir por zero.\n");
        }
        break;
    
    default: 
        printf("\nOperacao Invalida!\n");
        break;
    }
}

int main()
{
    //Incializar Variáveis. 
    int n1, n2; 
    char op; 

    //Acionar a função do menu.
    op = menu(&n1, &n2); 

    //Verificar se o usuário vai escolher a operação ou sair do programa.
    while (op != '.'){

        //ACionar o procedimento para calcular a operação escolhida. 
        calculaOperaco(n1, op, n2); 

        //Acionar a função do menu novamente até que a opção de sair seja escolhida. 
        op = menu(&n1, &n2); 
    }

    return 0;
}