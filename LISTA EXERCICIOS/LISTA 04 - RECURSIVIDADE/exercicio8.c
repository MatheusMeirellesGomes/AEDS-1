//Faça uma função recursiva que calcula a divisão usando subtrações sucessivas: int divisao (int numerador, int denominador)
//Faça um programa principal que leia dois números, acione a função e exiba o resultado gerado.
int divisao(int numerador, int denominador)
{
    if (denominador == 0){
        return -1; //Não existe divisao por zero, logo erro. 
    }
    if (numerador < denominador){
        return 0; //Não é para ter decimal.  
    }
    else {
        return 1 + divisao (numerador - denominador, denominador); 
    }
}
int main()
{
    //Inicializar Variáveis.
    int num_N, num_D;

    //Receber numeros. 
    printf("Informe o numerador: ");
    scanf("%d", &num_N); 

    printf("Informe o denominador: "); 
    scanf("%d", &num_D); 

    //Acionar recursão para visualizar qual vai ser o denominador.
    int resp = divisao(num_N, num_D); 

    //Verificar qual é o denominador e imprimir resultado. 
    if (resp == -1){
        printf("\nNao existe divisao por zero!\n"); 
    }
    else if (resp == 0){
        printf("\nNao eh para ter decimal.\n"); 
    }
    else {
        printf("\n%d / %d = %d\n", num_N, num_D, resp); 
    }
    
    return 0; 
}