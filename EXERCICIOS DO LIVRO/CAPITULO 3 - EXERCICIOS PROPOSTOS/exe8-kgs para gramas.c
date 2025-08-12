//Receber o peso de uma pessoa em Kg's, calcular e mostrar o peso em gramas.
int main()
{
    //Inicializar o programa com dados do enunciado.
    int peso_inicial, peso_gramas;

    //Receber o pessoa da pesso em Kgs.
    printf("Informe seu peso: ");
    scanf("%d", &peso_inicial);

    //Converter para peso_gramas
    peso_gramas = peso_inicial * 1000; //Multiplicar por 1000. 1kg = 1000 gramas. 

    //Imprimir a conversão do peso.
    printf("Seu peso em gramas = %d gramas", peso_gramas);

    return 0;

}
