//Usar o comando round() para fazer arredondamentos de numero decimal para inteiro. Ex: 37,2 = 37 ou 37,5 = 38.
//Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária.
//Com isto, espera aumentar sua taxa de ocupação de 50 para 80%.  Sendo dado o valor normal da diária, calcular e imprimir:
// 1- o valor da diária promocional; 2-  o valor total arrecadado com 80% de ocupação e diária promocional;
// 3- o valor total arrecadado com 50% de ocupação e diária normal; 4- a diferença entre estes dois valores.
int main()
{
    //Inicializar Variáveis
    float valor_diaria, desconto, valor_promocional, valor_oitenta, valor_cinquenta, diferenca_valor;
    int qntd_apto = 75, ocupados_oitenta, ocupados_cinquenta;

    //Receber valor da diária.
    printf("Valor da Diaria = R$ ");
    scanf("%f", &valor_diaria);

    //Calcular desconto e o valor promocional.
    desconto = valor_diaria * 0.25; //Achar o desconto, que é 25%.
    valor_promocional = valor_diaria - desconto; //Achar  o preço promocional da diária com o desconto abatido.

    //Calcular qntds de apartamento ocupados arrendondado.
    ocupados_oitenta = round(qntd_apto * 0.80); //Arrendodar para nao ter número quebrado.
    ocupados_cinquenta = round(qntd_apto * 0.50); //37,5 vai para 38 aptos.

    //Calcular Valores Totais.
    valor_oitenta = ocupados_oitenta * valor_promocional; //Saber o valor com 80% de ocupação do hotel, com o valor promocional.
    valor_cinquenta = ocupados_cinquenta * valor_diaria; //Saber o valor com 50% de ocupação do hotel, com o valor da diária.
    diferenca_valor = valor_oitenta - valor_cinquenta; //Saber a diferença basta subtrair as duas taxas.

    //Imprimir resultados.
    printf("\nValor promocional = R$ %.2f", valor_promocional);
    printf("\nValor com 80 ocupado = R$ %.2f", valor_oitenta);
    printf("\nValor com 50 ocupado = R$ %.2f", valor_cinquenta);
    printf("\nDiferenca entre os valores = R$ %.2f\n", diferenca_valor);

    return 0;

}
