//Faça um algoritmo que leia 2 números inteiros e faça sua adição. Se o resultado for maior ou igual a 10, some 5 a este número. 
//Caso contrário some 7 a ele. Imprima o resultado final.
int main()
{
    //Inicializar variáveis.
    int num1, num2, soma, num_novo; 

    //Receber os números. 
    printf("Informe o primeiro numero: "); 
    scanf("%d", &num1); 

    printf("Informe o segundo numero: "); 
    scanf("%d", &num2); 

    //Fazer o cálculo da soma. 
    soma = num1 + num2; 

    //Verificar se é maior ou menor que 10. 
    if (soma >= 10)
    {
        num_novo = soma + 5; 
        printf("Numero novo = %d", num_novo); 
    }
    else if (soma < 10)
    {
        num_novo = soma + 7; 
        printf("Numero novo = %d", num_novo);
    }

    return 0; 

}