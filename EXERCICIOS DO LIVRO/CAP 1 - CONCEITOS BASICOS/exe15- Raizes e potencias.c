
//Receber um numero  positivo e maior do que zero, calcular e mostrar
//a) numero digitado ao quadrado.
//b) numero digitado ao cubo.
//c) a raiz quadrada do numero digitado.
//d) a raiz cúbica do numero digitado.
int main ()
{
    //Inicializar o programa com base no enunciado.
    float num, num_quad, num_cubo, raiz_quad, raiz_cubo;

    //Receber um numero
    printf("Digite um numero: ");
    scanf("%f", &num);

    //Calcular as potencias que pede no enunciado.
    num_quad = pow(num, 2);
    num_cubo = pow(num, 3);

    //Calcular as raizes que pede no enunciado
    raiz_quad = sqrt(num);
    raiz_cubo = pow(num, 1.0/3.0);

    //Imprimir os resultados
    printf("Potencia ao quadrado = %.2f", num_quad);
    printf("\nPotencia ao cubo = %.2f", num_cubo);
    printf("\nRaiz quadrada = %.2f", raiz_quad);
    printf("\nRaiz cubica = %.2f", raiz_cubo);


    return 0;
}
