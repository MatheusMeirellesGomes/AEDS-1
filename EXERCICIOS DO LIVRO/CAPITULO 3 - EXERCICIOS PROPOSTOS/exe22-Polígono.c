//Receba o número de lados de um polígono convexo, calcular e mostrar o número de diagonais do polígono.
//Sabe-se que ND = N * (N - 3) / 2, onde N é o número de lados do polígono.
int main()
{
    //Inicializar com dados do enunciado.
    int num_diag, num_lados; 

    //Receber o número de lados. 
    printf("Numero de lados = "); 
    scanf("%d", &num_lados); 

    //Calcular o número de diagonais. 
     num_diag = (num_lados * (num_lados - 3)) / 2;  

    //Imprimir o número de diagonais.
    printf("Numero de Diagonais = %d", num_diag);

    return 0; 

}