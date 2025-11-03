//a) Faça um procedimento que preencha uma matriz 15 x 15 por alocação dinâmica, com números reais lidos a partir de um arquivo (com nome informado pelo teclado). 
//b) Faça um função que encontre o maior valor de cada linha da matriz e retorne um ponteiro para um vetor com esses valores. 
//c) Faça um procedimento que receba a matriz e multiplique cada elemento da diagonal principal, pelo maior valor encontrado na respectiva linha.
//d) Faça outro procedimento que receba a matriz resultante após as multiplicações.
//e) Na main, acione os módulos acima e exiba o conteúdo do vetor retornado pela função.

//Letra A:
void preencheMatriz(float *matriz)
{
    //Criar nome do arquivo com alocação dinâmica
    char *nomeArq = (char *)malloc(100 * sizeof(char));  //Aloca espaço para o nome do arquivo
    
    //Receber nome do arquivo. 
    printf("Informe o nome do arquivo: "); 
    scanf(" %[^\n]s", nomeArq);

    //Abrir o arquivo para leitura. 
    FILE *arq = fopen(nomeArq, "r"); 

    //Preencher a matriz com os valores do arquivo. 
    for (int ln = 0; ln < 15; ln++) {
        for (int col = 0; col < 15; col++) {
            fscanf(arq, "%f", (matriz + (ln * 15 + col))) //Uso de aritmética de ponteiros, que é a mesma coisa que &matriz[ln][col].
        }
    }
}

//Letra B:
float *maiorValorLinha(float *matriz) 
{
    //Alocar vetor para armazenar os maiores valores de cada linha.
    float *Maiores = (float *)malloc(15 * sizeof(float)); 

    //Encontrar o maior valor de cada linha. 
    for (int ln = 0; ln < 15; ln++) {
        *(maiores + ln) = 0; //maiores[ln] = 0; Inicializa o maior valor com o primeiro elemento da linha. 
        for (int col = 0; col < 15; col++) { 
            //Comparar o elemento atual com o maior valor encontrado até agora.
            if (*(matriz + (ln * 15 + col)) > *(maiores + ln)) { //if (matriz[ln][col] > maiores[ln]) {
                *(maiores + ln) = *(matriz + (ln * 15 + col)); //Atualiza o maior valor encontrado.
            }
        }
    }
    return Maiores;
}

//Letra C:
void MultiplicaDiagonal(float *matriz, float *maiores) {
    for (int i = 0; i < 15; i++) {
        *(matriz + (i * 15 + i)) = *(matriz + (i * 15 + i)) * *(maiores + i); //matriz[i][i] = matriz[i][i] * maiores[i];
    }
}

//Letra D: 
void exibirMatriz(float *matriz) {
    for (int ln = 0; ln < 15; ln++) {
        for (int col = 0; col < 15; col++) {
            printf("%f ", *(matriz + (ln * 15 + col))); //printf("%.2f ", matriz[ln][col]);
        }
        printf("\n");
    }
}

//Letra E:
int main()
{
    //Alocar matriz 15 x 15 dinamicamente. 
    float *matriz = (float *)malloc(15 * 15 * sizeof(float)); 
    
    //Acionar o procedimento para preencher a matriz. 
    preencheMatriz(matriz);

    //Alocar vetor para armazenar os maiores valores de cada linha.
    float *vetor = (float *)malloc(15 * sizeof(float)); 

    //Acionar a função para encontrar o maior valor de cada linha. 
    vetor = maiorValorLinha(matriz);

    for (int i = 0; i < 15; i++) {
        printf("Maior valor da linha %d: %f\n", i, *(vetor + i)); //printf("Maior valor da linha %d: %f\n", i, vetor[i]);
    } 

    //Acionar o procedimento para multiplicar os elementos da diagonal principal pelos maiores valores de cada linha.
    MultiplicaDiagonal(matriz, vetor);

    //Acionar o procedimento para exibir a matriz resultante.
    exibirMatriz(matriz);
    
    //Liberar a memória alocada. 
    free(matriz);
    free(vetor);

    return 0;
}