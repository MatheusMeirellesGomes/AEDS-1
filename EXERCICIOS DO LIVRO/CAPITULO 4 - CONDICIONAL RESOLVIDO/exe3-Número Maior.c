////Receba dois números e mostre o maior.
int main()
{
    //Indicar variáveis.
    int n1, n2;

    //Receber números.
    printf("Primeiro Numero: ");
    scanf("%d", &n1);
    printf("Segundo Numero: ");
    scanf("%d", &n2);

    //Verificar qual é o maior e imprimir
    if (n1 > n2)
    {
        printf("\nNumero um eh maior\n");
    }
    else if(n2 > n1)
    {
        printf("\nNumero dois eh maior\n");
    }
    else if (n1 == n2)
    {
        printf("\nOs numeros sao iguais\n");//Adicionar para verificar, esperando que o usuário possa colocar números iguais.
    }

    return 0;
}
