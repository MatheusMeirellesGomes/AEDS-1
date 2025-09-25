#include <stdio.h>
#include <stdlib.h>
//Fazer um função recursiva para calcular o fatorial de um número inteiro positivo.
int fatorial(int N)
{
    //Como é função recursiva ela deve retornar a um caso base.
    if (N == 0 || N == 1){ //Isso é o caso base.
        return 1; //Se N for 0 ou 1, retorna 1 porque o fatorial de 0 e 1 é 1.
    }
    else {
        return N * fatorial(N-1);
    }
}
//Acionar a função na main.
int main()
{
    //Inicializar Variáveis.
    int num;

    //Receber Número.
    printf("Informe um numero inteiro e positivo: ");
    scanf("%d", &num);

    //Acionar a função imprimindo o resultado.
    printf("\nFatorial de %d = %d\n", num, fatorial(num));

    return 0;
}
