//Faça um programa que receba três números e mostre o maior.
int main()
{
    //Inicializar Variáveis.
    float n1, n2, n3, maior;

    //Receber Números.
    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);

    printf("Informe o segundo numero: ");
    scanf("%f", &n2);

    printf("Informe o terceiro numero: ");
    scanf("%f", &n3);

    //Verificar o maior numero.
    if (n1 > n2){
        if (n1 > n3){
            maior = n1;
        }
    }
    else if (n2 > n1){
        if (n2 > n3){
            maior = n2;
        }
    }
    else if (n3 > n1){
        if (n3 > n2){
            maior = n3;
        }
    }
    else{
        printf("\nOs tres numeros sao iguais.\n");
    }

    //Imprimir maior número.
    printf("\nMaior Numero: %.2f\n", maior);

    return 0;

}
