//Ler idade, valor total, sexo (M / F) de N clientes, sendo N informado.
//1- Calcular e exibir média de comprar da loja clientes com menos de 25 anos.
//2- Identificar e exibir a idade e exibir a idade e o sexo da pessoa cuja valor da compra foi o mais alto.
int main()
{
    //Inicializar Variáveis.
    int idade, N, idade25 = 0, somaidade = 0;
    float media_compra, valor_total = 0, maior_valor = 0;
    char sexo;

    //Receber quantos dados serão recebidos.
    printf("Informe quantos dados serao recebidos: ");
    scanf("%d", &N);

    //Usar repetição para montar.
    for (int cont = 1; cont <= N; cont++)
    {
        //Receber informações necessários.
        printf("\nIdade: ");
        scanf("%d", &idade);

        printf("Valor total da compra: ");
        scanf("%f", &valor_total);

        printf("Sexo [M / F]: ");
        scanf(" %c", &sexo);

        //Calcular a média de idade de clientes com menos de 25 anos.
        if (idade < 25){
            idade25++;
            somaidade += idade;
        }

        //Identificar e exibir a idade e o sexo da pessoa cuja valor da compra foi o mais alto.
        if (valor_total == 1){
            maior_valor = valor_total;
        }
        else if (valor_total > maior_valor){
            maior_valor = valor_total;
        }
    }

    //Calcular média.
    media_compra = somaidade / idade25;

    //Imprimir resultados.
    printf("\nMedia de clientes com menos de 25 anos: %.2f\n", media_compra);
    printf("\nIdade: %d - Sexo: %c - Maior Compra: %.2f\n", idade, sexo, maior_valor);

    return 0;

}
