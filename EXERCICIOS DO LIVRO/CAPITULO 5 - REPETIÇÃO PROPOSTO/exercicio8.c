#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int idade, qntd50_60 = 0, soma_idade = 0, qntd_ruiva = 0, qntdAltura = 0, qntd_azul = 0;
    float peso, altura, media_idade, porcentagem;
    char olhos, cabelos;

    printf("PESSOAS:\n");

    //Receber informações de 6 pessoas.
    for (int cont = 1; cont <= 6; cont++)
    {
        //Receber informações.
        printf("\n%d pessoa:\n", cont);

        printf("Informe a idade: ");
        scanf("%d", &idade);

        printf("Informe o peso: ");
        scanf("%f", &peso);

        printf("Informe a altura: ");
        scanf("%f", &altura);

        printf("AZUL - A / VERDE - V / PRETO - P / CASTANHO - C");
        printf("\nInforme a cor dos olhos: ");
        scanf(" %c", &olhos);

        printf("PRETO - P / CASTANHO - C / LOIRO - L / RUIVO - R");
        printf("\nInforme a cor do cabelo: ");
        scanf(" %c", &cabelos);

        //Verificar quantidade de pessoas com idade superior a 50 e peso a inferior 60.
        if (idade > 50 && peso < 60){
            qntd50_60++;
        }

        //Verificar idade média das pessoas com altura inferior a 1.50.
        if (altura < 1.50){
            soma_idade += idade;
            qntdAltura++;
        }

        //Verificar porcentagem de pessoas com olhos azuis.
        if (olhos == 'A'){
            qntd_azul++;
        }

        //Verificar quantidade de pessoas ruivas e que não possuem olhos azuis.
        if (cabelos == 'R' && olhos != 'A'){
            qntd_ruiva++;
        }
    }

    //Calcular idade média.
    if (qntdAltura > 0){
        media_idade = soma_idade / qntdAltura;
    }
    else {
        printf("\nNao existem pessoas com altura menor de 1.50.\n");
    }

    //Calcular porcentagem.
    porcentagem = (qntd_azul * 100.0) / 6.0;

    //Imprimir resultados.
    printf("\nQuantidadde de pessoas com idade superior a 50 e peso inferior a 60: %d\n", qntd50_60);
    printf("Idade media das pessoas com menos de 1.50: %.2f\n", media_idade);
    printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n", porcentagem);
    printf("Quantidade de pessoas ruivas e que nao possuem olhos azuis: %d\n", qntd_ruiva);

    return 0;
}
