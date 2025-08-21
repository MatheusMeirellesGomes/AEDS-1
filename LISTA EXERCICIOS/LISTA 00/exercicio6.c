//Ler a razão e o primeiro termo de uma PA e mostrar o seu decimo termo.
//A fórmula de uma PA é: an​=a1​+(n−1)⋅r; Como é o 10º termo, então n = 10. a10​=a1​+9⋅r; 
int main()
{
    //Inicializar variáveis.
    int a1, razao, a10; 

    //Receber informações: 
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);
    
    printf("Digite o primeiro termo: "); 
    scanf("%d", &a1);  

    //Calcular Progressão e mostrar o décimo termo.
    a10 = a1 + (10 - 1) * razao; //O cálculo para achar o 10º termo é a soma do primeiro pela diferenã do N - 1 multiplicado pela razão; 

    //Imprimir resultado. 
    printf("Decimo Termo = %d", a10); 

    return 0; 
}