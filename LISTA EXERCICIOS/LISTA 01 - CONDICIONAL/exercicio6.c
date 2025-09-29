//Faça um programa para ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a raiz da equação.
int main()
{
    //Inicializar Variáveis.
    float a, b, x;

    //Receber valores.
    printf("Valor de a = ");
    scanf("%f", &a);

    printf("Valor de b = ");
    scanf("%f", &b);

    //Calcular e mostrar o valor de x.
    if (a != 0)
    {
        x = -b/a;
        printf("X = %.2f", x);
    }
    else
    {
        printf("Nao existe raiz.\n");
    }

    return 0;

}
