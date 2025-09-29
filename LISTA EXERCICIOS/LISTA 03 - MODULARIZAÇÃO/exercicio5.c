#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um procedimento que recebe a média final de um aluno, identifica e exibe o seu conceito, conforme a tabela abaixo.Faça um programa que leia a média de N alunos,
//acionando o procedimento para cada um deles. (N deve ser lido do teclado) Nota Conceito Até 39 - F, 40 a 59 - E; 60 a 69 - D; 70 a 79 - C;
//80 a 89 - B; a partir de 90 - A.
void mediaFinal()
{
    //Inicializar Variáveis.
    float mediaFinal;

    //Receber valores da media final.
    printf("\nInforme a media do aluno: "); //O programa pede para receber valores da média final no procedimento e não na main. 
    scanf("%f", &mediaFinal);

    //Verificar a média e exibir o conceito.
    if (mediaFinal <= 39){
        printf("\nConceito F.\n");
    }
    else if (mediaFinal > 39 && mediaFinal <= 59){
        printf("\nConceito  E.\n");
    }
    else if (mediaFinal > 59 && mediaFinal <= 69){
        printf("\nConceito D.\n");
    }
    else if (mediaFinal > 69 && mediaFinal <= 79){
        printf("\nConceito C.\n");
    }
    else if (mediaFinal > 79 && mediaFinal <= 89){
        printf("\nConceito B.\n");
    }
    else {
        printf("\nConceito A.\n");
    }
}
int main()
{
    //Inicializar Variáveis.
    int N;

    //Receber informações.
    printf("Informe quantos alunos: ");
    scanf("%d", &N);

    for (int cont = 1; cont <= N; cont++)
    {
        //Acionar procedimento para cada aluno.
        mediaFinal();
    }

}
