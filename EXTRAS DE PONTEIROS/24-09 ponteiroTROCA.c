#include <stdio.h>
#include <stdlib.h>
//Trocar os valores.
void troca1 (int *A, int *B)
{
    //Inicializar variável auxiliar para troca.
    int aux;

    //Fazer as trocas necessárias.
    aux = *A; //variável aux recebe o endereço de A onde vai estar guardado o valor de A.
    *A = *B; //O valor de A recebe o endereço de B onde vai estar guardado o valor de B.
    *B = aux;  //O valor de B recebe o valor que estava em aux.
    //No final A e B terão trocado de valores.
}

void troca2 (int n1, int *n2)
{
    //Inicializar Variável.
    int aux;

    //Fazer as trocas necessárias.
    aux = n1; //Variável aux recebe o valor de n1.
    n1 = *n2; //N! recebe o endereço de n2 onde vai esta guardado o valor de n2.
    *n2 = aux; //O endereço de n2 recebe o valor que estava em aux.
    //No final n1 e n2 terão trocado de valores.
}

void troca3 (int *val1, int val2)
{
    //Inicializar Variáveis,
    int aux;

    //Fazer as trocas necessárias.
    aux = *val1; //Aux recebe o endereço de val1 onde vai estar guardado o valor de val1.
    *val1 = val2; //O endereço de val1 recebe o valor de val2.
    val2 = aux; //Val2 recebe o valor que estava em aux.
}


int main()
{
    //Inicializar Variáveis.
    int x = 20, y = 30;

    //Imprimir valores iniciais de x e y.
    printf("X = %d e Y = %d\n", x, y);

    //Acionar troca 1, substituindo os valores.
    troca1(&x, &y); //Como os dois são ponteiros, tem que passar o endereço dos dois.
    printf("\nX = %d e Y = %d\n", x, y); //Imprimindo os valores trocados.

    //Acionar troca 2, substituindo os valores.
    troca2(x, &y); //Como apenas o segundo é ponteiro, só passar o endereço do segundo.
    printf("\nX = %d e Y = %d\n", x, y); //Apenas o valor de y vai ser trocado, porque x não é ponteiro.

    //Acionar troca 3, substituindo os valores.
    troca3(&x, y); //Como apenas o primeiro é ponteiro, só passar o endereço do primeiro.
    printf("\nX = %d e Y = %d\n", x, y); //Apenas o valor de x vai ser trocado, porque y não é ponteiro.

    //Só colocar & no parâmetro que é ponteiro.

    return 0;
}
