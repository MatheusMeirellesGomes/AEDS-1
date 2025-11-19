#include <stdio.h>
#include <stdlib.h>
//Faça um procedimento que receba e preencha um vetor com as notas de uma turma de 10 alunos. Faça um outro procedimento que receba um vetor preenchido com as notas, 
//calcule a média da turma e conte quantos alunos obtiveram nota acima da média (igual ou superior a 6 em 10). Esse procedimento deve exibir a média e o 
//resultado da contagem. Faça um programa que declare as devidas variáveis e acione os procedimentos.

//Primeiro procedimento: Preencher o vetor com as notas. 
void preencheVetor (float notas[]) {
    //Percorrer o vetor para preencher as notas. 
    for (int cont = 0; cont < 10; cont++) {
        printf("Informe a nota do %d aluno: ", cont + 1); 
        scanf("%f", &notas[cont]); //Lendo cada nota (número real), de cada aluno [cont]. 
    }
}

//Segundo procedimento: Calcular a média e contar quantos alunos obtiveram nota acima da média.
void calculaMedia (float notas[]) {
    //Inicializar Variáveis. 
    int qntdAlunos = 0; 
    float somaNotas = 0, media; 

    //Percorrer o vetor para somar as notas.
    for (int cont = 0; cont < 10; cont++) {
        somaNotas += notas[cont]; 
    }

    //Calcular média. 
    media = somaNotas / 10; 

    //Percorrer o vetor para contar quantos alunos obtiveram nota acima da média (igual ou superior a 6).
    for (int cont = 0; cont < 10; cont++) {
        if (notas[cont] >= 6) {
            qntdAlunos++; 
        }
    }

    //Imprimir resultados. 
    printf("Media da turma: %.2f\n", media);
    printf("Quantidade de alunos com nota igual ou superior a 6: %d\n", qntdAlunos);
}

int main() {
    //Inicializar Vetor estaticamente. 
    float notas[10]; 

    //Acionar procedimento de preencher o vetor.
    preencheVetor(notas); //Envia apenas o nome do vetor. 

    //Acionar procedimento de calcular a média e contar quantos alunos obtiveram nota acima da média.
    calculaMedia(notas);

    return 0; 
}
