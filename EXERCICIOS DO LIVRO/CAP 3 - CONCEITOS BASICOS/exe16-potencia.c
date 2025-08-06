//Receber dois números maiores que zero, calcular e mostrar um elevado ao outro.
int main()
{
    //inicializar o programa com os dados do enunciado
    int n1, n2, resultado1, resultado2;

    //Receber os dados fornecidos
    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    //fazer o cálculo que vai mostrar um elevado ao outro
    resultado1 = pow(n1, n2);
    resultado2 = pow(n2, n1);

    //Imprimir o resultado na tela depois do cálculo
    printf("Primeiro numero elevado = %d \n Segundo Numero elevado = %d ", resultado1, resultado2);

    return 0;
}