#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int opcao, peso1, peso2, peso3;
    float nota1, nota2, nota3;
    float mediaA, mediaP;

    //Receber opção do usuário.
    printf("MENU DE OPCOES:\n");
    printf("\n1- Media Aritmetica.\n2- Media Ponderada.\n3- Sair.\n");
    printf("\nInforme uma opcao: ");
    scanf("%d", &opcao);

    //Executar o programa enquanto a opção 3 (sair) não for selecionada.
    while (opcao != 3)
    {
        //Verificar se a primeira opçao foi escolhida.
        if (opcao == 1){
            //Receber duas notas.
            printf("\nInforme a primeira nota: ");
            scanf("%f", &nota1);

            printf("Informe a segunda nota: ");
            scanf("%f", &nota2);

            //Calcular média aritmética.
            mediaA = (nota1 + nota2) / 2;

            printf("\nMedia Aritmetica = %.2f\n", mediaA);
        }

        //Verificar se a segunda opção foi escolhida.
        if (opcao == 2){
            //Receber 3 notas e 3 pesos.
            printf("Informe a primeira nota: ");
            scanf("%f", &nota1);

            printf("Informe a segunda nota: ");
            scanf("%f", &nota2);

            printf("Informe a terceira nota: ");
            scanf("%f", &nota3);

            printf("Informe o peso1: ");
            scanf("%d", &peso1);

            printf("Informe o peso2: ");
            scanf("%d", &peso2);

            printf("Informe o peso3: ");
            scanf("%d", &peso3);

            //Calcular a média ponderada.
            mediaP = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

            printf("\nMedia Ponderada = %.2f\n", mediaP);
        }

        //Receber menu de opções novamente até que a opção 3 seja escolhida.
        printf("\n1- Media Aritmetica.\n2- Media Ponderada.\n3- Sair.\n");
        printf("\nInforme outra opcao: ");
        scanf("%d", &opcao);
    }

    return 0;
}