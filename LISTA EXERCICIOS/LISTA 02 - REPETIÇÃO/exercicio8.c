//Faça um programa que imprima todos os elementos da série de Fibonacci menores que L
int main()
{
    //Inicializar Variáveis.
    int L, ant1 = 1, ant2 = 0, atual; 

    //Receber valor de L.
    printf("Informe o numero final: "); 
    scanf("%d", &L); 

    //Imprimir apenas os números menores que L. 
    while (ant2 < L) //So vái imprimir os números que forem menor que L.
    {
        printf("%d ", ant2); //Espaço para ficar mais organizado. 
        atual = ant1 + ant2; //o atual é a soma do ant1 com ant2. 
        ant2 = ant1; //ant 2 passa a ser o ant1. 
        ant1 = atual; //ant1 passa a ser o número atual. 
    }
    printf("\n"); 

    return 0; 
}