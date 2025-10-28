//Receba um número inteiro e verificar se ele é par ou ímpar. 
int main()
{
    //Inicializar variáveis. 
    int num, resto; //Colocar o resto da divisão. 

    //Receber o número. 
    printf("Digite um numero: "); 
    scanf("%d", &num); 

    //Fazer a divisão para ver se é par ou ímpar.
    resto = (num / 2); 

    //Verificar se é par ou ímpar. 
    if ( resto == 0 )
    {
        printf("O número é par.\n"); 
    }
    else
    {
        printf("O numero e impar.");
    }

    return 0; 

}