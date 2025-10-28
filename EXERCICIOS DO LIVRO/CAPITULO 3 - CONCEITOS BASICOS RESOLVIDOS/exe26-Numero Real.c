//Receber um número real, encontre e mostre: 
//a) a parte inteira desse numero;
//b) a parte fracionária desse número; 
//c) o arredondamento desse número; 

int main()
{
    //Inicializar o programa com dados do enunciado
    float numero, inteiro, fracionario, arredondado; 

    //Receber o numero real
    printf("Informe um numero real: "); 
    scanf("%f", &numero);

    //encontrar a parte inteira
    inteiro = (int)numero; //Transformar o numero real em inteiro, sem a parte fracionária.

    //Encontrar a parte fracionária
    fracionario = numero - inteiro; //Subtrair a parte inteira do numero real para encontrar a parte fracionária.

    //Encontrar o arredondamento
    arredondado = (int)(numero + 0.5); //Adicionar 0.5 e converter para inteiro para arrendondar corretamente. 

    //Imprimir os resultados
    printf("Parte Inteira = %.0f\n", inteiro); //%.0f para mostrar sem casa decimais, ja que o programa foi feito em float e nao em inteiro;
    printf("Parte Fracionaria = %.2f\n",fracionario); 
    printf("Arredondamento = %.0f", arredondado);

    return 0; 
}