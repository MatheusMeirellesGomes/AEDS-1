#include <stdio.h>
#include <stdlib.h>
int divisores (int *a, int *b, int *c)
{
    //Inicializar Variáveis.
    int soma = 0; //Soma dos divisores.

    //Verficar os números entre b e c que são divisíveis por a e somá-los.
    for (int cont = *b; cont <= *c; cont++) //o laço vai de b até c, ex: 10 até 20.
    {
        //Verificar se o resto da divisão dos números entre b e c, são iguais a zero e nãoo tem resto.
        if (cont % *a == 0){
            soma += cont; //Vai somar os números que são divisíveis por a.
        }
    }

    //Retornar resultado da função.
    return soma; //Esse retorno da soma vai ser salvo na variável resultado inicializada na main.
}
int main()
{
    //Inicializar Variáveis.
    int n1, n2, n3;
    int *ptrN1 = &n1;
    int *ptrN2 = &n2;
    int *ptrN3 = &n3;

    //Receber primeiro número (letra a no caso).
    printf("Informe primeiro numero: ");
    scanf("%d", ptrN1);

    while (*ptrN1 > 1){ //Enquanto o conteúdo de ptrN1 for maior que 1.
        //Receber segundo e terceiro número. (Letra b e c no caso).
        printf("\nInforme o segundo numero: ");
        scanf("%d", ptrN2);

        printf("\nInforme o terceiro numero: ");
        scanf("%d", ptrN3);

        //acionar função, passando os valores de n1, n2, e n3, para a, b e c.
        int resultado = divisores(&n1, &n2, &n3); //O valor da soma do return soma, foi salvo na variável resultado.

        //Imprimir resultado.
        printf("\nSoma dos inteiros = %d\n", resultado);

        //Mostrar endereços e conteúdos das variáveis.
        printf("\nEndereco de n1: %p\n", ptrN1);
        printf("Conteudo de n1: %d\n", *ptrN1);
        printf("\nEndereco de n2: %p\n", ptrN2);
        printf("Conteudo de n2: %d\n", *ptrN2);
        printf("\nEndereco de n3: %p\n", ptrN3);
        printf("Conteudo de n3: %d\n", *ptrN3);
        
        //Repetir o programa até que o primeiro numero seja menor que 1. 
        printf("\nInforme o primeiro numero novamente: ");
        scanf("%d", ptrN1);
    }

    return 0;
}