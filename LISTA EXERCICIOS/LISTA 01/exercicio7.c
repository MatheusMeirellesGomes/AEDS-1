//Faça um programa para calcular e imprimir o valor de Y, dado um valor de X:
//y = f(x) = 1, se x <= 1; 2, se 1 < x <= 2; X², se 2 < x <= 3; X³, se x > 3
int main()
{
    //Inicializar Variáveis.
    float x, y;

    //Receber valor de X.
    printf("Informe valor de X: ");
    scanf("%f", &x);

    //Verificar e imprimir Y de acordo com a tabela.
    if (x <= 1)
    {
        y = 1;
        printf("y = %.2f", y);
    }
    else if (x > 1 && x <= 2)
    {
        y = 2;
        printf("Y = %.2f", y);
    }
    else if (x > 2 && x <= 3)
    {
        y = pow(x,2);
        printf("Y = %.2f", y);
    }
    else if (x > 3)
    {
        y = pow(x,3);
        printf("Y = %.2f", y);
    }
    else
    {
        printf("Numero Invalido.");
    }

    return 0;
}
