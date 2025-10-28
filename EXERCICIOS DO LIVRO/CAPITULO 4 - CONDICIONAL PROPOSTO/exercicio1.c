//Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para
//a aprovação média 7.
int main()
{
    //Inicializar Variáveis.
    float nota1, nota2, nota3, nota4, media;

    //Receber informações.
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    printf("Informe a quarta nota: ");
    scanf("%f", &nota4);

    //Calcular média aritmética.
    media = (nota1 + nota2 + nota3 + nota4) / 2;

    //Imprimir resultado.
    printf("\nMedia Aritmetica = %.2f\n", media);

    return 0;
}
