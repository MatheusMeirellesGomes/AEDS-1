#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int idade, qntd90 = 0, quantidade = 0;
    float peso, altura, media_idade, soma_idade = 0;
    float porcentagem; 

    //Receber informações de 10 pessoas.
    for (int cont = 1; cont <= 10; cont++)
    {
        //Receber dados.
        printf("\n%d pessoa:\n", cont);

        printf("Informe a idade: "); 
        scanf("%d", &idade); 
        printf("Informe o peso: "); 
        scanf("%f", &peso);
        printf("Informe a altura: "); 
        scanf("%f", &altura); 

        //Verificar quantidade de pessoas com mais de 90 kgs e menos de 1.50 de altura.
        if (peso > 90 && altura <1.50){
            qntd90++;
        }

        //Verificar a média de idade das dez pessoas.
        soma_idade += idade; 

        //Verificar a porcentagem de pessoaas com idade entre 10 e 30 anos que medem mais de 1.90.
        if (idade >= 10 && idade <= 30 && altura >1.90){
            quantidade++;
        }
    }

    //Calcular a média de idade.
    media_idade = soma_idade / 10; //A média de idade é a soma de todas as idade dividido pela quantidade de pessoas que é 10.

    //Calcular a porentagem.
    porcentagem = (quantidade * 100) / 10; //Quantidade de pessoas com os requisitos informados vezes 100 dividido pela quantidade total de pessoas. 

    //Imprimir resultados.
    if (qntd90 > 0){
        printf("\nQuantidade de pessoas com mais de 90 Kgs e menos de 1.50 de altura: %d\n", qntd90);
    }
    else {
        printf("\nNao tem pessoas com esses requisitos.\n");
    }

    printf("\nMedia de idade das 10 pessoas: %.2f\n", media_idade); 

    if (quantidade > 0){
        printf("\nPorcentagem de pessoas com idade entre 10 e 30 anos e que medem mais de 1.90: %.2f%%\n", porcentagem);
    }
    else {
        printf("\nNao existem pessoas com esse requisito.\n");
    }

    return 0;
}