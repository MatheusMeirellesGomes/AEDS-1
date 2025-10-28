#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int codigo, num_hrs, qntdM = 0, qntdF = 0;
    float sal_liquido, media_ProfM, mediaProfF, desconto = 0;
    float somaSalM = 0, somaSalF = 0, sal_bruto;
    char sexo;

    //Receber código para verficiar o número.
    printf("Informe o codigo: ");
    scanf("%d", &codigo);

    do
    {
        if (codigo == 9999){
            printf("\nPROGRAMA ENCERRADO!\n");
        }
        else {
            //Receber informações.
            printf("Informe o sexo: ");
            scanf(" %c", &sexo);

            printf("Informe o numero de horas aulas dadas: ");
            scanf("%d", &num_hrs);

            //Calcular o salário bruto.
            sal_bruto = num_hrs * 30;

            //Verificar o sexo masculino para conferir dados.
            if (sexo == 'M') {
                //Calcular desconto, salário líquido e somar os salários liquido e a quantidade de salários líquidos masculinos.
                desconto = sal_bruto * 0.10;
                sal_liquido = sal_bruto - desconto;
                somaSalM += sal_liquido;
                qntdM++;
            }

            //Verficar o sexo feminino para conferir dados.
            if (sexo == 'F') {
                //Calcular o desconto, o salário líquido, a soma dos salários líquidos femininos, a quantidade de salários femininos.
                desconto = sal_bruto * 0.05;
                sal_liquido = sal_bruto - desconto;
                somaSalF += sal_liquido;
                qntdF++;
            }
            //Imprimir resultados.
            printf("\nCodigo: %d\n", codigo);
            printf("Salario Bruto: %.2f\n", sal_bruto);
            printf("Salario Liquido: %.2f\n", sal_liquido);

            //Perdir o código novamente caso o outro seja válido para entrar no programa.
            printf("Informe o codigo: ");
            scanf("%d", &codigo);
        }

    } while (codigo != 9999);

    //Verificar se existem professores homens.
    if (qntdM == 0){
        printf("\nNao existem professores do sexo masculino.");
    }
    else{
        media_ProfM  = somaSalM / qntdM;
        printf("\nMedia do salario dos professores: %.2f\n", media_ProfM);
    }

    //Verificar se existem professores mulheres.
    if (qntdF == 0){
        printf("\nNao existem professores do sexo feminino.\n");
    }
    else {
        mediaProfF = somaSalF / qntdF;
        printf("\nMedia do salario das professoras: %.2f\n", mediaProfF);
    }

    return 0;
}
