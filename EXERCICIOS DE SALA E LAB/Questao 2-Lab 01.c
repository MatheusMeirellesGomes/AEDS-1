//Faça um programa que receba N números e mostre e calcule:
//a) quantidade de números pares.
//b) quantidade de números múltiplos de 4.
//c) Quantidade de números ímpares.
int main()
{
    //Inicializar Variáveis.
    int N, pares = 0, impar = 0, multiplo4 = 0;

    //Receber informações.
    printf("Informe quantidade de numeros colocados: ");
    scanf("%d", &N);

    //Verificar a quantidade de pares, ímpares e múltiplos de 4.
    for (int cont = 1; cont <= N; cont++)
    {
        //Calcular para achar quantidade de par.
        if (cont % 2 == 0)
        {
            pares++;
        }
        else
        {
            impar++;
        }

        //Verificar se é múltiplo de 4.
        if (cont % 4 == 0)
        {
            multiplo4++;
        }
    }

    //Imprimir resultados.
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros multiplos de 4: %d\n", multiplo4);
    printf("Quantidade de numeros impares: %d\n", impar);

    return 0;

}
