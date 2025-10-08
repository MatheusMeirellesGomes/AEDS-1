#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int codigo, total_nulo = 0, total_branco = 0, qntdVotos = 0;
    int total1 = 0, total2 = 0, total3 = 0, total4 = 0;
    float porcentagem_nulos = 0, porcentagem_brancos = 0;

    //Receber o código que o usuário irá votar.
    printf("ELEICAO.\n");
    printf("\n1- Matheus\n2- Rafael\n3- Lucas\n4- Tulio\n5- Voto nulo\n6- Voto branco\n");
    printf("\nInforme seu voto: ");
    scanf("%d", &codigo);

    while (codigo != 0)
    {
        if (codigo >= 1 && codigo <= 6){
            //Verificar o código que o usuário votou.
            switch (codigo)
            {
                case 1:
                    total1++;
                    break;
                case 2:
                    total2++;
                    break;
                case 3:
                    total3++;
                    break;
                case 4:
                    total4++;
                    break;
                case 5:
                    total_nulo++;
                    break;
                case 6:
                    total_branco++;
                    break;
            }
            //Verificar a quantidade total de votos.
            qntdVotos++;
        }
        else {
            printf("\nCODIGO INVALIDO!\n");
        }

        //Receber novamente a opção de voto pro usuário.
        printf("\nInforme seu voto: ");
        scanf("%d", &codigo);
    }


    //Calcular porcentagens apenas se houver votos válidos
    if (qntdVotos > 0){
        porcentagem_nulos = (total_nulo * 100.0) / qntdVotos;
        porcentagem_brancos = (total_branco * 100.0) / qntdVotos;
    }

    //Imprimir resultados.
    printf("\nTotal de votos: %d\n", qntdVotos);
    printf("\nTotal de votos para Matheus: %d\n", total1);
    printf("Total de votos para Rafael: %d\n", total2);
    printf("Total de votos para Lucas: %d\n", total3);
    printf("Total de votos para Tulio: %d\n", total4);
    printf("Total de votos nulos: %d\n", total_nulo);
    printf("Total de votos brancos: %d\n", total_branco);
    printf("Porcentagem de votos nulos em em relacao ao total de votos: %.2f%%\n", porcentagem_nulos);
    printf("Porcentagem de votos brancos em relacao ao total de votos: %.2f%%\n", porcentagem_brancos);
}
