#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Inicializar variáveis.
    int a, b, c, d;

    //Repetir para 5 grupos de 4 valores.
    for (int cont = 1; cont <= 5; cont++)
    {
        //Ler os 4 valores.
        printf("\nGRUPO %d:\n", cont); //Vai mostrar qual é o grupo. 

        //Receber valores para cada letra. 
        printf("Digite um numero: ");
        scanf("%d", &a);
        printf("Digite um numero: ");
        scanf("%d", &b);
        printf("Digite um numero: ");
        scanf("%d", &c);
        printf("Digite um numero: ");
        scanf("%d", &d);

        //Mostrar ordem lida.
        printf("\nOrdem lida: %d %d %d %d\n", a, b, c, d);

        
        //Comparar a com os outros
        if (a > b){
            a = a + b;  //a recebe a soma de a e b
            b = a - b;  //b recebe o valor original de a
            a = a - b;  //a recebe o valor original de b
        }

        if (a > c){
            a = a + c;  //a recebe a soma de a e c
            c = a - c;  //c recebe o valor original de a
            a = a - c;  //a recebe o valor original de c
        }

        if (a > d){
            a = a + d;  //a recebe a soma de a e d
            d = a - d;  //d recebe o valor original de a
            a = a - d;  //a recebe o valor original de d
        }

        //Comparar b com os outros (depois de a estar na posição certa)
        if (b > c){
            b = b + c;  //b recebe a soma de b e c
            c = b - c;  //c recebe o valor original de b
            b = b - c;  //b recebe o valor original de c
        }

        if (b > d){
            b = b + d;  //b recebe a soma de b e d
            d = b - d;  //d recebe o valor original de b
            b = b - d;  //b recebe o valor original de d
        }

        //Comparar c e d
        if (c > d){
            c = c + d;  //c recebe a soma de c e d
            d = c - d;  //d recebe o valor original de c
            c = c - d;  //c recebe o valor original de d
        }

        //Mostrar em ordem crescente.
        printf("\nOrdem crescente: %d %d %d %d\n", a, b, c, d);

        //Mostrar em ordem decrescente.
        printf("\nOrdem decrescente: %d %d %d %d\n", d, c, b, a);
    }

    return 0;
}
