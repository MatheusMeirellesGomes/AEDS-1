#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Criar um arquivo com que gere números aleatórios, que vão servir como notas de alunos em 2 provas. Será uma matriz 15 x 3, sendo 15 alunos (linhas) e 
//3 disciplinas (colunas). As primeiras 15 linhas (0 a 14) serão as notas da primeira prova, e as outras 15 linhas (15 a 29) serão as notas da segunda prova.
//Depois de criar o arquivo, ler o arquivo e armazenas as informações em uma matriz 15 x 3, e o total de pontos em uma terceira matriz 15 x 3 também.
//Calcular e mostrar o aluno com maior nota em cada disciplina, indicando o número do aluno (0 a 14). Mostrar o total de alunos que perdeu média em cada disciplina
//(soma das notas inferior a 24, sabendo que as duas provas juntas valem 40 pontos.); Liberado usar ponteiro, vetores, matrizes e subrotinas
void geraArquivo()
{
    //Criar arquivo para escrita.
    FILE *arq = fopen("./notas.txt", "w");
    
    //Gerar números aleatórios e escrever no arquivo. 
    for (int i = 0; i < 15; i++) { //Primeira prova. 
        for (int j = 0; j < 3; j++){
            fprintf(arq, "%d ", rand() % 21); //Notas aleatórias de 0 a 20. 
        }
    }

    for (int i = 0; i < 15; i++) { //Segunda prova.
        for (int j = 0; j < 3; j++){
            fprintf(arq, "%d ", rand() % 21); //Notas aleatórias de 0 a 20.
        }
    }
    fclose(arq); 
}
void lerArquivo(int prova1[][3], int prova2[][3])
{
    //Gerar arquivo para leitura. 
    FILE *arq = fopen("./notas.txt", "r");

    //Ler os dados do arquivo e armazenas nas matrizes. 
    for (int i = 0; i < 15; i++) { //Primeira prova. 
        for (int j = 0; j < 3; j++) {
            fscanf(arq, "%d", &prova1[i][j]); 
        }
    }
    for (int i = 0; i < 15; i++) { //Segunda Prova.
        for (int j = 0; j < 3; j++) {
            fscanf(arq, "%d", &prova2[i][j]);
        }
    }
}
void calculaTotais(int prova1[][3], int prova2[][3], int notaTotal[][3])
{
    //Calcular o total de pontos de cada aluno em cada disciplina em uma terceira matriz. 
    //Percorrer as matrizes e somar os valores. 
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 3; j++) {
            notaTotal[i][j] = prova1[i][j] + prova2[i][j]; 
        }
    }
}
int maiorNota(int notaTotal[][3], int *aluno, int *disciplina)
{
    //Inicializar variáveis para armazenar a maior nota, aluno e disciplina. 
    int maior = notaTotal[0][0]; 
    *aluno = 0;
    *disciplina = 0; 

    //Percorrer a matriz para encontrar a maior nota. 
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 3; j++){
            //Verificar se a nota atual é maior que a maior nota armazenada. 
            if (notaTotal[i][j] > maior){ //Se a nota de cada aluno em cada disciplina for maior que a maior nota atual, atualizar as variáveis. 
                maior = notaTotal[i][j]; 
                *aluno = i; //Aluno com maior nota. 
                *disciplina = j; //Disciplina com maior nota. 
            }
        }
    }

    //Retornar a maior nota.
    return maior; //Vai salvar nessa variável a maior nota encontrada e vai jogar na variável criada na main.
}
int mediaPerdida(int notaTotal[][3]) //Vai receber a matriz com as notas totais.
{
    //Inicializar variáveis para contar o número de alunos que perderam a média em cada disciplina. 
    int qntdAlunos = 0; 

    //Percorrer a matriz para contar os alunos que perderam a média em cada disciplina. 
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 3; j++) {
            //Verificar se a nota total do aluno em cada disciplina é menor que 24. 
            if (notaTotal[i][j] < 24) {  //Se a nota total de cada aluno em cada disciplina for menor que 24, incrementar o contador.
                qntdAlunos++;
            }
        }
    }

    //Retornar o número de alunos que perderam a média. 
    return qntdAlunos; 
}
void mostrarResultados(int notaTotal[][3], int notaMaior, int mediaAluno, int alunoMaior, int disciplinaMaior)
{
    //Mostrar o aluno com maior nota: 
    printf("Numero do aluno com maior nota: %d\n", alunoMaior); 
    printf("Disciplina: %d\n", disciplinaMaior);
    printf("Aluno com maior nota: %d\n", notaMaior); 

    //Mostrar o total de alunos (quantidade) que perderam a média em cada disciplina. 
    printf("\nTotal de alunos que perderam a media: %d\n", mediaAluno); 

    //Mostrar o total de pontos de cada aluno em cada disciplina. 
    for (int i = 0; i < 15; i++) { //Apenas 
        for (int j = 0; j < 3; j++) {
            printf("\nAluno %d, Disciplina: %d, Nota Total: %d\n", i, j, notaTotal[i][j]); 
        }
    }
}
void gravarResultados(int notaMaior, int mediaAluno, int alunoMaior, int disciplinaMaior)
{
    //Abrir arquivo para escrita. 
    FILE *arq = fopen("./resultados.txt", "w"); 

    //Escrever os resultados no arquivo.  
    fprintf(arq, "Numero do aluno com maior nota: %d\n", alunoMaior); 
    fprintf(arq, "Disciplina: %d\n", disciplinaMaior);
    fprintf(arq, "Maior Nota: %d\n", notaMaior);
    fprintf(arq, "Total de alunos que perderam a media: %d\n", mediaAluno);
    fclose(arq);
}
int main()
{
    //Inicializador de números aleatórios. 
    srand((unsigned)time(NULL));

    //Inicializar variáveis com matrizes, para armazenar as notas das provas e o total de pontos. 
    int prova1[15][3], prova2[15][3], notaTotal[15][3]; 

    //Acionar procedimento de criação de arquivo. 
    geraArquivo(); 

    //Acionar procedimento de leitura do arquivo. 
    lerArquivo(prova1, prova2); 

    //Acionar procedimento de cálculo dos totais. 
    calculaTotais(prova1, prova2, notaTotal); 

    //Variáveis para armazenar o aluno e a disciplina com maior nota. 
    int alunoMaior, disciplinaMaior; 
    int notaMaior = maiorNota(notaTotal, &alunoMaior, &disciplinaMaior); 

    //Acionar função para calcular o número de alunos que perderam a média. 
    int totalAlunos = mediaPerdida(notaTotal);

    //Acionar procedimento para mostrar os resultados. 
    mostrarResultados(notaTotal, notaMaior, totalAlunos, alunoMaior, disciplinaMaior); 

    //Acionar procedimento para gravar os resultados em um arquivo. 
    gravarResultados(notaMaior, totalAlunos, alunoMaior, disciplinaMaior); 

    return 0; 
}