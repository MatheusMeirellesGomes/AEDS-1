//Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula abaixo. 
//S = 1 + 11! + 12! + 13! + ... + 1N! Faça um programa que leia N e imprima o valor retornado pela função.
float fatorial(int N)
{
    //Inicializar fatorial igual a 1. 
    float fat = 1; //Fatorial começa com 1. 
    for(int cont = 2; cont <= N; cont++) //Fatorial vai de 2 até N. 
    {
        fat *= cont; //Fatorial = fatorial * contador. 
    }
    return fat; //Retorna oo resultado de fatorial.
}
float calcula(int num)
{
    //Inicializar Variáveis. 
    float S = 1.0; //Começa com 1. 
    for (int i = 1; i <= num; i++)
    {
        //Calcular Valor de S. 
        S += 1.0 / fatorial(i); //Soma 1/i! a cada passo. 
    }
    return S; //Retorna S. 
}
int main()
{
    //Inicializar Variáveis. 
    int N; 

    //Receber valor inteiro e positivo. 
    printf("Informe um numero: "); 
    scanf("%d", &N); 

    //Acionar função. 
    printf("\nS = %.2f", calcula(N));
}