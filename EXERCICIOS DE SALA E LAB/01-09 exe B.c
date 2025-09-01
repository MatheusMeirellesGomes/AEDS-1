//Exercício B para melhor entendimento do exercicío 5 do capítulo 5, estrutura de repetição. 
// S = -x² + x³ - x^4 ...
int main()
{
    //Inicializar Variáveis.
    int expo = 2, N; //Mesma lógica do exercício A. 
    float x, s = 0; //Mesma lógica. 

    //Receber informações. 
    printf("Digite quantas parcelas: "); 
    scanf("%d", &N); 

    printf("Digite valor de x: "); 
    scanf("%d", &x); 

    //Verificar de acordo com a parcela e fazer a conta. 
    for (int parcela = 1; parcela <= N; parcela++)
    {
        if (parcela % 2 == 1) //Se o resto da divisão da parcela por 2, for 1.
        {
            s = s - pow(x,expo); //Mudar o sinal.
        }
        else 
        {
            s += pow(x,expo); 
        }
    }

    //Imprimir resultado.
    printf("S = %.2f\n", s); 

    return 0; 
}