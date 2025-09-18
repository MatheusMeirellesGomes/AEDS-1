#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Receba e leia um Número N que indica quantos valores inteiros e positivos devem ser lidos, mostre uma tabela contendo o valor lido e o fatorial do valor lido.
//Estrutura de Repetição.
//Quando se tratar de fatorial, sempre tem que ter uma variável para armazenar o fatorial, que começa com 1 e um laço interno para calcular o fatorial.
int main()
{
    //Inicializar Variáveis.
    int N, num, i, cont; //N = Qntd de números a serem lidos, num = número lido, i = contador do laço interno, cont = contador do laço externo.
    float fatorial; //Fatorial do número lido.

    //Receber valor de N.
    printf("Digite um valor inteiro e positivo para N: ");// N vai indicar quantos vezes deverão ser lidos e calculados. 
    scanf("%d", &N);

    //Ler N números e calcular o fatorial de cada número.
    printf("Numero - Fatorial\n"); //Cabeçalho da tabela.

    for (cont = 1; cont <= N; cont++)
    {
        //Receber o número.
        printf("\nDigite um numero: ");//Numero que deverá ser calculado. 
        scanf("%d", &num);

        //Calcular o fatorial do numero lido.
        fatorial = 1; //Fatorial começa com 1, pois o fatorial de 0 é 1 e o fatorial de 1 também é 1.

        //Calcular o fatorial de num.
        for(i = 1; i <= num; i++)//Laço interno que calcula o fatorial de num.
        {
            fatorial *= i; //Fatorial é multiplicado por i a cada iteração do laço interno.
        }

        //Exibir o número e o fatorial.
        printf("Numero: %d - Fatorial: %.2f\n", num, fatorial); //Printff tem que ser dentro do for, para exibir o número cada vez que for lido e o fatorial calculado.
    }

    return 0;
}
