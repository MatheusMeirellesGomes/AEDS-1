#include <stdio.h>
#include <stdlib.h>
//Faça uma função para encontrar a soma dos dígitos de um número usando recursão. Faça um programa principal que leia um número, acione a função e exiba o 
//resultado gerado.
int somaDigitos(int N)
{
    if (N == 0) {
        return 0; //Caso base. 
    }
    else {
       return (N % 10) + somaDigitos(N / 10); //Retorna o resto da divisao de N por 10 mais N divido por 10.
    }
}
int main()
{
    //Inicializar Variáveis.
    int num; 

    //Receber número.
    printf("Informe um numero: "); 
    scanf("%d", &num); 

    //Acionar função e imprimir soma, passando o valor de num para N. 
    printf("\nSoma dos digitos = %d\n", somaDigitos(num)); 

    return 0;
}