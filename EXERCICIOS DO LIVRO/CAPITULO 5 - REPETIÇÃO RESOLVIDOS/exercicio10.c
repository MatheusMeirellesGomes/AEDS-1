#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int idade, qntd_jogadores = 0, qntd_peso = 0;
    float peso, altura, somaIdade = 0, media_idade;
    float somaAltura = 0, media_altura, porcentagem;

    printf("CAMPENTATO DE FUTEBOL:\n");

    //Informar que são 5 times que serão lidos.
    for (int time = 1; time <= 5; time++)
    {
        //Zerar a idade média para não sobreescrever o cálculo.
        somaIdade = 0;

        //Cada time tem 11 jogadores.
        for (int cont = 1; cont <= 11; cont++)
        {
            //Receber informações de cada jogador.
            printf("\nInforme a idade: ");
            scanf("%d", &idade);

            printf("Informe o peso: ");
            scanf("%f", &peso);

            printf("Informe a altura: ");
            scanf("%f", &altura);

            //Verificar quantidade de jogadores com idade inferior a 18 anos.
            if (idade < 18){
                qntd_jogadores++; //Vai salvar na variável quantos jogadores têm abaixo de 18 anos.
            }

            //Verificar a média das idades dos jogadores de cada time.
            somaIdade += idade; //Vai somar a idade de todos os 11 jogares de cada time.

            //Verificar a médida das alturas de todos os jogadores do campenato.
            somaAltura += altura; //Vai salvar a altura de todos os 11 jogadores de cada time.

            //Verificar a porcentagem de jogadores com mais de 80 kgs entre todos os jogadores do campeonato.
            if (peso > 80){
                qntd_peso++; //Vai verificar quantos jogadores tem mais de 80 kgs.
            }
        }

        //Calcular média de idade dos jogadores.
        media_idade = somaIdade / 11; //Vai dividir a média de idade por 11, que é a quantidade de jogares que cada clube tem.
        printf("\nMedia de idade do time %d: %.2f\n", time, media_idade);
    }

    //Calcular a média de altura de cada jogador.
    media_altura = somaAltura / 55;

    //Calcular a porcentagem de jogares com mais de 80 kgs.
    porcentagem = (qntd_peso * 100.0) / 55;

    //Imprimir resultados.
    printf("\nQuantidade de jogadores com menos de 18 anos: %d\n", qntd_jogadores);
    printf("\nMedia das alturas dos jogadores do campeonato: %.2f \n", media_altura);
    printf("\nPorcentagem de jogadores com mais de 80 Kgs: %.2f%%\n", porcentagem);

    return 0;
}
