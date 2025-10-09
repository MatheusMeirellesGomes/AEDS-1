#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int opcao, meses;
    float salario, aumento = 0, novo_sal, valor_ferias;
    float decimo_terceiro;

    //Receber opções.
    printf("MENU DE OPCOES:\n");
    printf("\n1- Novo Salario.\n2- Ferias.\n3- Decimo Terceiro.\n4- Sair.\n");
    printf("\nEscolha uma dessas opcoes: ");
    scanf("%d", &opcao);

    //Executar enquanto a opção 4 não for escolhida.
    while (opcao != 4)
    {
        //Verificar a opcão do usuário.
        switch (opcao)
        {
            case 1:
                //Receber salário.
                printf("\nInforme seu salario: R$ ");
                scanf("%f", &salario);

                //Verificar qual é o salário do funcionário e calcular aumento.
                if (salario <= 210){
                    aumento = salario * 0.15;
                    novo_sal = salario + aumento;
                }
                else if (salario > 210 && salario <= 600){
                    aumento = salario * 0.10;
                    novo_sal = salario + aumento;
                }
                else {
                    aumento = salario * 0.05;
                    novo_sal = salario + aumento;
                }

                //Imprimir novo salário cada vez que a opção 1 for escolhida.
                printf("\nNovo salario com aumento: R$ %.2f\n", novo_sal);
                break;

            case 2:
                //Receber salário.
                printf("\nInforme seu salario: R$ ");
                scanf("%f", &salario);

                //Calcular o valor das férias.
                valor_ferias = salario + (salario / 3);

                //Imprimir valor das férias a cada vez que a opção 2 for escolhida.
                printf("\nValor das ferias: R$ %.2f\n", valor_ferias);
                break;

            case 3:
                //Receber salário e o número de meses que ele trabalhou na empresa.
                printf("\nInforme seu salario: R$ ");
                scanf("%f", &salario);

                printf("Informe o numero de meses que vc trabalhou: ");
                scanf("%d", &meses);

                //Calcular o valor do décimo terceiro.
                decimo_terceiro = (salario * meses) / 12;

                //Imprimir décimo terceiro a cada vez que a opção 3 for escolhida.
                printf("\nDecimo Terceiro: R$ %.2f\n", decimo_terceiro);
                break;

            default:
                printf("\nOpcao Invalida!\n");
                break;
        }
        //Receber opções novamente.
        printf("\nEscolha uma nova opcao: ");
        scanf("%d", &opcao);
    }

    return 0;
}