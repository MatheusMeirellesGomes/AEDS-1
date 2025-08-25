//Receber um valor de x, e imprimir y.
int main()
{
    //Inicializar Variáveis.
    float x, y;

    //Receber valor de X.
    printf("X = ");
    scanf("%f", &x);

    //Imprimir valor de y.
    y = pow(x,2); //Pode ser qualquer jeito, enunciado não especificou.

    printf("Y = %.2f", y);

    return 0;
}
