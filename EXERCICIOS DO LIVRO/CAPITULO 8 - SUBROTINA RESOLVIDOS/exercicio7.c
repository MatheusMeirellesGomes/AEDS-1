#include <stdio.h>
#include <stdlib.h>
float verifica (float n1, float n2, float n3, char tipo) //Recebe as três notas e a letra informada na main. 
{
    //Inicializar Variáveis.
    float media; 

    //Verificar a letra informada para fazer o cálculo e mandar a resposta pra main.
    if (tipo == 'A'){ 
        media = (n1 + n2 + n3) / 3;
    }
    else {
        media = (n1 * 5 + n2 * 3 + n3 * 2) / (5 + 3 + 2);
    }

    return media; //Retorna a média calculada, e salva na variável resultado da main. 
}
int main()
{
    //Inicializar Variáveis.
    float nota1, nota2, nota3;
    char letra;

    //Receber notas.
    printf("Informe a primeira nota: "); 
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    //Receber letra enquanto
    do {
        printf("Media Aritmetica - 'A' / Media Ponderada - 'P'.");
        printf("\nInforme um letra: ");
        scanf(" %c", &letra);
    } while(letra != 'A' && letra != 'P');

    //Acionar função.
    float resultado = verifica (nota1, nota2, nota3, letra); //Vai mandar as 3 notas e a letra para a função, e depois 
    //de calcular a média, a variável resultado vai receber o valor retornado pela função.

    //Verificar letra.
    if (letra == 'A'){ 
        printf("\nMedia Aritmetica = %.2f\n", resultado); //Se a letra informada for A, exibe a média aritmética. 
    }
    else {
        printf("\nMedia Ponderada = %.2f\n", resultado); //Se a letra informada for P, exibe a média ponderada. 
    }

    return 0;
}