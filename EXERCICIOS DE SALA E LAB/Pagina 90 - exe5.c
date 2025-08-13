#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//Receba dois numeros, escolha uma opcao da tabela abaixo: Estrura Condicional.
//1- Media entre os numeros.
//2- Diferença do maior pelo menor.
//3- Produto entre eles.
//4- Divisão do primeiro pelo segundo.
//5- Mensagem de erro.
int main()
{
    //Inicializar com dados do enunciado.
    float n1, n2, media, diferenca, produto, divisao;
    int opcao;

    //Receber os numeros.
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    //Mostrar a tabela e escolher a opcao.
    printf("\nOpcao 1: Media entre os numeros\n");
    printf("Opcao 2: Diferenca do primeiro pelo segundo\n");
    printf("Opcao 3: Produto entre eles\n");
    printf("Opcao 4: Divisao do primeiro pelo segundo\n");
    printf("\nEscolha uma opcao de 1 a 4: ");
    scanf("%d", &opcao);

    //Verificar as opcoes e verificar qual vai ser escolhida. 
    if(opcao == 1)
    {
        media = (n1 + n2) / 2; 
        printf("A media entre os numeros = %.2f", media);
    }
    else if(opcao == 2)
    {
        if (n1 > n2)
        {
            diferenca = n1 - n2;
        }
        else
        {
            diferenca = n2 - n1;
        }
        printf("A diferenca entre eles = %.2f", diferenca);
    }
    else if(opcao == 3)
    {
        produto = n1 * n2; 
        printf("O produto = %.2f", produto); 
    }
    else if(opcao == 4)
    {
        if(n1 > n2)
        {
            divisao = n1 / n2;  
            printf("A divisao entre eles = %.2f", divisao); 
        }
        else
        {
            printf("\nOpcao Invalida");
        }
        
    }
    else
    {
        printf("Opcao Invalida");
    }
    
    return 0; 

}
