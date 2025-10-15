#include <stdio.h>
#include <stdlib.h>
int soma (int *a, int *b)
{
    //Inicializar Variáveis.
    int soma = 0;

    //Receber números.
    printf("Informe o primeiro numero: ");
    scanf("%d", a); //Como é ponteiro, não precisa do &, já que a variável é um endereço
    printf("Informe o segundo numero: ");
    scanf("%d", b); //Como é ponteiro, não precisa do &. Nesse caso está: Recebendo endereço de b.

    //Calcular soma.
    soma = *a + *b; //Soma = Conteúdo do endereço de a + Conteúdo do endereço de b.

    //Exibir resultado da soma.
    printf("\nSoma = %d\n", soma);
}

int main()
{
    //Inicializar Variáveis.
    int num1, num2;
    int *ptrnum1 = &num1; //Ponteiro ptrnum1 recebe o endereço de num1.
    int *ptrnum2 = &num2; //Ponteiro ptrnum2 recebe o endereço de num2.

    //Acionar procedimento passando endereços já que se trata de ponteiros.
    soma(&num1, &num2);

    //Indicar endereço de cada variável para melhor entendimento. (EXTRA).
    printf("\nEndereco de num1 = %p\n", &num1);
    printf("Endereco de num2 = %p\n", &num2);

    printf("\nConteudo de num1 = %d\n", *ptrnum1); //Conteúdo de endereço de num1.
    printf("Conteudo de num2 = %d\n", *ptrnum2); //Conteúdo de endereço de num2.

    return 0;
}