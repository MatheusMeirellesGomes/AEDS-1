#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int idade;
    float altura, media_altura, soma_altura = 0, qntd_idade = 0;

    //Receber primeira idade para verificar se ela é zero ou não.
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    //Executar enquanto tiver idade válida.
    while (idade > 0)
    {
        //Receber altura.
        printf("Informe sua altura: ");
        scanf("%f", &altura);

        //Verificar média de altura das pessoas com mais de 50 anos.
        if (idade > 50){
            soma_altura += altura;
            qntd_idade++;
        }

        //Receber idade novamente
        printf("\nInforme sua idade: ");
        scanf("%d", &idade);
    }
    //Verificar se existem pessoas com mais de 50 anos.
    if (qntd_idade > 0){
        media_altura = soma_altura / qntd_idade;
    }
    else {
        media_altura = 0;
    }

    //Imprimir resultado.
    printf("\nMedia das alturas das pessoas com mais de 50 anos: %.2f\n", media_altura);

    return 0;
}