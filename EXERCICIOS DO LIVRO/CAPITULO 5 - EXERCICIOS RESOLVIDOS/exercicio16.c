#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    float base, altura, area;

    //Faça até que base e altura seja maior que zero.
    do
    {

        //Receber base e altura.
        printf("Informe a base: ");
        scanf("%f", &base);

        if (base <= 0){
            printf("\nPrograma Encerrado.\n");
        }
        else {
            printf("Informe a altura: ");
            scanf("%f", &altura);

            //Calcular área.
            area = (base * altura) / 2;

            //Imprimir área.
            printf("\nArea = %.2f\n", area);

            printf("\n");
        }

    } while (base > 0 && altura > 0);

    return 0;
}
