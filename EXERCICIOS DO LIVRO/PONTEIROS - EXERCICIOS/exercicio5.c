#include <stdio.h>
#include <stdlib.h>
float calcula (float *preco_antigo, float *preco_atual) //Recebe o conteúdo dos ponteiros da main. 
{
    //Inicializar Variáveis.
    float percentual, acrescimo;

    //Calcular o percentual de acréscimo com base no valor antigo e no valor atual.
    percentual = ((*preco_atual - *preco_antigo) / *preco_antigo) * 100; //Ex: ((120 - 100) / 100) * 100 = 20%.
    acrescimo = *preco_atual - *preco_antigo; //Ex: 120 - 100 = 20 reais.

    //Imprimir acréscimo sem ser em percentual.
    printf("\nValor acrescido: R$ %.2f\n", acrescimo);

    return percentual; //Retorna o valor do percentual para a variável resultado da main.
}
int main()
{
    //Inicializar Variáveis.
    float valorAntigo, valorAtual;
    float *ptrValorAntigo = &valorAntigo; //Criar ponteiro para valor antigo. 
    float *ptrValorAtual = &valorAtual; //Criar ponteiro para valor atual.

    //Receber valores.
    printf("Informe o valor antigo do produto: R$ "); //Ex: 100 reais. 
    scanf("%f", ptrValorAntigo); //Forma certa de usar ponteiro com scanf. 

    printf("Informe o valor atual do produto: R$ "); //Ex: 120 reais.
    scanf("%f", ptrValorAtual);

    //Acionar procedimento.
    float resultado = calcula(ptrValorAntigo, ptrValorAtual); //Passando os endereços dos valores para a função. 

    //Imprimir resultado.
    printf("\nPercentual de acrescimo: %.2f%%\n", resultado);

    //Imprimir conteúdo e endereço dos ponteiros. 
    printf("\nEndereco de ptrValorAntigo: %p\n", ptrValorAntigo); 
    printf("Conteudo de ptrValorAntigo: %.2f\n", *ptrValorAntigo); 

    printf("\nEndereco de ptrValorAtual: %p\n", ptrValorAtual); 
    printf("Conteudo de ptrValorAtual: %.2f\n", *ptrValorAtual); 

    return 0;
}