#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas 
//do aluno, se for ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N alunos e acione o procedimento para cada aluno.
//N deve ser lido do teclado. 

//Primeiro Fazer procedimento pra média aritmética. 
void mediaAritmetica (float nota1, float nota2, float nota3) //Informar procedimento, com float ou int antes das variáveis. 
{
    //Inicialziar Variáveis.
    float media; 
    media = (nota1 + nota2 + nota3) / 3; //Média Aritmética é a soma das notas divido pela quantidade de notas. 
    printf("\nMedia Aritmetica: %.2f\n", media); 
    //Como é procedimento apenas vai realizar o cálculo do que for pedido, não vai retornar nada. 
}

//Segundo fazer um procedimento pra média ponderada. 
void mediaPonderada (float nota1, float nota2, float nota3)
{
    //Inicializar Variáveis. 
    float media; 
    media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10; //Média Ponderada é a soma das notas multiplicada pelo peso divido por 10. 
    printf("\nMedia Ponderada: %.2f\n", media); 
}

int main()
{
    //Inicializar Variáveis. 
    int N; //Valor interiro, por se tratar de quantidade. 
    float n1, n2, n3; //Por se tratar de nota, pode ser número decimal. 
    char letra; //Indicar a letra para verificar o procedimento. 

    //Receber Informações.
    printf("Quantos alunos: "); //Printf fora da repetição, porque vai indicar quantas alunos (quantas vezes) vai precisar se repetir até finalizar o programa. 
    scanf("%d", &N); 

    //Verificar qual procedimento será usado. 
    for (int cont = 1; cont <= N; cont++)
    {
        //Receber Informações.
        printf("Informe a primeira nota: ");
        scanf("%f", &n1);
        
        printf("Informe a segunda nota: "); 
        scanf("%f", &n2); 

        printf("Informe a terceira nota: "); 
        scanf("%f", &n3); 

        printf("Informe qual procedimento sera realizado [A- Media Aritmetica / P- Media Ponderada  ]: "); 
        scanf(" %c", &letra); 

        //Verificar qual será o procedimento realizado.
        if (letra == 'A' || letra == 'a'){ //Se for escolhido a letra A.
            mediaAritmetica(n1, n2, n3); //Vai apenas usar o que foi calculado no procedimento de Média Aritmética.
        }
        else if (letra == 'P' || letra == 'p'){ //Caso for escolhido letra P.
            mediaPonderada(n1, n2, n3); //Vai apenas usar o que foi calculado no procedimento de Média Ponderada.
        }
        else {
            printf("\nLetra Invalida.\n"); 
        }
    }

    return 0;

}