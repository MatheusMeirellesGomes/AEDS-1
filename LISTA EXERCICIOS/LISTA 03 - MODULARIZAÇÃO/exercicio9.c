#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float calculaMedia (int N) //O parâmetro tem que ser o número de alunos. 
{
    //Inicializar Variáveis.
    float media;
    float soma_nota = 0, nota;
    int nota6 = 0;

    //Verificar a media de acordo com o número de alunos.
    for (int cont = 1; cont <= N; cont++)
    {
        //Receber as notas.
        printf("\nInforme a nota do aluno: ");
        scanf("%f", &nota);

        if (nota >= 6){
            //Salvar na variável apenas a quantidade de notas maiores que 6.
            nota6++;
            //Somar as notas maiores que 6.
            soma_nota += nota; //Soma tem que ser += nota, porque esta somando as notas maiores que 6 e não a quantidade de notas. 
        }
    }
    //Calcular média.
    media = soma_nota / nota6; //A média é igual a soma das notas maiores que 6 dividido pela quantidade de notas maiores que 6. 

    return media;
}
int main()
{
    //Inicializar Variáveis.
    int N;

    //Receber N. N = números de alunos da sala.
    printf("Quantos alunos: ");
    scanf("%d", &N);
    
    //Acionar a função passando o número de alunos. 
    printf("\nMedia = %.2f\n", calculaMedia(N));


}
