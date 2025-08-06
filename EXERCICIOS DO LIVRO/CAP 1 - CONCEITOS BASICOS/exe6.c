//Receber três notas, calcular e mostrar a media aritmética.
// media aritmética é a soma das notas divido por 3.
int main()
{
    //inicializar o programa
    int n1, n2, n3, media;

    //receber as tres notas
    printf("Digite as notas: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    //calcular e mostrar a média aritmética
    media = (n1 + n2 + n3) / 3;
    printf("A media das notas eh: \n%d", media);

    return 0;

}