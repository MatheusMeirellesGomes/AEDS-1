//Receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela do livro.
int main()
{
    //Inicializar Variáveis.
    float n1, n2, media;

    //Receber notas.
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    //Calcular e mostrar a média aritmética.
    media = (n1 + n2) / 2;

    printf("\nMedia Aritmetica = %.2f\n", media);

    if (media >= 0 && media < 3){
        printf("\nReporvado!\n");
    }
    else if (media >= 3 && media < 7){
        printf("\nExame!\n");
    }
    else if (media >= 7 && media <= 10){
        printf("\nAprovado!\n");
    }

    return 0;
}
