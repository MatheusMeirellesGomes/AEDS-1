#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int idade, idade15 = 0, idade16_30 = 0, idade31_45 = 0;
    int idade46_60 = 0, idade60 = 0;
    float porcentagem15 = 0, porcetagem60 = 0;
    int cont;

    //Receber a idade de 8 pessoas.
    for (cont = 1; cont <= 8; cont++)
    {
        //Receber idade.
        printf("Informe a idade: ");
        scanf("%d", &idade);

        //Verificar quantas pessoas tem em cada faixa etária.
        if (idade <= 15){
            idade15++;
        }

        if (idade > 15 && idade <= 30){
            idade16_30++;
        }

        if (idade > 30 && idade <= 45){
            idade31_45++;
        }

        if (idade > 45 && idade <= 60){
            idade46_60++;
        }

        if (idade > 60){
            idade60++;
        }
    }

    //Verificar porcentagem de pessoas na primeira faixa etária em relação ao total de pessoas.
    porcentagem15 = (idade15 * 100) / (cont - 1);

    //Verificar porcentagem de pessoas na última faixa etária em relação ao total de pessoas.
    porcetagem60 = (idade60 * 100)  / (cont - 1);

    //Imprimir resultados.
    printf("\nTotal de pessoas ate 15 anos: %d\n", idade15);
    printf("Total de pessoas de 16 a 30 anos: %d\n", idade16_30);
    printf("Total de pessoas de 31 a 45 anos: %d\n", idade31_45);
    printf("Total de pessoas de 46 a 60 anos: %d\n", idade46_60);
    printf("Total de pessoas acima de 60 anos: %d\n", idade60);
    printf("\nPorcentagem de pessoas na primeira faixa etaria: %.2f%%\n", porcentagem15);
    printf("Porcentagem de pessoas na ultima faixa etaria: %.2f%%\n", porcetagem60);

    return 0;
}
