#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    FILE *arq = fopen("C:\\Users\\Matheus Gomes\\Desktop\\arquivo.txt", "w");

    //Imprimir 10 números no arquivo. 
    for (int qntd = 1; qntd <= 10; qntd++)
    {
        //Imprimir número no arquivo. 
        fprintf(arq, "%d\n", qntd); //Sempre quando for imprimir algo em algum arquivo, usar fprintf. Porque apenas o fprintf imprime no arquivo. 
    }

    //Mostrar mensagem de sucesso na tela. 
    printf("Arquivo criado com sucesso!\n"); 

    //Fechar arquivo. 
    fclose(arq);  //Lembrar sempre de fechar o arquivo.

    return 0; 
}