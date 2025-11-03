#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Biblioteca para usar a função time().
int main()
{
    //Inicializador de Números aleatórios.
    srand((unsigned)time(NULL));

    //Inicializar Variáveis.
    float temperatura[31]; //Vetor para armazenar as temperaturas de cada dia de janeiro (31 dias).
    float maiorTemp, menorTemp; //Variáveis para armazenar a maior e a menor temperatura.
    float somaTemp = 0.0, mediaTemp; //Variáveis para armazenar a soma das temperaturas e a média das temperaturas.
    int qntdDias = 0; //Variável para armazenar a quantidade de dias com temperatura inferior à média.

    //Preencher o vetor com as temperaturas de cada dia de janeiro.
    for (int dia = 0; dia < 31; dia++) {
        //Sortear uma temperatura aleatória entre 15 e 40 graus Celsius.
        temperatura[dia] = 15 + (rand() % 26); //15 + (0 a 25) = 15 a 40.

        //Imprimir temperatura de cada dia.
        printf("Temperatura do dia %d: %.2f\n", dia + 1, temperatura[dia]);

        //Acumular a soma das temperaturas para calcular a média depois.
        somaTemp += temperatura[dia]; //Soma das temperaturas = Soma das temperaturas de cada dia.
    }

    //Inicializar maior e menor temperatura com o primeiro valor do vetor. (Essa inicialização deve ser feita após o vetor ser preenchido).
    maiorTemp = temperatura[0];
    menorTemp = temperatura[0];

    //Verificar maior e menor temperatura no vetor.
    for (int dia = 1; dia < 31; dia++) { //Começa do dia 1 pois o dia 0 já foi usado para inicializar.
        //Verificar se a temperatura atual é maior que a maior temperatura armazenada.
        if (temperatura[dia] > maiorTemp) { //Se a temperatura do dia atual for maior que a maior temperatura atual.
            maiorTemp = temperatura[dia]; //Atualizar a maior temperatura.
        }

        //Verificar se a temperatura atual é menor que a menor temperatura armazenada.
        if (temperatura[dia] < menorTemp) { //Se a temperatura do dia atual for menor que a menor temperatura atual.
            menorTemp = temperatura[dia]; //Atualizar a menor temperatura.
        }
    }

    //Calcular a média das temperaturas.
    mediaTemp = somaTemp / 31.0; //Média = Soma das Temperaturas / 31 (total de dias em janeiro).

    //Contar a quantidade de dias com temperatura inferior à média.
    for (int dia = 0; dia < 31; dia++) {
        //Verificar se a temperatura do dia atual é inferior à média.
        if (temperatura[dia] < mediaTemp) { //Se a temperatura do dia atual for menor que a média.
            qntdDias++; //Incrementar a quantidade de dias.
        }
    }

    //Imprimir os resultados.
    printf("\nMaior Temperatura em Janeiro: %.2f graus Celsius\n", maiorTemp);
    printf("Menor Temperatura em Janeiro: %.2f graus Celsius\n", menorTemp);
    printf("Media das Temperaturas em Janeiro: %.2f graus Celsius\n", mediaTemp);
    printf("Quantidade de dias com temperatura inferior a media: %d dias\n", qntdDias);

    return 0;
}