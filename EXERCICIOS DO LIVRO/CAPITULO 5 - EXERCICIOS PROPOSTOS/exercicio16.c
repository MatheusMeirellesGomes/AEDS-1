#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int idade, qntd_idade = 0;
    float mediaIdade, somaIdade = 0;

    //Receber primeira idade para verificar se ela é zero.
    printf("Informe idade: ");
    scanf("%d", &idade);

    //Verificar se a idade é maior que zero.
    while (idade > 0)
    {
        //Somar idades para calcular a média.
        somaIdade += idade;
        qntd_idade++;

        //Receber mais idade até que uma inválida seja informada.
        printf("Informe idade: ");
        scanf("%d", &idade);
    }

    if (qntd_idade > 0){
        //Calcular média de idade.
        mediaIdade = somaIdade / qntd_idade;
    }
    else {
        mediaIdade = 0;
    }

    //Imprimir resultado final.
    printf("\nMedia das idades digitadas: %.2f\n", mediaIdade);

    return 0;
}