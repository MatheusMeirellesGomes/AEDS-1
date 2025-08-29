//Fazer um programa leia uma sequência de N valores inteiros fornecida pelo usuário em uma linha de entrada e conte o número de valores positivos, negativos e zeros.
//Considere N fornecido pelo teclado e os números podem ser maiores do que o limite estabelecido pelo tipo ’int’,
//sendo sugerido o uso de ’long int’ e especificador ’ld’.
int main()
{
    //Inicializar Variáveis.
    int N, positivo = 0, negativo = 0, zero = 0;
    long int num; 

    //Receber quantidade que vai ser colocado os números, N.
    printf("Digite quantos numeros serao inseridos: ");
    scanf("%d", &N);

    //Verificar qual é positivo, negativo e zero, com repetição.
    for (int cont = 1; cont <= N; cont++)
    {
        printf("Digite um numero: ");
        scanf("%ld", &num);

        if (num > 0)
        {
            positivo++; //Incrementa o contador de positivos, para ir contando quantos positivos tem. 
        }
        else if (num < 0)
        {
            negativo++; //Incrementa o contador de negativos, para ir contando quantos negativos tem.
        }
        else
        {
            zero++; //Incrementa o contador de zero, para ir contando quantos zeros tem. 
        }
    }

    //Imprimir quantos positivos, negativos e zeros tem.
    printf("\nQuantidade de Positivos: %d\n", positivo);
    printf("Quantidade de Negativos: %d\n", negativo);
    printf("Quantidade de Zeros: %d\n", zero);

    return 0;
}
