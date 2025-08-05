//Calcular a media aritmética entre duas notas de um aluno e mostrar sua situação, 
// que poderá ser aprovado ou reporvado. 
int main()
{
    //inicializar as duas notas
    int nota1, nota2, media;

    //receber as duas notas
    printf("Digite as duas notas: ");
    scanf("%d %d", &nota1, &nota2);

    //media aritmética é a soma das duas notas dividas por 2
    media = (nota1 + nota2) / 2;
    printf("Media eh igual a: %d", media);

    //verificar quem esta aprovado ou nao
    if ( media >= 7)
    {
        printf("\nAprovado");
    }
    else
    {
        printf("\nReprovado");
    }
    return 0;
}
