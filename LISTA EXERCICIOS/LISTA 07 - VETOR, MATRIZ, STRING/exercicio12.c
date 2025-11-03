#include <stdio.h>
#include <stdlib.h>
//Escreva um programa em C para contar o número de vogais e consoantes em uma cadeia de
//caracteres (vetor de char como string) usando um ponteiro. 
int main()
{
    //Inicializar Variáveis.
    char str[100]; //Vetor de char para armazenar a string.
    char *ponteiroStr; //Ponteiro para a string.
    int vogais = 0, consoantes = 0; //Contadores para vogais e consoantes.

    //Atribuir o endereço do vetor str ao ponteiro.
    ponteiroStr = str;

    //Pedir para o usuário inserir uma string.
    printf("Digite uma string: ");
    scanf("%s", ponteiroStr); //Ler a string usando o ponteiro.

    //Percorrer a string usando o ponteiro para contar vogais e consoantes.
    for (int i = 0; *(ponteiroStr + i) != '\0'; i++) {
        char caractere = *(ponteiroStr + i); //Obter o caractere atual.

        //Verificar se o caractere é uma letra.
        if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {
            
            //Verificar se é vogal (maiúscula ou minúscula).
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
                caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
                vogais++; //Incrementar contador de vogais.
            } else {
                consoantes++; //Incrementar contador de consoantes.
            }
        }
    }

    //Exibir os resultados.
    printf("Numero de vogais: %d\n", vogais);
    printf("Numero de consoantes: %d\n", consoantes);

    return 0;
}