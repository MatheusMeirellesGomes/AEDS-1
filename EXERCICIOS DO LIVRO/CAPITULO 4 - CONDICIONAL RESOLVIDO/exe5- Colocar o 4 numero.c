//Receba três números em ordem crescente e um quarto número, que nao siga essa regra. 
//Mostre em seguida os quatros números em ordem decrescente. Suponha que o usuário digitará 
//quatro números diferentes. 
int main()
{
    //Inicializar variáveis.
    int n1, n2, n3, n4; 

    //Receber os três números em ordem crescente. 
    printf("Digite tres numeros em ordem crescente: \n"); //Colocar em ordem crescente conforme solicitado.
    scanf("%d %d %d", &n1, &n2, &n3); 

    //Receber o quarto número que não segue a regra. 
    printf("Digite o quarto numero: "); 
    scanf("%d", &n4);

    //Verificar onde o quarto número se encaixa. 
    if(n4 > n3) //Verificar primeiro se o quarto é maior que o terceiro.
    {
        printf("A ordem decrescente = %d, %d, %d, %d\n", n4, n3, n2, n1); //Se for maior que o terceiro, ele é o maior. 
    }
    else if (n4 > n2 && n4 < n3) //Verificar se o quarto é maior que o segundo e menor que o terceiro. 
    {
        printf("A ordem decrescente = %d, %d, %d, %d\n", n3, n4, n2, n1); //Se for maior que o segundo e menor que o terceiro, ele é o segundo maior. 
    }
    else if (n4 > n1 && n4 < n2)//Verificar se o quarto é maior que o primeiro e menor que o segundo. 
    {
        printf("A ordem decrescente = %d, %d, %d, %d\n", n3, n2, n4, n1); //Se for maior que o primeiro e menor que o segundo, ele é o terceiro maior. 
    }
    else //Se não for maior que o primeiro, ele é o menor. 
    {
        printf("A ordem decrescente = %d, %d, %d, %d\n", n3, n2, n1, n4); //Se for menor que o primeiro ele é o menor número. 
    }

    return 0;
}