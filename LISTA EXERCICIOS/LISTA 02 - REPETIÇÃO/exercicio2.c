//Adaptar o programa anterior para que ele calcule o percentual dos valores positivos, negativos e zeros
//em relação ao total de valores fornecidos. Considere o uso do tipo ’long int’ e especificador ’ld’.
int main()
{
    //Inicializar Variáveis.
    int N, positivo = 0, negativo = 0, zero = 0, percentual = 0; //Inicializar o percentual com 0, para não ter lixo na memória. 
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
            positivo++; //Incrementa o contador de positivo.
        }
        else if (num < 0)
        {
            negativo++; //Incrementa o contador de negativo.
        }
        else
        {
            zero++; //Incrementa o contador de zero.
        }
    }

    //Calcular os percentuais.
     percentual = positivo * 100 / N; //Pega o numero positivo, multiplica por 100 para transformar em porcentagem e divide pelo total de números, N.
     percentual = negativo * 100 / N; //Faz o mesmo que o positvo, porém com o negativo. 
     percentual = zero * 100 / N; //Mesma lógica dos demais. 

    //Imprimir quantos positivos, negativos e zeros tem.
    printf("%d%% POSITIVOS\n", percentual);
    printf("%d%% NEGATIVOS\n", percentual);
    printf("%d%% ZEROS\n", percentual);

    return 0;
}
