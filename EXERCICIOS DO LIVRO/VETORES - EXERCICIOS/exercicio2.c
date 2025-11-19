#include <stdio.h>
#include <stdlib.h>
//Mesmo enunciado do exercicio anterior, porem agora alocar dinamicamente o vetor e usar aritmética de ponteiros para manipular o vetor. 

//Primeiramente, procedimento para preencher o vetor com as notas.
void preencheVetor(float *notas) {
    //Percorrer o vetor para preencher as notas. 
    for (int cont = 0; cont < 10; cont++) {
        printf("Informe a nota do %d aluno: ", cont + 1); 
        scanf("%f", (notas + cont)); //Usando aritmética de ponteiros para ler cada nota. Não precisa usar & pois notas + cont já é um endereço. 
    } //Mesma coisa que &notas[cont]. 
}

//Segundo: Fazer um função para calcular a média e contar quantos alunos obtiveram nota acima da média.
float calculaMedia(float *notas) {
    //Inicializar Variáveis. 
    int qntdAlunos = 0; 
    float somaNotas = 0, media; 

    //Percorrer o vetor para somar as notas.
    for (int cont = 0; cont < 10; cont++) {
        //Usando aritmética de ponteiros para acessar o valor.
        somaNotas += *(notas + cont); //Mesma coisa que somaNotas += notas[cont]; 
    }

    //Calcular média.
    media = somaNotas / 10; 

    //Percorrer o vetor para contar quantos alunos obtiveram nota acima da média (igual ou superior a 6).
    for (int cont = 0; cont < 10; cont++) {
        if (*(notas + cont) >= 6) { //Usando aritmética de ponteiros para acessar o valor.
            qntdAlunos++; 
        }
    }

    //Imprimir resultados.
    printf("Quantidade de alunos com nota igual ou superior a 6: %d\n", qntdAlunos);

    //Retornar média e quantidade de alunos. 
    return media;
    
}

int main() {
    //Inicializar vetor dinamicamente. 
    float *notas = (float *)malloc(10 * sizeof(float));

    //Acionar procedimento de preencher o vetor.
    preencheVetor(notas); //Envia o ponteiro para o primeiro elemento do

    //Acionar procedimento de calcular a média e contar quantos alunos obtiveram nota acima da média.
    float mediaSala = calculaMedia(notas); 

    //Imprimir média da sala. 
    printf("Media da turma: %.2f\n", mediaSala);

    //Liberar memória alocada.
    free(notas);

    return 0; 
}