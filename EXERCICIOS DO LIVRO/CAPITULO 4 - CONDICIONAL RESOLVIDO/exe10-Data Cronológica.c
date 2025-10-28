//Determine a data cronologicamente entre duas datas fornecidas pelo usuário. Serão três valores inteiros, em que o primeiro representa
//o dia, o segundo, o mês e o terceiro, o ano.

int main ()
{
    //Inicializar variáveis. (Três valores inteiros)
    int dia1, mes1, ano1, dia2, mes2, ano2;

    //Receber Informações da primeira data com as três informações.
    printf("Digite a primeira data:\n");
    printf("Dia: ");
    scanf("%d", &dia1);
    printf("Mes: ");
    scanf("%d", &mes1);
    printf("Ano: ");
    scanf("%d", &ano1);

    //Receber informações da segunda data com as três informações.
    printf("\nDigite a segunda data:\n");
    printf("Dia: ");
    scanf("%d", &dia2);
    printf("Mes: ");
    scanf("%d", &mes2);
    printf("Ano: ");
    scanf("%d", &ano2);

    //Verificar a ordem cronológica de acordo com o enunciado.
    //CVerificar qual ano é maior primeiro.
    if (ano1 < ano2)
    {
        printf("\nOrdem Cronologica: %02d/%02d/%d - %02d/%02d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
    }
    else if (ano2 < ano1)
    {
        printf("\nOrdem Cronologica: %02d/%02d/%d - %02d/%02d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
    }

    //Verificar qual mês é maior segundamente.
    else if (mes1 < mes2)
    {
        printf("\nOrdem Cronologica: %02d/%02d/%d - %02d/%02d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
    }
    else if (mes2 < mes1)
    {
        printf("Ordem Cronologica: %02d/%02d/%d - %02d/%02d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
    }
    //Verificar qual dia é maior por último.
    else if (dia1 < dia2)
    {
        printf("\nOrdem Cronologica: %02d/%02d/%d - %02d/%02d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
    }

    else if (dia2 < dia1)
    {
        printf("\, dia2, mes2, ano2nOrdem Cronologica: %02d/%02d/%d - %02d/%02d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
    }
    //Verificar se as datas não são iguais.
    else
    {
        printf("\nAs datas sao iguais.");
    }

    return 0;

}
