//Calcular a área de um círculo. Sabe-se que a área do círculo eh area = pi (3.1415) * raio ao quadrado.

int main ()
{
    //Inicializar o programa com os dados do enunciado.
    int area, raio;

    //Receber o valor do raio
    printf("Raio = ");
    scanf("%d", &raio);

    //Cálculo da área do círculo
    area = 3.1415 * raio * raio; // a outra opção seria incluir a biblioteca math.h e colocar 3.1415 * pow(raio,2).

    //Imprimir o valor da área depois do cálculo
    printf("Area do circulo = %d", area);

    return 0;
}