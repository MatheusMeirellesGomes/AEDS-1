#include <stdio.h>
#include <stdlib.h>
int mdc(int a, int b)
{
    if (b == 0){
        return a; //Se o segundo número for zero, o  maior divisidor será o primeiro número.
    }
    else {
        return mdc(b, a % b); //Se b não for zero, vai retornar o B e o resto da divisão de a por b, até chegar no caso base.
    }
}
int main()
{
    //Inicializar Variáveis.
    int n1, n2;

    //Receber números.
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    //Imprimir resultado acionando a função.
    printf("\nMaximo Divisor Comum de %d e %d = %d\n", n1, n2, mdc(n1, n2));

    return 0;
}