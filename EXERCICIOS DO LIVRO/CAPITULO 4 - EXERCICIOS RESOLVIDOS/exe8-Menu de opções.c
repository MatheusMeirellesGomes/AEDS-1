//Mostre o menu de opções, receba a opção do usuário e os dados necessários para executar cada opreção. 
// Menu de Opções:
// 1 - Somar dois Números.
// 2 - Raiz Quadrada de um número.
int main()
{
    //Inicializar variáveis.
    int num1, num2, soma, opcao;
    float raiz; //Raiz como float, porque pode ser um número real. 
    
    //Receber as informações Necessárias. 
    printf("\nMENU: \n1- Somar dois numeros. \n2- Raiz Quadrada de um numero\n"); //Informar o menu do enunciado. 
    printf("\nInforme a opcao desejada: ");
    scanf("%d", &opcao);

    //Verificar de acordo com a opção escolhida. 
    if (opcao == 1) //Se for a 1º opção escolhida:
    {
        //Primeiro Receber os números e depois realizar a soma deles, conforme solicitado. 
        printf("Informe o primeiro numero: ");
        scanf("%d", &num1);
        printf("Informe o segundo numero: ");
        scanf("%d", &num2);

        soma = num1 + num2;
        
        //Imprimir resultado da soma.
        printf("Resultado = %d", soma);
    }
    else if (opcao == 2)//Caso seja a 2º opção escolhida:
    {
        //Como é raiz quadrada, receber apenas um número e realizar a raiz.
        printf("Informe um numero: ");
        scanf("%d", &num1);
    
        raiz = sqrt(num1);
        
        //Imprimir resultado da raiz. 
        printf("Resultado = %.2f", raiz);
    }
    else //Caso seja informado uma opçâo inválida, que nao exista, imprimir frase: 
    {
        printf("Opcao invalida.");
    }

    return 0;
}
