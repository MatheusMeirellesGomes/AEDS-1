#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    float preco_compra, preco_venda, lucro_acao = 0;
    float lucro_total = 0, soma_lucro = 0;
    int qntd_acoesS = 0, qntd_acoesI = 0;
    char letra;

    //Receber letra a ser comerciada na bolsa de valores.
    printf("Informe uma letra a ser comercializada: ");
    scanf(" %c", &letra);

    //Verificar se a letra F, que é a de parada não foi escolhida.
    while (letra != 'F' && letra != 'f') //Enquanto a letra for diferente de F. 
    {
        //Receber informações.
        printf("Informe o preco de compra: R$ ");
        scanf("%f", &preco_compra);

        printf("Informe o preco de venda: R$ ");
        scanf("%f", &preco_venda);

        //Calcular lucro de cada ação comercializada.
        //Verificar qual preço é maior para achar o lucro.
        if (preco_compra > preco_venda){
            lucro_acao = 0;
        }
        else {
            lucro_acao = preco_venda - preco_compra; //Cálculo para achar o qualquer tipo de lucro.
        }

        //Ver a quantidade de ações com lucro superior a 1.000 reais.
        if (lucro_acao > 1000){
            qntd_acoesS++;
        }

        //Verificar a quantidade de ações com lucro inferior a 200 reais.
        if (lucro_acao < 200){
            qntd_acoesI++;
        }

        //Calcular o lucro total da empresa.
        soma_lucro += lucro_acao; //Vai somar o lucro de cada ação, para calcular o lucro total. 

        //Imprimir o lucro de cada ação.
        printf("\nLucro desta acao: R$ %.2f\n", lucro_acao);

        //Receber a próxima letra, para entrar no loop até que seja F.
        printf("\nInforme uma letra a ser comercializada: ");
        scanf(" %c", &letra);
    }

    //Imprimir resultados.
    printf("Quantidade de acoes com lucro superior a mil reais: %d\n", qntd_acoesS);
    printf("Quantidade de acoes com lucro inferior a duzentos reais: %d\n", qntd_acoesI);
    printf("Lucro Total da empresa: R$ %.2f\n", soma_lucro);

    return 0;
}