//Receber dois números, calcular e mostrar a divisão do primeiro pelo segundo.
//O segundo número não poderá ser zero. Não preocupe com validações
int main()
{
    //Inicializar com informações do enunciado
    int n1, n2, resultado;

    //Receber o primeiro e o segundo numero
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    //Calcular a divisao
    resultado = n1 / n2;

    //Imprimir resultado
    printf("Resultado = %d", resultado);

    return 0;
}
