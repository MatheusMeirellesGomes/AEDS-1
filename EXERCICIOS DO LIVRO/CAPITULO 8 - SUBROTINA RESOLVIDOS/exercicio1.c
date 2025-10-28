#include <stdio.h>
#include <stdlib.h>
int verifica(int numero)
{
    //Caso base.
    if (numero >= 0){ //Se o número informado pelo usuário for positivo, retorna 1.
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

    //Receber número.
    printf("Informe um numero: ");
    scanf("%d", &num);

    //Acionar recursão.
    int result = verifica(num); //Como têm dois retornos necessita de uma variável extra.

    //Verificar qual é o tipo de retorno.
    if (result == 1){
        printf("\nNumero Positivo.\n");
    }
    else {
        printf("\nNumero Negativo.\n");
    }

    return 0;
}