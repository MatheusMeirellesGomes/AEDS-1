//Receba dois numeros, calcule e mostre a subtração do primeiro pelo segundo
int main()
{
    //Inicializar com dados do enunciado 
    int n1, n2, resultado; 
    
    //Receber o primeiro número
    printf("Digite o primeiro numero: "); 
    scanf("%d", &n1);
    
    //Receber o segundo número
    printf("Digite o segundo numero: "); 
    scanf("%d", &n2); 
    
    //Calcular a subtração
    resultado = n1 - n2; 
    
    //Imprimir resultado 
    printf("Resultado = %d", resultado);
    
    return 0;
     
}