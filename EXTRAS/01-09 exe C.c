//Parte C do exercício para melhor entendimento do problema.
// S = -x²/1! + x³/2! - x^4/3! + x^5/4! - x^6/5!. 
int main()
{
    //Inicializar Variáveis.
    int expo = 2, N, den = 1; //Mesma lógica do exercício A, denominador é igual a 1, porque ele está começando com um.
    float x, s = 0, fatorial = 1; //Mesma lógica, fatorial é igual a 1, porque também está começando com um.

    //Receber informações. 
    printf("Digite quantas parcelas: "); 
    scanf("%d", &N); 

    printf("Digite valor de x: "); 
    scanf("%d", &x); 

    //Verificar de acordo com a parcela e fazer a conta. 
    for (int parcela = 1; parcela <= N; parcela++)
    {
       fatorial = 1; 
       for (int val = den; val >= 2; val--)
       {
        fatorial *= val; 
       }
        if (parcela % 2 == 1) //Se o resto da divisão da parcela por 2, for 1.
        {
            s = s - pow(x,expo) / fatorial; //S vai ser o numerador elevado ao expoente dividido pelo fatorial. 
        }
        else 
        {
            s += pow(x,expo) / fatorial; //Messma lógica, porém positivo.  
        }
        expo++; 
        den++; 
    }

    //Imprimir resultado.
    printf("S = %.2f\n", s); 

    return 0; 
}