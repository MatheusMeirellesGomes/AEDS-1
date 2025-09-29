//Ler o numerador e o denominador de uma fração e transformá-la em um número decimal.
int main()
{
    //Inicializar variavéis. 
    float numerador, denominador, num_decimal;

    //Receber numerador e denominador. 
    printf("Numerador = "); 
    scanf("%f", &numerador); 

    printf("Denominador = "); 
    scanf("%f", &denominador); 

    //Transformar em número decimal. 
    num_decimal = numerador / denominador //Transformar em numero decimal, basta dividir o numerador pela denominador. 

    //Imprimir resultado. 
    printf("Fracao em numero decimal = %.2f", num_decimal); 

    return 0; 
}