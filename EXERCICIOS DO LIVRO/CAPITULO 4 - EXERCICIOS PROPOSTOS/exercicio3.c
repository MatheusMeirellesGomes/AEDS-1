//Faça um programa que receba dois números e mostre o menor.
int main()
{
    //Inicializar Variáveis.
    float n1, n2, maior;

    //Receber informações.
    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);

    printf("Informe o segundo numero: ");
    scanf("%f", &n2);

    //Verificar qual é o maior número.
    if (n1 > n2){
        maior = n1;
    }
    else if (n2 > n1){
        maior = n2;
    }
    else {
        printf("\nNumeros sao iguais.\n");
    }

    //Imprimir maior número.
    printf("\nMaior numero: %.2f\n", maior);

    return 0;
}
