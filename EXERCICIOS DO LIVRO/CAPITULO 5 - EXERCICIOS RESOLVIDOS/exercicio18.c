#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Inicializar Variáveis.
    float num, quadrado, rai_quad, raiz_cubica;

    //Apenas executar o código enquanto não houver números negativos.
    do
    {
        //Receber números.
        printf("Informe um numero: ");
        scanf("%f", &num);

        //Verificar se ele é menor que zero.
        if (num <= 0){
            printf("\nPrograma Invalido.\n");
        }
        else {
            //Calcular potência, raiz quadrada, e raiz cúbica.
            quadrado = pow(num, 2);
            rai_quad = sqrt(num);
            raiz_cubica = pow(num, 1.0/3.0);

            //Imprimir resultados.
            printf("\nNumero elevado ao quadrado = %.2f\n", quadrado);
            printf("\nRaiz Quadrada do numero = %.2f\n", rai_quad);
            printf("\nRaiz Cubica do numero = %.2f\n", raiz_cubica);
        }
    } while (num > 0);

    return 0;
}
