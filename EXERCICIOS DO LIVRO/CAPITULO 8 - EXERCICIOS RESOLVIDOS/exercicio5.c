#include <stdio.h>
#include <stdlib.h>
float calcula (float preco_antigo, float preco_atual) //Recebe os valor de 100 e 120 da main. 
{
    //Inicializar Variáveis.
    float percentual, acrescimo;

    //Calcular o percentual de acréscimo com base no valor antigo e no valor atual.
    percentual = ((preco_atual - preco_antigo) / preco_antigo) * 100; //Ex: ((120 - 100) / 100) * 100 = 20%.
    acrescimo = preco_atual - preco_antigo; //Ex: 120 - 100 = 20 reais.

    //Imprimir acréscimo sem ser em percentual.
    printf("\nValor acrescido: R$ %.2f\n", acrescimo);

    return percentual; //Retorna o valor do percentual para a variável resultado da main.
}
int main()
{
    //Inicializar Variáveis.
    float valorAntigo, valorAtual;

    //Receber valores.
    printf("Informe o valor antigo do produto: R$ "); //Ex: 100 reais. 
    scanf("%f", &valorAntigo);

    printf("Informe o valor atual do produto: R$ "); //Ex: 120 reais.
    scanf("%f", &valorAtual);

    //Acionar procedimento.
    float resultado = calcula(valorAntigo, valorAtual);

    //Imprimir resultado.
    printf("\nPercentual de acrescimo: %.2f%%\n", resultado);

    return 0;
}