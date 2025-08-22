//Dado dois números imprimir somente o maior deles.
int main()
{
    //Inicializar variáveis.
    int num1, num2; 

    //Receber Números. 
    printf("Informe o primeiro numero: "); 
    scanf("%d", &num1); 

    printf("Informe o segundo numero: "); 
    scanf("%d", &num2); 

    //Verificar qual é maior. 
    if (num1 > num2)
    {
        printf("Numero maior = %d", num1); 
    }
    else if (num2 > num1)
    {
        printf("Numero maior = %d", num2); 
    }
    else 
    {
        printf("Numeros sao Iguais"); 
    }

    return 0;
}