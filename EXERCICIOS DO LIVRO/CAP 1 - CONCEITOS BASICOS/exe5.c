//Receber quatro numeros inteiros, calcular e mostrar
// a soma desses números
int main()
{
    // inicializar o programa
    int n1, n2, n3, n4, soma;

    //receber os números
    printf("Digite os numeros: \n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    //fazer o cálculo e mostrar a soma
    soma = n1 + n2 + n3 + n4;
    printf("A soma dos quatros numeros eh: \n%d ", soma);

    return 0;

}