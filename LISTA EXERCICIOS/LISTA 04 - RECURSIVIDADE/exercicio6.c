#include <stdio.h>
#include <stdlib.h>
int contaDigitos(int n)
{
    //Verificar caso base e recursão.
    if (n == 0){
        return 0;
    }
    else {
        return 1 + contaDigitos (n / 10);
    }

}
int main()
{
    //Inicializar Variáveis.
    int num;

    //Receber num.
    printf("Informe um numero: ");
    scanf("%d", &num);

    //Acionar recursão.
    printf("\nQuantos digitos: %d\n", contaDigitos(num));

    return 0;
}
