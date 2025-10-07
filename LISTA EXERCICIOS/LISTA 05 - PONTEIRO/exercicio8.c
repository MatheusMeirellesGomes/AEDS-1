#include <stdio.h>
#include <stdlib.h>
//Este exercicío consiste em alocar a memória dinamicamente, atribuir o valor 10 ao endereço apontado pelo ponteiro, e incrementer o conteúdo deste mesmo endereço
//em 5 vezes. Como o valor inicial = 10, o valor final vai ser 35. 
int main()
{
    //Inicializar Variáveis.
    int *ptr;

    //Alocar memória com malloc.
    ptr = (int *) malloc (sizeof(int)); //Aloca memória para um inteiro.

    //Atribuir valor para o endereço apontado pelo ponteiro.
    *ptr = 10; //Atribui o valor 10 ao conteúdo do endereço apontado por ptr.

    //Incrementar o valor apontado por ptr em cinco vezes.
    for (int i = 0; i < 5; i++) {
        *ptr += 5; //Incrementa o valor apontado por ptr em 5.
    }

    //Imprimir valor.
    printf("\nPtr = %d\n", *ptr); //Imprime o valor apontado por ptr depois dos incrementos.

    //Liberar memória alocada.
    free (ptr); //Libera a memória alocada para ptr.

    return 0;
}