#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int idade, opiniao, qntd_otimo = 0, qntd_regular = 0, qntd_bom = 0;
    float media_otimo, soma_otimo = 0, porcentagem;

    //Receber a idade e opnião de 15 pessoas.
    for (int cont = 1; cont <= 15; cont++){
        printf("%d pessoa:\n", cont);

        //Receber idade e opinião.
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("\n3- otimo / 2- bom / 1- regular.\n");
        printf("Nivel de opiniao: ");
        scanf("%d", &opiniao);

        //Verificar a média de idade das pessoas que responderam ótimo.
        if (opiniao == 3){
            soma_otimo += idade;
            qntd_otimo++;
        }

        //Verificar a quantidade de pessoas que responderam regular.
        if (opiniao == 1){
            qntd_regular++;
        }

        //Verificar porcentagem de pessoas que responderam bom entre todos os telespectadores.
        if (opiniao == 2){
            qntd_bom++;
        }
    }

    //Verificar se tem pessoas que colocaram ótimo como opinião.
    if (qntd_otimo > 0){
        //Calcular a média de idades.
        media_otimo = soma_otimo / qntd_otimo;
        printf("\nMedia de idade das pessoas que responderam otimo: %.2f\n", media_otimo);
    }
    else {
        printf("\nNao tem pessoas que deram otimo como opiniao.\n");
    }

    //Verificar se tem pessoas que responderam regular.
    if (qntd_regular > 0){
        printf("\nQuantidade de pessoas que responderam regular: %d\n", qntd_regular);
    }
    else {
        printf("\nNao tem pessoas que responderam regular.\n");
    }

    //Calcular porcentagem.
    porcentagem = (qntd_bom * 100.0) / 15;
    printf("\nPorcentagem de pessoas que responderam bom dentre todas as pessoas: %.2f%%\n", porcentagem);

    return 0;
}
