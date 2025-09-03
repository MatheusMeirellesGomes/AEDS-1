//Faça um programa para resolver uma equação do 2º grau (ax² + bx + c = 0). A variável 'a' deve ser diferente de zero.
//Delta = b² - 4ac; Delta < 0 = não existe raiz real;  Delta = 0 então existe uma raiz real. 
//Delta > 0 = existem duas raízes reais. x = (-b) / 2a; 
//x1 = (-b + sqrt(Delta)) / 2a; x2 = (-b - sqrt(Delta)) / 2a; 
int main()
{
    //Inicializar Variáveis. 
    float a, b, c, delta, x1, x2;  

    //Receber os valores de a, b e c. 
    printf("Informe o valor de A: "); 
    scanf("%f", &a); 
    
    printf("Informe o valor de B: "); 
    scanf("%f", &b); 

    printf("Informe o valor de C: "); 
    scanf("%f", &c); 

    //Verificar se o valor de A é diferente de 0. 
    if (a == 0)
    {
        printf("\nValor de A invalido. Valor deve ser diferente de 0.\n");
    }
    else
    {
        //Calcular Delta. 
        delta = pow(b,2) - 4 * a * c; //Delta é igual a b dois menos quatro vezes a vezes c. 

        //Verificar o valor de Delta. 
        if (delta < 0){
            printf("\nNao existe raiz real.\n"); 
        }
        else if (delta == 0){
            x1 = (-b) / (2 * a); 
            printf("\nExiste uma raiz real: x = %.2f\n", x1); 
        }
        else if (delta > 0){
            x1 = (-b + sqrt(delta)) / (2 * a); 
            x2 = (-b - sqrt(delta)) / (2 * a); 
            printf("\nExistem duas raizes reais: x1 = %.2f e x2 = %.2f\n", x1, x2); 
        }
    }

    return 0; 

}
