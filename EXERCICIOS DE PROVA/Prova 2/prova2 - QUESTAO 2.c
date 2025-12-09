#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//2. (5 pontos) Faça um programa em C que siga os passos abaixo com atenção:
//a) Peça ao usuário para digitar uma linha de texto.
//b) Em seguida, peça ao usuário para digitar uma palavra que será procurada nessa linha.
//c) O programa deve verificar se a palavra aparece dentro da linha. Caso a palavra exista, exiba na tela a posição inicial onde ela foi encontrada.
//d) Caso a palavra não exista na linha, exiba uma mensagem informando: "Palavra não encontrada na linha."
int main()
{
    //Inicializar Variáveis alocando dinâmicamente. 
    char *frase = (char *)malloc(100 * sizeof(char));
    char *palavra = (char *)malloc(50 * sizeof(char));

    //Receber frase e a palavra a ser procurada. 
    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    printf("Digite a palavra a ser procurada: ");
    scanf(" %[^\n]", palavra);

    //Procurar a palavra na frase. 
    char *resultado = strstr(frase, palavra); //Este comando retorna o endereço da primeira ocorrência da palavra na frase.
    //strstr retorna NULL se a palavra não for encontrada.

    //Verificar se a palavra foi encontrada e exibir o resultado.
    if (resultado != NULL) { //Se o resultado for diferente de NULL, a palavra foi encontrada.

        //Calcular a posição inicial da palavra na frase.
        int posicao = resultado - frase; //Subtraindo os endereços para obter o índice.
        printf("Palavra encontrada na posicao %d\n", posicao); 
    } 
    else { //Se o resultado for NULL, a palavra não foi encontrada.
        printf("Palavra nao encontrada na linha.\n");
    }

    //Liberar memória alocada.
    free(frase);
    free(palavra);

    return 0;
}