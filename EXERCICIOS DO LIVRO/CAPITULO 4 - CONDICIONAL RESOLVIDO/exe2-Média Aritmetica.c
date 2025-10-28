//Receba as três notas de um aluno e mostre a média aritmética, e a mensagem na tabela a seguir
//Para os alunos que ficaram no exame, calcule e mostre a nota que deverão tirar para ser aprovados,
//considerando que a média é 6. TABELA: 0 a 3 - REPROVADO; 3 a 7 - EXAME; 7 a 10 - APROVADO.
int main()
{
    //Inicializar as variáveis.
    float notaA, notaB, notaC, media;

    //Receber as notas:
    printf("Primeira Nota = ");
    scanf("%f", &notaA);
    printf("Segunda Nota = ");
    scanf("%f", &notaB);
    printf("Terceira Nota = ");
    scanf("%f", &notaC);

    //Calcular e mostrar a média aritmética.
    media = (notaA + notaB + notaC) / 3; //Media Aritmética é a soma das notas, divido pela qntd de notas.
    printf("\nMedia = %.2f\n", media);

    //Avaliar o conceito de acordo com a tabela.
    if (media >= 7 && media <= 10)
    {
        printf("\nAPROVADO\n");
    }
    else if (media >= 3 && media < 7)
    {
        printf("\nEXAME\n");
    }
    else if (media >= 0 && media < 3)
    {
        printf("\nREPROVADO\n");
    }
    else
    {
        printf("\nMedia Invalida\n");
    }

    return 0;
}
