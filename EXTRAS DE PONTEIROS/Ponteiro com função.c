#include <stdio.h>
#include <stdlib.h>
int soma (int *a, int *b)
{
    return *a + *b;
}

int main()
{
    //Inicializar Variáveis.
    int num1, num2;
    int *ptrNum1 = &num1;
    int *ptrNum2= &num2;

    //Receber números.
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("\nEndereco de num = %p\n", &num1);
    printf("\nEndereco de num2 = %p\n", &num2);
    printf("\nConteudo de num1 = %d\n", *ptrNum1);
    printf("\nConteudo de de num2 = %d\n", *ptrNum2);

    //Acionar módulo.
    int result = soma(&num1, &num2);

    printf("\nSoma = %d\n", result);

    return 0;
}