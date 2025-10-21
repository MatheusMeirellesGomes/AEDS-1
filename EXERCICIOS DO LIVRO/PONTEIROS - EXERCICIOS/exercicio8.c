#include <stdio.h>
#include <stdlib.h>
// Função que calcula a duração de um jogo em minutos.
int duracao(int *h_inicio, int *min_inicio, int *h_termino, int *min_termino)// Recebe hora e minuto do início e término e retorna a duração total em minutos. 
{
    // Inicializa variáveis para minutos totais do início e do término.
    int minutos_inicio, minutos_termino;

    // Calcula os minutos totais do início e do término.
    minutos_inicio = *h_inicio * 60 + *min_inicio; // Converte o horário de início em minutos. Ex: 1h30 = 90 minutos.
    minutos_termino = *h_termino * 60 + *min_termino; // Converte o horário de término em minutos. Ex: 2h10 = 130 minutos.

    // Retorna a duração em minutos.
    return minutos_termino - minutos_inicio;
}

int main() 
{
    // Inicializar variáveis.
    int N, h_inicio, min_inicio, h_termino, min_termino;
    int *ptr_hi = &h_inicio;
    int *ptr_mi = &min_inicio;
    int *ptr_ht = &h_termino;
    int *ptr_mt = &min_termino;

    // Receber número de jogos.
    printf("Insira quantos jogos quer analisar: ");
    scanf("%d", &N);

    // Loop para receber os dados de cada jogo e imprimir a duração.
    for (int cont = 1; cont <= N; cont++) 
    {
        printf("\nJogo %d:", cont);

        // Receber hora do início.
        printf("\nInsira a hora do inicio do jogo: ");
        scanf("%d", ptr_hi); //Jeito certo de usar ponteiro com scanf. 

        // Receber minutos do início.
        printf("Insira o minuto do inicio do jogo: ");
        scanf("%d", ptr_mi);

        // Receber hora do término.
        printf("Insira a hora do termino do jogo: ");
        scanf("%d", ptr_ht);

        // Receber minutos do término.
        printf("Insira o minuto do termino do jogo: ");
        scanf("%d", ptr_mt);

        //Acionar a função duração.
        int duracao_jogo = duracao(ptr_hi, ptr_mi, ptr_ht, ptr_mt); //Vai mandar os endereços dosvalores para a função duração e receber o valor do return dela.

        // Imprimir a duração do jogo.
        printf("\nA duracao desse jogo foi de %d minutos!\n", duracao_jogo);
    }

     //Imprimir endereços e conteúdos de cada variável. 
    printf("\nEndereco de h_inicio: %p\n", ptr_hi);
    printf("Conteudo de h_inicio: %d\n", *ptr_hi);
    printf("\nEndereco de min_inicio: %p\n", ptr_mi);
    printf("Conteudo de min_inicio: %d\n", *ptr_mi);
    printf("\nEndereco de h_termino: %p\n", ptr_ht);
    printf("Conteudo de h_termino: %d\n", *ptr_ht);
    printf("\nEndereco de min_termino: %p\n", ptr_mt);
    printf("Conteudo de min_termino: %d\n", *ptr_mt);

    return 0;
}