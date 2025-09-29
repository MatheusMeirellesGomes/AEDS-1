#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, if
//exibe qual é o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado
//de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes
//definições:  • Triângulo Equilátero: os comprimentos dos 3 lados são iguais; • Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.
//• Triângulo Escaleno: os comprimentos dos 3 lados são diferentes. Faça um programa que leia um número indeterminado (até lado negativo) de triângulos
//(valores dos 3 lados) e para cada triângulo, acione o procedimento.
void verificaTriangulo(float lado1, float lado2, float lado3)
{
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) //Verificar se pode ser triãngulo.
    {
        if (lado1 == lado2 && lado2 == lado3){ //Se os três lados forem iguais.
            printf("\nTRIANGULO EQUILATERO.\n");
        }
        else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3){ //Se apenas dois lados forem iguais.
            printf("\nTRIANGULO ISOSCELES.\n");
        }
        else {
            printf("\nTRIANGULO ESCALENO.\n"); //Se os três lados forem diferentes.
        }
    }
    else {
        printf("\nNAO FORMA TRIANGULO.\n");
    }
}
int main()
{
    //Inicializar Variáveis.
    float x, y, z;

    //Acionar procedimento. 
    verificaTriangulo(x, y, z); 

    return 0;
}
