//O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro e de imposto
//aplicados ao preço de fábrica. Receba o preço de fábrica, o percentual de lucro, e o percentual de imposto,
//e calcule para mostrar:
//a) o valor correspondente ao lucro do distribuidor.
//b) O valor correspondente aos impostos.
//c) o preço final do veículo.

int main()
{
    //Inicializar com os dados do enunciado
    float preco_inicial, valor_lucro, valor_imposto, perc_lucro, perc_imposto, preco_final; // Adicionar a variável valor_lucro e imposto, para fazer o cálculo de acordo com o percentual e saber o valor total que vai dar de ambos

    //Receber os dados de preço de fábrica, percentual de lucro, percentual de imposto
    printf("Digite o valor inicial do carro: R$ ");
    scanf("%f",&preco_inicial);
    printf("Digite o percentual de lucro: ");
    scanf("%f", &perc_lucro);
    printf("Digite o percentual de imposto: ");
    scanf("%f", &perc_imposto);

    //Fazer o cálculo para achar o percentual de lucro, de imposto e o preço final do carro
    valor_lucro = preco_inicial * perc_lucro / 100; //Achar o valor em reais para saber o lucro.
    valor_imposto = preco_inicial * perc_imposto / 100; //Achar o valor em reais para saber o imposto.
    preco_final = preco_inicial + valor_lucro  + valor_imposto; //Saber o valor final do carro, somando com o valor do lucro e do imposto encontrado acima.

    //Imprimir os valores do lucro, imposto e o preço final.
    printf("Total de Lucro = R$ %.2f \nTotal de Imposto = R$ %.2f \nPreco final do carro = R$ %.2f", valor_lucro, valor_imposto, preco_final);


    return 0;

}
