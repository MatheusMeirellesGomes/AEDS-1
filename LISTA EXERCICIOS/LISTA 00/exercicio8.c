//Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque dos valores das duas variáveis de forma que a variável 
//A passe a ter o valor da variável B e vice-versa. No final, mostre os valores finais.
int main()
{
    //Inicializar Variáveis.
    float A, B, troca; 
    
    //Receber valores de A e B. 
    printf("Digite valor de A: "); 
    scanf("%d", &A); 

    printf("Digite valor de B: "); 
    scanf("%d", &B); 

    //Fazer a troca dos valores. 
    troca = A; //Guarda o valor de A que o usuário digitar. 
    A = B; // A vai receber o valor de B.
    troca = B; // B recebe o valor que estava em A. 

    //Imprimir troca de variáveis. 
    printf("Valores trocados: A = %.2f - B = %.2f", A, B); 

    return 0; 
}