//Faça um programa que calcule e mostre a tabuada de um número inteiro 
//digitado pelo usuário, sem usar estruturas de repetição. 
int main()
{
    //Inicializar com dados do enunciado
    int numero, resultado; 

    //Receber o número do usuário
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero);

    //Calcular e imprimir a tabuada do número 
    resultado = numero * 1; 
    printf("%d x 1 = %d\n", numero, resultado);

    resultado = numero * 2; 
    printf("%d x 2 = %d\n", numero, resultado);

    resultado = numero * 3; 
    printf("%d x 3 = %d\n", numero, resultado);

    resultado = numero * 4; 
    printf("%d x 4 = %d\n", numero, resultado);

    resultado = numero * 5; 
    printf("%d x 5 = %d\n", numero, resultado);

    resultado = numero * 6; 
    printf("%d x 6 = %d\n", numero, resultado);

    resultado = numero * 7; 
    printf("%d x 7 = %d\n", numero, resultado);

    resultado = numero * 8; 
    printf("%d x 8 = %d\n", numero, resultado);

    resultado = numero * 9; 
    printf("%d x 9 = %d\n", numero, resultado);

    resultado = numero * 10; 
    printf("%d x 10 = %d\n", numero, resultado);
    //Como não pode usar estrutura de repetição, vc precisa escrever cada linha da tabuada manualmente.
    
    return 0; 
}