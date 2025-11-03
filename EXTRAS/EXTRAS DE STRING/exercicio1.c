#include <stdio.h>
#include <stdlib.h>
//Elabore um trecho de código, que leia uma frase e um caracter, trocando na frase o caracter lido por '*'.
int main()
{
    char *frase = (char *)malloc(100 * sizeof(char)); //ALocar memória para a frase.
    char caractere;

    //Pedir para o usuário inserir a frase.
    printf("Digite uma frase: ");
    scanf(" %[^\n]s", frase); //Ler a frase com espaços. Esse forma %[^\n] lê tudo que o usuário digitar até chegar no ENTER (\n).

    //Pedir para o usuário inserir o caractere a ser substituído.
    printf("Digite o caractere a ser substituido por '*': ");
    scanf(" %c", &caractere); //Ler o caractere.

    //inicializar i para percorrer a frase.
    int i = 0;

    //Usar while para percorrer a frase até o caractere nulo '\0', que indica o fim da string.
    while (*(frase + i) != '\0') { //Podendo ser: frase[i] != '\0'
        if (*(frase + i) == caractere) { //Se o caractere na posição da frase informada for igual ao caractere lido, substituir por '*'.
            *(frase + i) = '*'; //Substituir o caractere por '*'. Pode ser: frase[i] = '*'
        }
        i++; //Incrementar i para ir para o próximo caractere.
    }

    //Exibir a frase modificada.
    printf("Frase modificada: %s\n", frase);

    //Liberar a memória alocada para a frase.
    free(frase);

    return 0;
}