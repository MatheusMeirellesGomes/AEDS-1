//Receba 4 valores para I, A, B, C. Sendo I inteiro e positivo, e A, B, C números reais. 
//Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2, 3, e que os números 
//digitados sejam diferentes um do outro. 
//TABELA = 1: A, B E C ORDEM CRESCENTE;  2: A, B E C EM ORDEM DECRESCENTE;  3: O MAIOR FICA ENTRE OS OUTROS DOIS NÚMEROS. 
int main()
{
    //Inicializar variáveis. 
    int I; 
    float A, B, C; 

    //Receber os valores necessários. 
    printf("Digite valor de I (Inteiro): "); 
    scanf("%d", &I); 
    printf("Digite valor de A (Real): ");
    scanf("%f", &A); 
    printf("Digite valor de B (Real): ");
    scanf("%f", &B); 
    printf("Digite valor de C (Real): "); 
    scanf("%f", &C); 

    //Verificar caso seja a 1º opção da tabela. A ordem crescente é o sinal de menor.  
    if (I == 1)
    {
        if (A < B && A < C){
            if (B < C){
                printf("A ordem crescente = %.2f, %.2f, %.2f", A, B, C); 
            }
            else{
                printf("A ordem crescente = %.2f, %.2f, %.2f", A, C, B); 
            }
        }
        else if (B < A && B < C)
        {
            if (A < C){
                printf("A ordem crescente = %.2f, %.2f, %.2f", B, A, C);
            }
            else{
                printf("A ordem crescente = %.2f, %.2f, %.2f", B, C, A);
            }
        }
        else if (C < A && C < B)
        {
            if (A < B){
                printf("A ordem crescente = %.2f, %.2f, %.2f", C, A, B);
            }
            else{
                printf("A ordem crescente = %.2f, %.2f, %.2f", C, B, A); 
            }
        }
    }
        
        //Verificar caso seja a 2º opção da tabela. Ordem Decrescente é só inverter o sinal da ordem crescente. 
    if (I == 2)
    {
        if (A > B && A > C){
            if (B > C){
             printf("A ordem decrescente = %.2f, %.2f, %.2f", A, B, C); 
            }
            else{
            printf("A ordem decrescente = %.2f, %.2f, %.2f", A, C, B); 
            }
        }
        else if (B > A && B > C)
        {
            if (A > C){
            printf("A ordem decrescente = %.2f, %.2f, %.2f", B, A, C);
            }
            else{
            printf("A ordem decrescente = %.2f, %.2f, %.2f", B, C, A);
            }
        }
        else if (C > A && C > B)
        {
            if (A > B){
                printf("A ordem decrescente = %.2f, %.2f, %.2f", C, A, B);
            }
            else{
                printf("A ordem decrescente = %.2f, %.2f, %.2f", C, B, A); 
            }
        }
    }

    //Verificar caso seja o 3º número da tabela. O maior fica entre os outros dois números. 
    
    if (I == 3)
    {
        if (A > B && A > C)
        {
            printf("A ordem desejada =%.2f, %.2f, %.2f", B,  A, C); 
        }
        else if (B > A && B > C)
        {
            printf("A ordem desejada =%.2f, %.2f, %.2f", A,  B, C); 
        }   
        else if (C > A && C > B)
        {
            printf("A ordem desejada =%.2f, %.2f, %.2f", A,  C, B);
        }

    }
    return 0; 
        
    
            
}