//Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa.
int main()
{
    //Inicializar variáveis.
    float cateto1, cateto2, hipotenusa;

    //Receber informações.
    printf("Valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Valor do segundo cateto: ");
    scanf("%f", &cateto2);

    //Calcular a hipotenusa.
    hipotenusa = sqrt((pow(cateto1,2)) + (pow(cateto2,2)));

    //Imprimir resultado.
    printf("Hipotenusa: %.2f", hipotenusa);

    return 0;
}
