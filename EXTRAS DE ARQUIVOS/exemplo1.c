#include <stdio.h>
#include <stdlib.h>
//Implemente um programa que leia três valores inteiros e chame uma função que receba e ordene estes valores, ou seja, o menor valor na primeira variável,
//o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores
//forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela no programa principal.
int ordena(int *a, int *b, int *c)
{
    //Inicializar Variável auxiliar para fazer a troca.
    int aux;

    // Verifica se todos os valores são iguais
    if (*a == *b && *b == *c){ //Se os três conteúdos forem iguais. Ex: 8 8 8.
        return 1;
    }
    else {
        //Ordenar números conforme enunciado.
        // Se o primeiro valor for maior que o segundo, troca eles. Ex: 7 2 8  ou 8 2 7
        if (*a > *b){
            aux = *a;
            *a = *b;
            *b = aux;
        }
        // Se o primeiro valor for maior que o terceiro, troca eles. Ex: 8 2 7 ou 8 7 2.
        if (*a > *c){
            aux = *a;
            *a = *c;
            *c = aux;
        }
        // Se o segundo valor for maior que o terceiro, troca eles. Ex: 2 7 8 ou 2 8 7
        if (*b > *c){
            aux = *b;
            *b = *c;
            *c = aux;
        }

        return 0;
    }
}
int main()
{
    //Inicializar Arquivo.
    FILE *arq = fopen ("C:\\Users\\Matheus Gomes\\Desktop\\ordena.txt", "r");
    FILE *saida = fopen ("C:\\Users\\Matheus Gomes\\Desktop\\saida.txt", "w");

    //Inicializar Variáveis.
    int n1, n2, n3;

     // Lê trios de valores até o fim do arquivo
    while (fscanf(arq,"%d%d%d", &n1, &n2, &n3) != EOF)
    {
        //Acionar função.
        int resultado = ordena(&n1, &n2, &n3);

        //Verificar qual é o retorno da função.
        if (resultado == 1){
            printf("\nOs tres numeros sao iguais.\n"); //Se for return 1, os três números são iguais e imprimir no compilador.
            fprintf(saida, "Os tres numeros sao iguais.\n"); //Imprimir no arquivo.
        }
        else {
            printf("\nOs valores sao diferentes.\n"); //Se for return 0, vai ordenar os valores e imprimir no compilador.
            fprintf(saida, "Os valores sao diferentes.\n"); //Imprimir no arquivo.
        }

        //Imprimir valores ordenados.
        printf("Valores ordenados: %d - %d - %d\n", n1, n2, n3); //Imprimir no compilador.
        fprintf(saida, "Valores ordenados: %d - %d - %d\n", n1, n2, n3); //Fprintf se usa quando for usado "w." Para imprimir no arquivo.
    }

    //Sempre lembrar de fechar o arquivo.
    fclose(arq);
    fclose(saida);

    return 0;
}