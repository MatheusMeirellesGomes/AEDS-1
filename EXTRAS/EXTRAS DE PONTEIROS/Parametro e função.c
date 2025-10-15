#include <stdio.h>
#include <stdlib.h>
int soma (int *a, int *b)
{
    int soma;

    soma = *a + *b;

    printf("\nSoma = %d\n", soma);
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

    //Acionar procedimento passando endereços já que se trata de ponteiros.
    soma(&num1, &num2);

    return 0;
}
