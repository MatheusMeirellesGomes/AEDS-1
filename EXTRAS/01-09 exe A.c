//Letra A do execício 5 do capítulo 5, estrutura de repetição. Foi feito em partes para melhor entendimento do problema. 
//s = x² + x³ + x^4. 
int main()
{
    //Inicializar Variáveis. 
    int expo = 2, N; //Expoente começa com 2. N é a quantidade de parcelas que vão ter no problema. 
    float x, s = 0; //X é o valo que vai ser substituiído pelo número. s começa com zero pra não dar lixo na memória. 

    //Receber informações. 
    printf("Digite quantas parcelas: "); 
    scanf("%d", &N); 

    printf("Digite valor de x: "); 
    scanf("%d", &x); 

    //Verificar de acordo com a parcela e fazer a conta. 
    for (int parcela = 1; parcela <= N; parcela++)
    {
        s += pow(x,expo); 
        expo++; 
    }
    
    //Imprimir resultado. 
    printf("S = %.2f\n", S);

    return 0; 
    
}