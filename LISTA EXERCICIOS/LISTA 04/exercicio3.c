int soma(int n)
{
    //Inicialzar Variáveis. 
    int resposta;
    //Indicar caso base. 
    if (n == 1){
        return 1; 
    }
    else {
        for (int cont = 1; cont <= n; cont++)
        {
             resposta += cont; 
        }
        return resposta; 
    }
}
int main()
{
    //Inicializar Variáveis.
    int num; 

    //Receber até qual número ele vai somar. 
    printf("Informe ate onde vai somar: "); 
    scanf("%d", &num); 

    //Imprimir resultado acionando a recursão. 
    printf("\nNumero: %d - Resultado da soma: %d\n", num, soma(num)); 

    return 0;
}