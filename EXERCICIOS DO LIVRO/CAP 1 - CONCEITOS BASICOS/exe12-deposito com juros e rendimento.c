//Receber o valor de um depósito e o valor da taxa de juros, calcular
// e mostrar o valor do rendimento e o valor total depois do rendimento

int main()
{
    //inicializar o programa colocando os dados de acordo com o enunciado.
    float deposito, taxa, rendimento, total;

    //Receber os dados do depósito
    printf("Valor do deposito: R$ ");
    scanf("%f", &deposito);

    //Receber o valor total da taxa em porcentagem
    printf("Total da taxa de juros: ", &taxa);
    scanf("%f", &taxa);

    //calcular o valor do redimento e saber o total após o cálculo.
    rendimento = deposito * taxa/100; // esse é o cálculo para saber qual foi o rendimento.
    total = deposito + rendimento;

    //Imprimir o valor do rendimento e o valor total do depósito depois de todos os ajustes
    printf("O rendimento foi de: R$ %.2f", rendimento);
    printf("\nO total depois de rendimento  eh de: R$ %.2f", total);


    return 0;
}