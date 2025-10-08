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
    //Inicializar Variáveis.
    int n1, n2, n3;

    //Receber valores.
    printf("Informe primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe segundo numero: ");
    scanf("%d", &n2);

    printf("Informe terceiro valor: ");
    scanf("%d", &n3);

    //Acionar função passando os valores.
    int resultado = ordena(&n1, &n2, &n3); //Esta enviando o endereço de n1, n2, n3, onde o ponteiro vai acessar e pegar o conteúdo dentro de cada endereço.

    //Verificar o resultado que vai dar na função.
    if (resultado == 1){ //Se o retorno da função for 1.
        printf("\nOs tres numero sao iguais.\n");
    }
    else { //Se o retorno da função for zero.
        printf("\nOs valores sao diferentes.\n");
    }

    //Imprimir na ordem certa.
    printf("\nValores ordenados: %d - %d - %d\n", n1, n2, n3);

    return 0;

}
