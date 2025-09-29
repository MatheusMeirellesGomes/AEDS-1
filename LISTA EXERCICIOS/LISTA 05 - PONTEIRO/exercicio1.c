#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int valor = 10; 
    int *valorPtr = &valor; //Conteúdo do ponteiro está atribuído ao endereço de valor. 

    //Imprimir valor. 
    printf("\nValor = %d\n", valor); //Valor = 10; 

    //Imprimir o conteúdo do ponteiro. 
    printf("\nConteudo de valorPtr = %d\n", *valorPtr); //Conteudo do ponteiro = 10; 

    //Imprimir endereço de valorPtr endereço de valor. 
    printf("\nEndereco de valorPtr = %p\n", valorPtr); //Endereço do ponteiro = FE44;
    printf("\nEndereco de valor = %p\n", &valor);  //Endereço de valor = FE44;

    return 0; 
}