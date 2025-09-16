#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem crescente.
// Faça um programa que leia N conjuntos de 3 valores e acione o procedimento para cada conjunto. (N deve ser lido do teclado)
void ordemCrescente(int n1, int n2, int n3)
{
    //Verificar a ordem crescente.
    if (n1 <= n2 && n1 <= n3) { // n1 é o menor
        if (n2 <= n3) {
            printf("%d %d %d\n", n1, n2, n3);
        }
        else {
            printf("%d %d %d\n", n1, n3, n2);
        }
    }

    else if (n2 <= n1 && n2 <= n3) { // n2 é o menor
        if (n1 <= n3) {
            printf("%d %d %d\n", n2, n1, n3);
        }
        else {
            printf("%d %d %d\n", n2, n3, n1);
        }
    }

    else { // n3 é o menor
        if (n1 <= n2) {
            printf("%d %d %d\n", n3, n1, n2);
        }
        else {
            printf("%d %d %d\n", n3, n2, n1);
        }
    }
}

//Fazer o int main recebendo N números e acionando o procedimento para cada conjunto.
int main()
{
    //Inicializar Variáveis.
    int N;
    int num1, num2, num3; //Para receber os novos valores, para depois trocar quando acionar o procedimento. 

    //Receber valor de N. (Quantas conjuntos vão ser preenchidos).
    printf("Quantos conjuntos terao o programa: ");
    scanf("%d", &N);

    //Acionar o procedimento.
    for (int cont = 1; cont <= N; cont++){
        //Receber os 3 números inteiros.
        printf("\nInforme os tres numeros: ");
        scanf("%d %d %d", &num1, &num2, &num3);
        ordemCrescente(num1, num2, num3);
    }

    return 0;
}
