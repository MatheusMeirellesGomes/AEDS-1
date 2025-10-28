//Receber a temperatura em Celsius, calcular e mostrar essa temperatura em Fahrenheit.
//Sabe-se que temp_fahre = (temp_celsius * 1.8) + 32;
int main()
{
    //Inicializar com dados do enunciado.
    int temp_celsius;
    float temp_fahre;

    //Receber a temperatura em graus Celsius.
    printf("Digite a temperatura de hoje em C: ");
    scanf("%d", &temp_celsius);

    //Converter para fahrenheit.
    temp_fahre = (temp_celsius * 1.8) + 32;//Formula correta para achar a temp em fahrenheit.

    //Imprimir temperatura em fahrenheit.
    printf("Temperatura convertida em F: %.2f graus fahrenheit", temp_fahre);

    return 0;

}
