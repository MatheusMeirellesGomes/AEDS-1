#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar variáveis
    int idade, maior_idade = 0, menor_idade = 0, qntd_mulher = 0, qntd_pessoas = 0;
    float salario, soma_salario = 0, media_salario, menor_salario = 0;
    char sexo;

    //Variáveis para guardar idade e sexo da pessoa com menor salário
    int idade_menor = 0;
    char sexo_menor = ' '; 

    //Receber primeira idade para verificar se é maior que 0.
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    while (idade > 0)
    {
        //Receber sexo e salário de cada pessoa. 
        printf("Informe seu sexo [M- masculino / F- feminino]: ");
        scanf(" %c", &sexo);

        printf("Informe seu salario: ");
        scanf("%f", &salario);

        //Somar salários e contar quantidade de pessoas. 
        soma_salario += salario;
        qntd_pessoas++;

        //Se for a primeira pessoa, inicializar menor idade, menor salário, idade_menor e sexo_menor
        if (qntd_pessoas == 1) {
            menor_idade = idade;
            menor_salario = salario;
            idade_menor = idade;
            sexo_menor = sexo;
        }

        //Verificar maior idade.
        if (idade > maior_idade) {
            maior_idade = idade; //Atualizar maior idade.
        }

        //Verificar menor idade.
        if (idade < menor_idade) {
            menor_idade = idade; //Atualiza menor idade.
        }

        //Verificar menor salário. 
        if (salario < menor_salario) {
            menor_salario = salario; //Atualiza o menor salário.
            idade_menor = idade;     //Guarda idade da pessoa com menor salário.
            sexo_menor = sexo;       //Guarda sexo da pessoa com menor salário.
        }

        //Contar mulheres com salário até 200
        if ((sexo == 'F' || sexo == 'f') && salario <= 200)
            qntd_mulher++;

        //Receber próxima idade dentro do loop.
        printf("Informe sua idade: ");
        scanf("%d", &idade);
    }

    //Calcular e imprimir resultados.
    if (qntd_pessoas > 0) {
        media_salario = soma_salario / qntd_pessoas;

        printf("\nMedia dos salarios do grupo: R$ %.2f\n", media_salario);
        printf("Maior idade do grupo: %d\n", maior_idade);
        printf("Menor idade do grupo: %d\n", menor_idade);
        printf("Menor salario: R$ %.2f - Idade: %d - Sexo: %c\n", menor_salario, idade_menor, sexo_menor);

        //Verificar se tem mulheres com salário até 200.
        if (qntd_mulher > 0) {
            printf("Quantidade de mulheres com salario ate 200: %d\n", qntd_mulher);
        }
        else {
            printf("Nao tem mulheres com salario ate 200.\n");
        }
    }
    //Caso não tenha pessoas válidas
    else {
        printf("\nNenhuma pessoa válida foi digitada.\n");
    }

    return 0;
}