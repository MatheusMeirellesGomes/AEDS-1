#include <stdio.h>
#include <stdlib.h>
void preencheVetor(float notas[])
{
    //Preencher o vetor com as notas dos alunos.
    for (int alunos = 0; alunos < 10; alunos++) {
        //Receber informações de notas dos 10 alunos.
        printf("Informe a nota do aluno %d: ", alunos + 1); //alunos + 1 para mostrar o número correto do aluno (1 a 10).
        scanf("%f", &notas[alunos]); //Armazenar a nota no vetor, sendo alunos o índice do vetor.
    }
}
void calculaMedia(float notas[])
{
    float somaNotas = 0.0; //Variável para armazenar a soma das notas para calcular a média.
    int qntdAlunos = 0; //Variável para armazenar a quantidade de alunos com nota acima da média.
    float mediaNotas; //Variável para armazenar a média das notas.

    //Calcular a soma das notas dos 10 alunos.
    for (int alunos = 0; alunos < 10; alunos++) {
        //Acumular a soma das notas dos alunos.
        somaNotas += notas[alunos]; //Soma das notas = Somas das notas de cada aluno.

        //Verificar se a nota de cada aluno é maior ou igual a 6.
        if (notas[alunos] >= 6.0) { //Se a nota de cada aluno for maior ou igual a 6.0.
            qntdAlunos++; //Incrementar a quantidade de alunos.
        }
    }

    //Calcular a média das notas.
    mediaNotas = somaNotas / 10.0; //Média = Soma das Notas / 10 (total de alunos).

    //Exibir a média das notas e a quantidade de alunos com nota acima da média.
    printf("\nMedia da Turma: %.2f\n", mediaNotas);
    printf("Quantidade de Alunos com nota acima ou igual a 6.0: %d\n", qntdAlunos);
}
int main()
{
    //Inicializar Variáveis.
    float valorNotas[10]; //Vetor para armazenar as notas dos 10 alunos. (Vetor estático).

    //Chamar procedimentos.
    preencheVetor(valorNotas); //Chamar procedimento para preencher o vetor com as notas dos alunos.

    //Chamar procedimento para calcular a média e a quantidade de alunos com nota acima da média.
    calculaMedia(valorNotas);

    return 0;
}