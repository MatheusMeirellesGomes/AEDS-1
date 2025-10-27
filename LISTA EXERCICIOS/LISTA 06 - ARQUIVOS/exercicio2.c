#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba um texto do usuário e grave o texto em um arquivo, sem uso de vetor. 
int main()
{
    //Inicializar Variáveis. 
    FILE *arq = fopen("./texto.txt", "w"); //O 'w' é para criar o arquivo para escrita. 
    char caracter;
    
    //Receber texto do usuário e gravar no arquivo. 
    printf("Digite um texto (pressione enter para sair): "); 
    scanf("%c", &caracter); //Vai ler o primeiro caractere digitado pelo usuário. 
    //Esse scanf deve ser sem espaço, para que ele leia o caracter de espaço(enter) também. 

    //Gravar texto no arquivo qundo o usuário não pressionar enter. 
    while (caracter != '\n')
    {
        //Gravar caractere no arquivo. 
        fprintf(arq, "%c", caracter);
        scanf("%c", &caracter); //Este scanf vai ler os demais caracteres digitados pelo usuário até que o enter seja pressionado. 
    }

    //Fechar arquivo. 
    fclose(arq);

    return 0;
}