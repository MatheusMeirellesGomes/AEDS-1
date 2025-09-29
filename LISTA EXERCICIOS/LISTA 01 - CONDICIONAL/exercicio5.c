//Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária.
//Com isto, espera aumentar sua taxa de ocupação de 50 para 80%.  Sendo dado o valor normal da diária, calcular e imprimir:
// 1- o valor da diária promocional; 2-  o valor total arrecadado com 80% de ocupação e diária promocional;
// 3- o valor total arrecadado com 50% de ocupação e diária normal; 4- a diferença entre estes dois valores.
int main()
{
    //Inicializar Variáveis
    float qntd_apto = 75, valor_diaria, desconto, valor_promocional, valor_oitenta, valor_cinquenta, diferenca_valor;

    //Receber valor da diária.
    printf("Valor da Diaria = R$ ");
    scanf("%f", &valor_diaria);

    //Calcular o que se pede.
    desconto = valor_diaria * 0.25; //Primeiro achar o desconto, que é 25%.
    valor_promocional = valor_diaria - desconto; //Segundo achar  o preço promocional da diária com o desconto abatido.
    //Para saber o valor com 80% de ocupação, esta pedindo para multiplicar pelo valor promocional.
    valor_oitenta = (qntd_apto * 0.80) * valor_promocional; //Terceiro saber o valor com 80% de ocupação do hotel.
    //Para saber o valor com 50% de ocupação, está pedindo para multiplicar pelo valor da diária.
    valor_cinquenta = (qntd_apto * 0.50) * valor_diaria; //Quarto saber o valor com 50% de ocupação do hotel.
    diferenca_valor = valor_oitenta - valor_cinquenta; //Saber a diferença basta subtrair as duas taxas.

    //Imprimir resultados.
    printf("\nValor promocional = R$ %.2f", valor_promocional);
    printf("\nValor com 80 ocupado = R$ %.2f", valor_oitenta);
    printf("\nValor com 50 ocupado = R$ %.2f", valor_cinquenta);
    printf("\nDiferenca entre os valores = R$ %.2f\n", diferenca_valor);

    return 0;

}
