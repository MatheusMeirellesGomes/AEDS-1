//Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n.
//O algoritmo deve escrever o valor final de S.
int main()
{
    //Inicializar Variáveis.
    int N; 
    float S = 0; 

    //Receber valor de N. 
    printf("Informe N: "); //Saber quantos fatoriais vai ter. 
    scanf("%d", &N); 

    //Calcular o fatorial de fora. 
    for (int cont = 1; cont <= N; cont++)
    {
        S += 1.0 / cont; 
    }

    //Imprimir fatorial. 
    printf("Fatorial de %d = %.2f", N, S); 
}