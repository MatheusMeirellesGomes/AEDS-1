#include <stdio.h>
#include <stdlib.h>

void troca4 (FILE *arq, int A, int B)
{
    int aux;

    printf("Troca4 inicio A = %d e B = %d\n",A,B);
    fprintf(arq,"Troca4 inicio A = %d e B = %d\n",A,B);

    aux = A;
    A = B;
    B = aux;
    printf("Troca4 fim A = %d e B = %d\n",A,B);
    fprintf(arq,"Troca4 fim A = %d e B = %d\n",A,B);
}

void troca3 (FILE *arq, int n1, int *n2)
{
    int aux;
    printf("Troca3 inicio n1 = %d e n2 = %d\n",n1,*n2);
    fprintf(arq,"Troca3 inicio n1 = %d e n2 = %d\n",n1,*n2);
    aux = n1;
    n1 = *n2;
    *n2 = aux;
    printf("Troca3 fim n1 = %d e n2 = %d\n",n1,*n2);
    fprintf(arq,"Troca3 fim n1 = %d e n2 = %d\n",n1,*n2);
}

void troca2 (FILE *arq, int *val1, int val2)
{
    int aux;
    printf("Troca2 inicio val1 = %d e val2 = %d\n",*val1,val2);
    fprintf(arq,"Troca2 inicio val1 = %d e val2 = %d\n",*val1,val2);
    aux = *val1;
    *val1 = val2;
    val2 = aux;
    printf("Troca2 fim val1 = %d e val2 = %d\n",*val1,val2);
    fprintf(arq,"Troca2 fim val1 = %d e val2 = %d\n",*val1,val2);
}

void troca1 (FILE *arq, int *A, int *B)
{
    int aux;

    printf("Troca1 inicio *A = %d e *B = %d\n",*A,*B);
    fprintf(arq,"Troca1 inicio *A = %d e *B = %d\n",*A,*B);

    aux = *A;
    *A = *B;
    *B = aux;
    printf("Troca1 fim *A = %d e *B = %d\n",*A,*B);
    fprintf(arq,"Troca1 fim *A = %d e *B = %d\n",*A,*B);
}

int novoArquivo ()
{
    int N;

    srand((unsigned)time(NULL));
    FILE *arquivo = fopen ("C:\\Users\\Matheus Gomes\\Desktop\\entrada.txt", "w");
    N = 1+(rand()%15);

    for (int conta=1; conta <= N; conta++)
    {
        fprintf(arquivo,"%d %d\n",1+(rand()%100), 1+(rand()%100));
    }

    fclose(arquivo);

    return N;
}

int main()
{
    int N = novoArquivo();

    FILE *entrada = fopen ("C:\\Users\\Matheus Gomes\\Desktop\\entrada.txt", "r");
    FILE *saida = fopen ("C:\\Users\\Matheus Gomes\\Desktop\\saida.txt", "w");

    int matriz[N][2], pos = 0;

    while(fscanf(entrada,"%d%d",&matriz[pos][0],&matriz[pos][1]) != EOF)
    {
        pos++;
    }

    for (int i = 0; i < N; i++)
    {
        printf("Main antes X = %d e Y = %d\n",matriz[i][0],matriz[i][1]);
        fprintf(saida,"Main antes X = %d e Y = %d\n",matriz[i][0],matriz[i][1]);
        troca1(saida,&matriz[i][0],&matriz[i][1]);
        //troca4(saida,matriz[i][0],matriz[i][1]);
        //troca2(saida,&matriz[i][0],matriz[i][1]);
        //troca3(saida,matriz[i][0],&matriz[i][1]);

        printf("Main depois X = %d e Y = %d\n",matriz[i][0],matriz[i][1]);
        fprintf(saida,"Main depois X = %d e Y = %d\n",matriz[i][0],matriz[i][1]);
    }
    fclose(entrada);
    fclose(saida);
    return 0;
}