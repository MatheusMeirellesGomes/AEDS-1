//Receber tres notas, e tres pesos, calcular e mostrar a media ponderada.
// Media Ponderada e a todas as notas vezes todos os pesos dividido pela somas dos pesos

int main()
{
    //inicializar o programa com os dados
    int n1, n2, n3, peso1, peso2, peso3, media;

    //receber os dados
    printf("Digite as 3 notas: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Digite os 3 pesos: \n");
    scanf("%d %d %d", &peso1, &peso2, &peso3);

    //Calcular e mostrar a media ponderada
    media = (n1*peso1 + n2*peso2 + n3*peso3) / (peso1 + peso2 + peso3);
    printf("A media eh: %d\n", media);

    return 0;

}