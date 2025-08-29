//Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao mesmo tempo), por 2 e por 5.
//Caso algum número não seja divisível por nenhum desses números mostre a mensagem “Numero nao eh divisivel pelos valores”.
//Apresente também ao final a quantidade de números divisíveis por:
// a) 3 e 9 ao mesmo tempo;   b) por 2;   c) por 5.

int main() 
{
    //Inicializar Variáveis.
    float num; //Inicializar como float, para aceitar casas decimais. 
    int div3e9 = 0, div2 = 0, div5 = 0; //Igualar a zero para evitar lixo de memória.

    for (int cont = 0; cont < 10; cont++)  //Repetir 10 vezes para receber 10 número, conforme solicitado. 
    {
        //Receber Numero.
        printf("Digite um numero: ");
        scanf("%f", &num);
        
        //Colocar int  para pegar apenas a parte inteira do número, para fazer a verificação de divisibilidade.
        int n = (int)num;  // pega apenas a parte inteira
        int divisivel = 0; //Variável para verificar se o número é divisível por algum dos valores.

        //Verificar se é divisível por 3 e por 9.
        if (n % 3 == 0 && n % 9 == 0) 
        {
            div3e9++;
            divisivel = 1;
        }

        //Verificar se é divisível por 2.
        if (n % 2 == 0) 
        {
            div2++;
            divisivel = 1;
        }

        //Verificar se é divisível por 5. 
        if (n % 5 == 0)
        {
            div5++;
            divisivel = 1;
        }

        //Se não for divisível por nenhum dos valores, mostrar a mensagem.
        if (!divisivel) 
        {
            printf(" Numero nao eh divisivel pelos valores \n");
        }
    }

    //Exibir os resultados.
    printf("%d Numeros sao divisiveis por 3 e por 9 \n", div3e9);
    printf("%d Numeros sao divisiveis por 2 \n", div2);
    printf("%d Numeros sao divisiveis por 5 \n", div5);

    return 0;
}
