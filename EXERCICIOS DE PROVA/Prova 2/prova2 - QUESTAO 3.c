//3. (15 pontos) Faça um programa em C padrão que realiza as seguintes tarefas.
//(a) (5 pontos) Crie um procedimento que aloque dinamicamente uma matriz de números reais com tamanho 25 × 25. Os valores devem ser lidos de um arquivo de texto, 
//cujo nome será digitado pelo usuário no teclado.
//(b) (5 pontos) Crie uma função que percorra toda a matriz e retorne um vetor contendo o menor valor de cada coluna. O vetor deve ser alocado 
//dinamicamente dentro da função e retornado ao programa principal. (c) (5 pontos) No programa principal (main), siga os seguintes passos:
//i. Peça o nome do arquivo e chame o procedimento para preencher a matriz.
//ii. Chame a função que retorna o vetor.
//iii. Exiba a matriz e o vetor final.
//Letra A.
void preencherMat (float *mat) {
    //Inicializar Dinâmicamente o nome do arquivo. 
    char *nomeArq = (char *)malloc(100 * sizeof(char));
    
    //Informar o nome do arquivo. 
    printf("Informe o nome do arquivo: "); 
    scanf(" %[^\n]s", nomeArq); 

    //Abrir o arquivo para leitura. 
    FILE *arq = fopen(nomeArq, "r"); 

    //Percorrer a matriz com os valores do arquivo. 
    for (int ln = 0; ln < 25; ln++) {
        for (int col = 0; col < 25; col++) {
            fscanf(arq, "%f", (mat + (ln * 25 + col))); 
        }
    }

    //Fechar arquivo e liberar memória. 
    free(nomeArq); 
    fclose(arq);
}

//Letra B. 
float *menorCol (float *mat) {
    //Alocar dinamicamente o vetor de menores valores. 
    float *menores = (float *)malloc(25 * sizeof(float)); 

    //Percorrer as colunas da matriz. 
    for (int col = 0; col < 25; col++) {
        //Inicializar menor valor da coluna. 
        *(menores + col) = 0;
        for (int ln = 0; ln < 25; ln++) { 
            //Verificar o  menor valor da coluna. 
            if (*(mat + (ln * 25 + col)) < *(menores + col)) {
                *(menores + col) = *(mat + (ln * 25 + col));
            }
        }
    }
    return menores; 
}

//Letra C. 
int main()
{
    //Inicializar Variáveis. 
    float *matriz = (float *)malloc(25 * 25 * sizeof(float)); 

    //Acionar procedimento para preencher matriz. 
    preencherMat(matriz);

    //Alocar vetor para menores valores. 
    float *vetor = (float *)malloc(25 * sizeof(float)); 

    vetor = menorCol(matriz);

    //Exibir vetor primeiro. 
    for (int i = 0; i < 25; i++) {
        printf("%f ", *(vetor + i)); 
    }

    //Exibir matriz. 
    for (int ln = 0; ln < 25; ln++) {
        for (int col = 0; col < 25; col++) {
            printf("%f ", *(matriz + (ln * 25 + col))); 
        }
        printf("\n"); 
    }

    //Liberar Memória. 
    free(vetor); 

    return 0; 
}