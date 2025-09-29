int soma(int n)
{
    //Indicar caso base. 
    if (n == 1){
        return 1; 
    }
    else {
        return n + soma(n - 1); 
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