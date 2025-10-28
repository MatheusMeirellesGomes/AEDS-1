#include <stdio.h>
#include <stdlib.h>
int soma(int a, int b)
{
    return a + b;
}
int main()
{
    //Inicializar Variáveis.
    int num1, num2;

    //Receber números.
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    //Acionar função.
    int result = soma(num1, num2);

    printf("\nSoma = %d\n", result);

    return 0;
}