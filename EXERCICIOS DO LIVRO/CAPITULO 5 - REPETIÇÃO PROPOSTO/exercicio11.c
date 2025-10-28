#include <stdio.h>
#include <stdlib.h>
//Receber o valor do carro e perguntar se o usuário deseja parcelar.
//Se não parcelar, aplicar desconto de 20%.
//Se parcelar, perguntar o número de parcelas (de 6 a 60, múltiplo de 6).
//Para cada parcela, acrescentar 3% ao valor do carro.
//Calcular e mostrar o valor final e o valor de cada parcela.
int main() {
    //Inicializar variáveis.
    int q_parcelas = 0;
    float valor, valor_final, v_parcelas = 0, perc_acresimo = 0;
    char parcelar;

    //Receber o valor do carro.
    printf("Insira o valor do carro:\n");
    scanf("%f", &valor);

    //Perguntar se deseja parcelar.
    printf("\nVoce deseja parcelar? (S ou N)\n");
    scanf(" %c", &parcelar);

    //Verificar se o usuário quer ou não parcelar. 
    if (parcelar == 'N' || parcelar == 'n') //Se ele não quiser parcelar, o pagamento será a vista.
    {
        //À vista: desconto de 20%
        valor_final = valor * 0.8;
        printf("\nO preco final da compra a vista e de %.2f reais!\n", valor_final);
    } 
    
    //Se ele quiser parcelar verifcar de quantas vezes ele quer parcelar.
    else 
    {
        //Receber a quantidade de parcelas enquanto...
        do {
            //Receber de quantas vezes o usuário quer parcelar.
            printf("\nEm quantas vezes deseja parcelar?\n");
            scanf("%d", &q_parcelas);
        } while (q_parcelas < 6 || q_parcelas > 60 || q_parcelas % 6 != 0); //Essa condição não for atendida.

        //Calcular acréscimo total
        perc_acresimo = ((q_parcelas / 6) * 0.03);
        valor_final = valor + valor * perc_acresimo;
        v_parcelas = valor_final / q_parcelas;

        //Imprimir resultado final.
        printf("\nQuantidade de parcelas: %d - Valor final: R$ %.2f reais - Valor de cada parcela: R$ %.2f reais!\n", q_parcelas, valor_final, v_parcelas);
    }

    return 0;
}