#include <stdio.h>
#include <stdlib.h>
//Faça uma função recursiva que calcule o n-esimo termo de Fibonacci.
int fibonacci(int n)
{
    //Retornar o caso base da recursão.
    if (n == 0 || n == 1){
        return 1; //Porque o primeiro e o segundo termo de fibonacci é igual a um.
    }
    else {
        return fibonacci (n - 1) + fibonacci (n - 2); //Vai retornar o numero informado menos um, mais o numero informado menos dois, até chegar no caso base.
    }
}
int main()
{
    //Inicializar Variáeis.
    int num;

    //Receber número.
    printf("Informe um numero pra sequencia de fibonacci: ");
    scanf("%d", &num);

    //Imprimir o termo informada e chamar a recursão.
    printf("\nO termo %d da sequencia de Fibonacci = %d\n", num, fibonacci(num));

    return 0;
}
