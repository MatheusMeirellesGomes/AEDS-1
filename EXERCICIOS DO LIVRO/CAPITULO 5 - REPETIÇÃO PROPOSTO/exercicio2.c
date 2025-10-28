#include <stdio.h>
#include <stdlib.h>

int main () 
{
    //Inicializar Variáveis
    int vendas = 120, despesa = 200, maior_vendas = 0; 
    float preco_ingresso = 5.0, lucro = 0, maior_lucro = 0, maior_preco = 0; 

    //Verificar de acordo com o preço do ingresso
    while (preco_ingresso > 1) //Enquanto o preço for maior que 1 real
    {
        //Calcular o lucro
        lucro = (preco_ingresso * vendas) - despesa; //lucro = receita total - despesa

        //Verificar o maior lucro
        if (lucro > maior_lucro) 
        {
            maior_lucro = lucro; //atualiza o maior lucro
            maior_preco = preco_ingresso; //atualiza o preço que deu maior lucro
            maior_vendas = vendas; //atualiza a quantidade de vendas correspondente
        }

        //Imprimir resultado
        printf("\nA um preco de %.2f reais, o lucro sera igual a %.2f reais, vendendo %d ingressos\n", preco_ingresso, lucro, vendas);

        //Atualizar preço e vendas
        preco_ingresso -= 0.5; //reduz preço do ingresso em 0,5
        vendas += 26; //aumenta número de vendas em 26
    }

    //Imprimir resultados fora da repetição
    printf("\nO melhor preco e a quantidade de vendas para obter o maior lucro de %.2f reais, e de, respectivamente:\n%.2f reais e %d ingressos\n", maior_lucro, maior_preco, maior_vendas);
}
