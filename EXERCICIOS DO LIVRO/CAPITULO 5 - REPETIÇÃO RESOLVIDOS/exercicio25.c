#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int cod_pais;
    float preco_uni, imposto, valor_transporte, valor_seguro;
    float preco_final, total_impostos = 0;
    char transporte, carga_perigosa;

    printf("PRODUTO:\n");

    //Receber preço unitário e verifica-lo se ele é menor ou igual a zero.
    printf("Informe o preco unitario: R$ ");
    scanf("%f", &preco_uni);

    do {
        if (preco_uni <= 0){
            printf("\nPROGRAMA FINALIZADO.\n");
        }
        else {
            //Resetar variáveis a cada laço.
            imposto = 0; 
            valor_seguro = 0;
            valor_transporte = 0;
            
            //Receber país de origem.
            printf("\nInforme o pais de origem.\n");
            printf("1- Estados unidos.\n2- Mexico.\n3 - outros.\n");
            printf("Selecione uma opcao: ");
            scanf("%d", &cod_pais);

            //Receber meio de transporte.
            printf("\nInforme o meio de transporte.\n");
            printf("T- Terrestre.\nF- Fluvial.\nA- Aereo.\n");
            printf("Selecione uma opcao: ");
            scanf(" %c", &transporte);

            //Receber tipo de carga.
            printf("\nInforme o tipo de carga.\n");
            printf("S- Carga Perigosa.\nN- Carga nao Perigosa.\n");
            printf("Selecione uma opcao: ");
            scanf(" %c", &carga_perigosa);

            //Verificar valor do imposto.
            if (preco_uni <= 100){
                imposto = preco_uni * 0.05;
            }
            else if (preco_uni > 100){
                imposto = preco_uni * 0.10;
            }

            //Verificar o valor do transporte.
            if (carga_perigosa == 'S'){
                if (cod_pais == 1){
                    valor_transporte = 50;
                }
                else if (cod_pais == 2){
                    valor_transporte = 21;
                }
                else if (cod_pais == 3){
                    valor_transporte = 24;
                }
                else {
                    printf("\nCodigo do Pais invalido.\n");
                }
            }
            else if (carga_perigosa == 'N'){
                if (cod_pais == 1){
                    valor_transporte = 12;
                }
                else if (cod_pais == 2){
                    valor_transporte = 21;
                }
                else if (cod_pais == 3){
                    valor_transporte = 60;
                }
                else {
                    printf("\nCodigo do Pais invalido.\n");
                }
            }

            //Verificar o valor do seguro.
            if (cod_pais == 2 && transporte == 'A'){
                valor_seguro = preco_uni / 2.0; //Valor do seguro é a metade do preço unitário nesse caso.
            }

            //Calcular o valor do imposto.
            printf("\nValor do Imposto: R$ %.2f\n", imposto);

            //Imprimir valor do transporte.
            printf("\nValor do Transporte: R$ %.2f\n", valor_transporte);

            //Imprimir valor do seguro.
            printf("\nValor do seguro: R$ %.2f\n", valor_seguro);

            //Calcular o preço final.
            preco_final = preco_uni + imposto + valor_transporte + valor_seguro;
            printf("\nPreco final: R$ %.2f\n", preco_final);

            //Calcular o total de impostos.
            total_impostos += imposto;
            printf("\nTotal de impostos: %.2f\n", total_impostos);

            printf("\nNOVO PRODUTO:\n");

            printf("\nInforme o preco unitario: R$ ");
            scanf("%f", &preco_uni);
        }
    } while (preco_uni > 0);

}
