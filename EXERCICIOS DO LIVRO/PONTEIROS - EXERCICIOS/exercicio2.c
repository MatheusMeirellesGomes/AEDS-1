#include <stdio.h>
#include <stdlib.h>
int soma(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    //Inicializar Variáveis usando malloc. 
    int *ptrNum1 = (int*) malloc(sizeof(int)); //Alocar memória para um inteiro. 
    int *ptrNum2 = (int*) malloc(sizeof(int)); //Alocar memória para um inteiro.

    //Receber números.
    printf("Informe o primeiro numero: ");
    scanf("%d", ptrNum1);

    printf("Informe o segundo numero: ");
    scanf("%d", ptrNum2);

    //Acionar função.
    int result = soma(ptrNum1, ptrNum2); //Passando os endereços das variáveis.

    printf("\nSoma = %d\n", result); 

    //Verificar enderços e conteúdos das variáveis.
    printf("\nEndereco de Num1: %p\n", ptrNum1);
    printf("Endereco de Num2: %p\n", ptrNum2); //Usando sem ponteiro para mostrar o endereço. 

    printf("\nConteudo de Num1: %d\n", *ptrNum1); //Usando o ponteiro para acessar o conteúdo. 
    printf("Conteudo de Num2: %d\n", *ptrNum2);

    //Verificar tamanho das variáveis. 
    printf("\nTamanho da variavel Num1: %d\n", sizeof(*ptrNum1));
    printf("Tamanho da variavel Num2: %d\n", sizeof(*ptrNum2));

    //Liberar memória. 
    free(ptrNum1); //Toda vez que usar malloc, deve-se liberar a memória usando free(conteúdo).
    free(ptrNum2); 

    return 0;
}
