#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Dados os seguintes campos de um registro: nome, dia de aniversário e mês de aniversário, desenvolver um algoritmo que mostre em cada um dos meses do ano,
//quem são as pessoas que fazem aniversário, exibindo também o dia. Considerar um total de 40 pessoas.

//Typedef para o registro pessoa.
typedef struct {
    //Inicializar Variáveis que foram informadas para o registro de cada pessoa.
    char nome[50];
    int diaNiver;
    int mesNiver;
} Pessoa; //Registro (struct) criado para ter os dados da pessoa.

//Função principal.
int main() {
    //Declarar Variáveis.
    Pessoa pessoas[40]; //Vetor de registros, estaticamente alocado para 40 pessoas.

    //Laço para ler os dados das 40 pessoas.
    for (int cont = 0; cont < 40; cont++) {
        //Primeiro ler o nome da pessoa.
        printf("Informe o nome da pessoa %d: ", cont + 1);
        scanf(" %[^\n]", pessoas[cont].nome); //Como está lendo string, usar o espaço antes e não precisa do &, porque o nome já é um ponteiro.

        //Segundo, ler o dia de aniversário.
        printf("Informe o dia de aniversario de %s: ", pessoas[cont].nome);
        scanf("%d", &pessoas[cont].diaNiver); //Usar & porque está lendo um número inteiro.

        //Terceiro, ler o mês de aniversário.
        printf("Informe o mes de aniversario de %s: ", pessoas[cont].nome);
        scanf("%d", &pessoas[cont].mesNiver); //Usar & porque está lendo um número inteiro.

        printf("\n"); //Pular uma linha para melhor visualização dos dados.
    }

    //Laço para mostrar os aniversariantes de cada mês.
    for (int mes = 1; mes <= 12; mes++) {
        printf("Aniversariantes do mes: %d\n", mes);

        //Laço para verificar todas as pessoas e ver quem faz aniversário no mês atual.
        for (int cont = 0; cont < 40; cont++) {
            if (pessoas[cont].mesNiver == mes) { //Se a pessoa que está sendo verificada faz aniversário no mês atual (mês que está sendo verificado)
                printf("Nome: %s - Dia: %d\n", pessoas[cont].nome, pessoas[cont].diaNiver); //Mostrar o nome e o dia de aniversário da pessoa.
            }
        }
    }

    return 0;
}