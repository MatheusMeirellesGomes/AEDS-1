//Ler o raio de um círculo e mostrar o seu perímetro e área. Para o valor de pi, colocar M_PI.
int main()
{
    //Inicializar variáveis.
    float raio, perimetro, area;

    //Receber informações necessárias.
    //printf("Digite o raio: ");
    scanf("%f", &raio);

    //Calcular o que se pede.
    perimetro = 2 * M_PI * raio;
    area = M_PI * (pow(raio,2));

    //Imprimir resultados.
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f", area);

    return 0;
}
