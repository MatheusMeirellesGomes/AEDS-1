#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. Faça um procedimento que leia esses dados
//para um número não determinado de pessoas, calcule e exiba a média de salário da população (a condição de parada deve ser um flag com salário negativo).
//Faça um programa que acione o procedimento.
void habitantes(){
    
    //Inicializar Variáveis.
    int numero_filhos, quantidade = 0;
    float salario = 0;
    float media, soma_salario = 0;

    printf("PESQUISA:\n");

    //Verificar as informações de acordo com a quantidade de pessoa da cidade.
    do
    {
        //Receber informações.
        printf("\nInforme o salario: R$ ");
        scanf("%f", &salario);

        printf("Informe o numero de filho(s): ");
        scanf("%d", &numero_filhos);

        //Verificar se o salário é maior que zero.
        if (salario >= 0){ //Se não adicionar um if, o salário negativo vai entrar no cálculo da média de salários. 
            quantidade++; //Vai saber quantas pessoas vão estar na pesquisa.
            soma_salario += salario; //Vai somar todos os salário que estiverem na pesquisa.
        }  
    } while (salario >= 0);

    //Calcular média do salário da populção.
    media = soma_salario / quantidade; //A media vai ser o salário informado por cada pessoa, dividido pelo número de pessoas da cidade.

    //Imprimir o resultado.
    printf("\nMedia de Salario da populacao: %.2f\n", media);
}

//Acionar o procedimento no principal.
int main()
{
    //Chamar procedimento.
    habitantes();

    return 0;
}

