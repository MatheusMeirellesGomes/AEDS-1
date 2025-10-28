//Mostre a data e hora do sistema nos seguintes formatos
//DD/MM/AAAA - mês por extenso e hora em minuto.
int main()
{
    //Inicializar variáveis
    int dia, mes, ano, hora, minuto;

    //Receber as informações de dia, mês e ano. 
    printf("Digite o dia de hoje: ");
    scanf("%d", &dia);
    printf("Digite o mes atual: ");
    scanf("%d", &mes);
    printf("Digite o ano atual (AAAA): ");
    scanf("%d", &ano);

    //Receber a hora.
    printf("Digite a hora atual (0-23): ");
    scanf("%d", &hora);

    //Transformar em minuto.
    minuto = hora * 60;

    if (mes == 1)
    {
        printf("\nJaneiro.");
    }
    else if (mes == 2)
    {
        printf("\nFevereiro.");
    }
    else if (mes == 3)
    {
        printf("\nMarco.");
    }
    else if (mes == 4)
    {
        printf("\nAbril.");
    }
    else if (mes == 5)
    {
        printf("\nMaio.");
    }
    else if (mes == 6)
    {
        printf("\nJunho.");
    }
    else if (mes == 7)
    {
        printf("\nJulho");
    }
    else if (mes == 8)
    {
        printf("\nAgosto.");
    }
    else if (mes == 9)
    {
        printf("\nSetembro.");
    }
    else if (mes == 10)
    {
        printf("\nOutubro.");
    }
    else if (mes == 11)
    {
        printf("\nNovembro.");
    }
    else if (mes == 12)
    {
        printf("\nDezembro.");
    }
    else
    {
        printf("\nMes Invalido.");
    }

    //Imprimir as informações juntas.
     printf("\n%02d/%02d/%d - %d minutos totais", dia, mes, ano, minuto); //Imprimir resultado junto conforme solicitado.
     //O %02d é basicamente uma forma de deixaar mais estético, de colocar o zero na frente do número e indicar que tem 2 casas de número 
     //inteiro. 
    return 0;
}
