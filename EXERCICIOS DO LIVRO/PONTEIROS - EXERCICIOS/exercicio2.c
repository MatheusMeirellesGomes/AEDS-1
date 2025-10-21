#include <stdio.h>
#include <stdlib.h>
int soma(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    //Inicializar variáveis.
    int num1, num2;
    int *ptrn1 = &num1;
    int *ptrn2 = &num2;

    //Receber números.
    printf("Informe o primeiro numero: ");
    scanf("%d", ptrn1);

    printf("Informe o segundo numero: ");
    scanf("%d", ptrn2);

    //Acionar função.
    int result = soma(ptrn1, ptrn2); //Passando os endereços das variáveis.

    printf("\nSoma = %d\n", result); 

    //Verificar enderços e conteúdos das variáveis.
    printf("\nEndereco de Num1: %p\n", ptrn1);
    printf("Endereco de Num2: %p\n", ptrn2); //Usando sem ponteiro para mostrar o endereço. 

    printf("\nConteudo de Num1: %d\n", *ptrn1); //Usando o ponteiro para acessar o conteúdo. 
    printf("Conteudo de Num2: %d\n", *ptrn2);

    return 0;
}
