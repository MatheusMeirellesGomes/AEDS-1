//Faça um programa que imprima os L primeiros elementos da série de Fibonacci.
//Por exemplo, se o usuário digitou o número 40, deverão ser apresentados os 40 números da sequência na tela.
//1º 2º 3º 4º 5º 6º 7º 8º
//0  1  1  2  3  5  8  13
int main()
{
    //Inicializar Variáveis.
    int L, ant1 = 1, ant2 = 0, atual;  //anti1 = Um número atrás do número atual. anti2 = Dois números atrás do número atual.

    //Receba valor de L. 
    printf("Digite quantos elementos tera a serie de Fibonacci: "); //Quantidade de números da tabela fibonacci. 
    scanf("%d", &L); 

    printf("Serie de Fibonacci: \n"); 

    //Usar repetição para ir até L. 
    for (int i = 0; i < L; i++) //Vai de zero até ao número de vezes que o usuário colocar.
    {
        printf("%d ", ant2); //Começa com zero, deixando espaço depois do %d para melhor visualização.
        atual = ant2 + ant1; //O atual é a soma do elemento anterior mais dois elementos anteriores ao atual. 
        ant2 = ant1;  //Atualiza os valores para o ant2 virar o ant1. 
        ant1 = atual; //Atualiza os valores pro ant1 virar o atual. 
    }
    printf("\n");    
}