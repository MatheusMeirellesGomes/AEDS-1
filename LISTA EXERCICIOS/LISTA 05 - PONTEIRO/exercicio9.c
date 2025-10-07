#include <stdio.h>
#include <stdlib.h>
//Este exercicío é basicamente igual ao 8, porém esse ele vai incrementar o endereço do ponteiro, e não o valor apontado por ele. 
//Ex: Endereço inicial: FF00 - Endereço após incremento: FF20. (Como inteiro tem 4bytes, ele vai pular de 4 em 4 bytes). 
int main()
{
    //Inicializar Variáveis.
    int *ptr;

    //Alocar memória com malloc.
    ptr = (int *) malloc (sizeof(int));

    //Atribuir valor para o endereço apontado pelo ponteiro.
    *ptr = 10; //Atribui o valor 10 ao conteúdo do endereço apontado por ptr.

    //Incrementar o valor apontado por ptr em cinco vezes.
    for (int cont = 0; cont < 5; cont++) {
        ptr += 1; //Incrementa o valor apontado por ptr em 1;
     }

     //Imprimir valor.
     printf("\nPtr = %d\n", ptr); //Imprime o valor apontado por ptr após os incrementos.

     //LIberar memória alocada.
     free (ptr); //Libera a memória alocaada para ptr.

     return 0;
}