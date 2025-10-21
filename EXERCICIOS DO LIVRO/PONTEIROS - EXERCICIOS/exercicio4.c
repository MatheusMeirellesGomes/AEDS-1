#include <stdio.h>
#include <stdlib.h>
//Como é procedimento e não retorna nada, usa-se void. 
void converte (int *seg) //Recebe o endereço dos segundos informados na main. 
{
    //Inicializar Variáveis.
    int minutos, horas, segundos, resto;

    //Calcular a conversão dos segundos.
    horas = *seg / 3600; //Vai pegar os 24.000 e dividir por 3.600; 24.000 / 3.600 = 6 horas. 
    resto = (*seg % 3600); //Vai pegar o resto da divisão acima, que é 2.400.
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
    int *ptrseg  = &segundos;

    //Receber segundos.
    printf("Informe quantos segundos: "); //Entrada: 24.000 - vai mandar esse valor para a função. 
    scanf("%d", ptrseg); //Indicar o endereço de segundos inicializado com malloc porque é lá que vai ser armazenado o valor. 

    //Acionar procedimento.
    converte(ptrseg); //Passando o endereço de segundos pro procedimento. 

    //Informar endereço e conteúdo de segundos.
    printf("\nEndereco de Segundos: %p\n", ptrseg);
    printf("Conteudo de Segundos: %d\n", *ptrseg);

    return 0;
}