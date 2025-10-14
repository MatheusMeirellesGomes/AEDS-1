#include <stdio.h>
#include <stdlib.h>
int converte (int seg) //Recebe os segundos informados na main. 
{
    //Inicializar Variáveis.
    int minutos, horas, segundos, resto;

    //Calcular a conversão dos segundos.
    horas = seg / 3600; //Vai pegar os 24.000 e dividir por 3.600; 24.000 / 3.600 = 6 horas. 
    resto = (seg % 3600); //Vai pegar o resto da divisão acima, que é 2.400.
    minutos = resto / 60; //Vai pegar os 2.400 e dividir por 60; 2.400 / 60 = 40 minutos.
    segundos = resto % 60; //Vai pegar o resto da divisão acima, que é 0 segundos.

    //Imprimir resultado.
    printf("\nHoras = %d\n", horas);
    printf("\nMinutos = %d\n", minutos);
    printf("\n%d:%d:%d\n", horas, minutos, segundos);
}
int main()
{
    //Inicializar Variáveis.
    int segundos; 

    //Receber segundos.
    printf("Informe quantos segundos: "); //Entrada: 24.000 - vai mandar esse valor para a função. 
    scanf("%d", &segundos);

    //Acionar procedimento.
    converte(segundos);

    return 0;
}