#include <stdio.h>
#include <stdlib.h>
int soma(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    //Inicializar Variáveis.
    int num1, num2;
    int *ptrnum1 = &num1;
    int *ptrnum2 = &num2;

    //Receber números.
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2)

    //Acionar função.
    int result = soma(&num1, &num2);

    printf("\nSoma = %d\n", result);

    //Verificar enderços e conteúdos das variáveis.
    printf("\nEndereco de Num1: %p\n", &num1);
    printf("Endereco de Num2: %p\n", &num2);

    printf("\nConteudo de Num1: %d\n", *ptrnum1);
    printf("Conteudo de Num2: %d\n", *ptrnum2);

    return 0;
}
