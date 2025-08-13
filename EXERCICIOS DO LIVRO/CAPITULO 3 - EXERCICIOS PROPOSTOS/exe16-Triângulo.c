//Receber o valor dos catetos de um triângulo, calcular e mostrar
//o valor da hipotenusa (use a fórmula: hipotenusa = √(cateto1² + cateto2²)).
int main()
{
    //Inicializar com dados do enunciado.
    int cateto1, cateto2, hipotenusa;

    //Receber os catetos.
    printf("Valor do cateto1 = ");
    scanf("%d", &cateto1);
    printf("Valor do cateto2 = ");
    scanf("%d", &cateto2);

    //Calcular para achar a hipotenusa.
    hipotenusa = sqrt( pow(cateto1,2) + pow(cateto2,2));//Hipo é a raiz quadrada da soma dos catetos ao quadrado. 
    //pow(base, expoente) eleva a base ao expoente. sqrt(valor) calcula a raiz quadrada do valor.

    //Imprimir valor da hipotenusa.
    printf("Hipotenusa = %d", hipotenusa);

    return 0;

}
