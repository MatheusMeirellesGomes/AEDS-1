#include <stdio.h>
#include <stdlib.h>
int verifica(int *numero)
{
    //Caso base.
    if (*numero >= 0){ //Se o número informado pelo usuário for positivo, retorna 1.
        return 1;
    }
    else { //Senão retorna 0.
        return 0;
    }
}
int main()
{
    //Inicializar Variáveis.
    int num;
    int *ptrnum = &num;

    //Alocar memória usando malloc.
    int *ptr = (int*) malloc(sizeof(int)); //Alocar memória para um intero; 

    //Receber número.
    printf("Informe um numero: ");
    scanf("%d", &num);

    //Acionar recursão.
    int result = verifica(&num); //Como têm dois retornos necessita de uma variável extra.

    //Verificar qual é o tipo de retorno.
    if (result == 1){
        printf("\nNumero Positivo.\n");
    }
    else {
        printf("\nNumero Negativo.\n");
    }

    //Verificar endereço e conteúdo da variável.
    printf("\nEndereco de num: %p", &num);
    printf("\nConteudo de num: %d\n", *ptrnum);


    //Liberar memória.
    free(ptr); //Toda vez que usar malloc, deve-se liberar a memória usando free(conteúdo). 
    return 0;
}