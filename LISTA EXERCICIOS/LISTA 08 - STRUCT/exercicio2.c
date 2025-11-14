#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e preço de um eletrodoméstico. Desenvolver um algoritmo que permita
//exibir qual foi a média dos preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava abaixo da
//média. o telefone será lido como string

//Typedef para o registro das lojas.
typedef struct {
    //Inicializar Variáveis que foram informadas para o registro de cada loja.
    char nomeLoja[50];
    char telefone[15]; //Lido como string. Ex: (31) 99505-0104.
    float preco;
} Loja; //Registro (struct) criado para ter os dados da loja.

//Função principal.
int main()
{
    //Inicializar Variáveis.
    Loja lojas[15]; //Vetor de registros, estaticamente alocado para 15 lojas.
    float somaPrecos = 0, mediaPrecos;

    //Laço para ler os dados das 15 lojas.
    for (int cont = 0; cont < 15; cont++) {
        //Primeiro, ler o nome da loja.
        printf("Informe o nome da loja %d: ", cont + 1);
        scanf(" %[^\n]", lojas[cont].nomeLoja); //Como está lendo string, usar o espaço antes e não precisa do &, porque o nome já é um ponteiro.

        //Segundo, ler o telefone da loja.
        printf("Informe o telefone da loja %s: ", lojas[cont].nomeLoja);
        scanf(" %[^\n]", lojas[cont].telefone); //Como está lendo string, usar o espaço antes e não precisa do &, porque o telefone já é um ponteiro.

        //Terceiro, ler o preço do eletrodoméstico.
        printf("Informe o preco do eletrodomestico na loja %s: ", lojas[cont].nomeLoja);
        scanf("%f", &lojas[cont].preco); //Usar & porque está lendo um número float. O '.' é usado para referenciar a variável do struct.

        printf("\n");

        //Acumular soma dos preços para calcular a média depois.
        somaPrecos += lojas[cont].preco; //Soma dos preços = soma dos preços de cada loja.
    }

    //Calcular a média dos preços.
    mediaPrecos = somaPrecos / 15.0; //Media = soma dos preços dividido pelo número de lojas (15).

    //Imprimir a média dos preços.
    printf("Media dos precos cadastrados: %.2f\n", mediaPrecos);

    //Imprimir a relação das lojas com preço abaixo da média.
    printf("Lojas com preco abaixo da media:\n");

    for (int cont = 0; cont < 15; cont++) {
        if (lojas[cont].preco < mediaPrecos) { //Se o preço de cada loja informada for menor que a média dos preços.
            printf("Nome da Loja: %s - Telefone: %s\n", lojas[cont].nomeLoja, lojas[cont].telefone); //Mostrar o nome e o telefone da loja.
        }
    }

    return 0;
}