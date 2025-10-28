#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int opcao;
    float sal_inicial, imposto = 0, aumento = 0;
    float novo_sal;

    printf("MENU DE OPCOES.\n");

    //Verificar as opções enquanto a opção 4 não for selecionada.
    do
    {
        //Receber menu de opções.
        printf("\n1- Imposto.\n");
        printf("2- Novo Salario.\n");
        printf("3- Classificacao.\n");
        printf("4- Finalizar o programa.\n");

        //Escolher opcao que o usuário deseja saber.
        printf("\nInforme a opcao desejada: ");
        scanf("%d", &opcao);

        //Verificar o que fazer em cada opção.
        if (opcao == 1){
            printf("\nInforme o salario do funcionario: ");
            scanf("%f", &sal_inicial);

            //Verificar o imposto de acordo com o salário.
            if (sal_inicial < 500){
                imposto = sal_inicial * 0.05;
            }
            else if (sal_inicial >= 500 && sal_inicial <= 850){
                imposto = sal_inicial * 0.10;
            }
            else if (sal_inicial > 850){
                imposto = sal_inicial * 0.15;
            }

            //Imprimir imposto
            printf("\nValor do imposto: %.2f\n", imposto);
        }

        else if (opcao == 2){
            printf("\nInforme o salario do funcionario: ");
            scanf("%f", &sal_inicial);

            //Verificar o aumento de acordo com o salário.
            if (sal_inicial < 450){
                novo_sal = sal_inicial + 100;
            }
            else if (sal_inicial >= 450 && sal_inicial < 750){
                novo_sal = sal_inicial + 75;
            }
            else if (sal_inicial >= 750 && sal_inicial <= 1500){
                novo_sal = sal_inicial + 50;
            }
            else if (sal_inicial > 1500) {
                novo_sal = sal_inicial + 25;
            }

            //Imprimir novo salário.
            printf("\nNovo salario: R$ %.2f\n", novo_sal);
        }

        else if (opcao == 3){
            printf("\nInforme o salario do funcionario: ");
            scanf("%f", &sal_inicial);

            if (sal_inicial <= 700){
                printf("\nMAL REMUNERADO.\n");
            }
            else if (sal_inicial > 700){
                printf("\nBEM REMUNERADO.\n");
            }
        }

        else if (opcao == 4){
            printf("\nPROGRAMA FINALIZADO.\n");
        }

        else {
            printf("\nOPCAO INVALIDA.\n");
        }
    } while (opcao != 4);

    return 0;
}
