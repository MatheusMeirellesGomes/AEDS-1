//Calcular a área de um triângulo. Sabe-se que a área eh de area =  base * altura / 2.

int main ()
{
    //incicizalizar as informações com base no enunciado.
    int base, altura, area;

    //Receber os valores da base.
    printf("Valor da base = ");
    scanf("%d", &base);

    //Receber os valores da altura.
    printf("Valor da altura = ");
    scanf("%d", &altura);

    //Calcular a área do triângulo.
    area = base * altura / 2;

    //imprimir o valor da area
    printf("Area = %d", area);

    return 0;
}