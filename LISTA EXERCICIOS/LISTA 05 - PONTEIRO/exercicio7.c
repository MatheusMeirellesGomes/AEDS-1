#include <stdio.h>
#include <stdlib.h>
//Escreva uma função chamada divisores que receba um número inteiro n por valor e dois números inteiros max e min por referência (ponteiro), retorna 0 se
//n for primo e 1 caso contrário. Se n não for primo, as variáveis max e min devem assumir valores do maior e menor divisores inteiros de n, respectivamente,
//desconsidere o número 1 e o próprio número n.
int divisores (int n, int *max, int *min) //Recebendo n por valor e max e min por referência (ponteiro).
{
    //Inicializar Variáveis.
    int contador = 0; //Contador de divisores.

    //Percorrer todos os número de 2 até n-1.
    for (int i = 2; i <= n / 2; i++) //Nao precisa ir até n, so até a metade de n.
    {
        //Verficar se i é divisor de n.
        if (n % i == 0) { //Se o resto da divisão de n por i for 0, i é o divisor de n.
            contador++; //Incrementa o contador.

            //Verificar o maior e menor divisor.
            if (contador == 1) { //Quando o primeiro divisor for encontrado.
                *min = i; //Atribui o valor de i a min (menor divisor).
            }
            else {
                *max = i; //Atribui o valor de i a max (maior divisor).
            }
        }
    }

    //Verificar se o número é primo ou não.
    if (contador == 0) { //Se o número de divisores for 0, n é primo.
        return 0;
    }
    else {
        return 1; //Se o número de divisores for maior que 0, n não é primo.
    }
}
int main()
{
    //Inicializar Variáveis.
    int num, maximo = 0, minimo = 0; //Máximmo e mínimo inicializados com 0.

    //Receber valor.
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    //Acionar a função.
    int resultado = divisores (num, &maximo, &minimo); //Passando o endereço de máximo e mínimo para a função, já que se trata de ponteiros.

    //Verificar o resultado da função.
    if (resultado == 0) { //Se o retorno da função for 0, n é primo.
        printf("\nO numero %d eh primo.\n", num);
    }
    else { //Cask o retorno da função seja 1, n não é primo.
        printf("\nO numero %d nao eh primo.\n", num);
        printf("\nMaior Divisor: %d - Menor Divisor: %d\n", maximo, minimo);
    }

    return 0;
}
