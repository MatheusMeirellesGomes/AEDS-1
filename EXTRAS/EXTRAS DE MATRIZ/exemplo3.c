#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca (FILE *arq, int *A, int *B)
{
    int aux;

    printf("Troca inicio *A = %d e *B = %d\n",*A,*B);
    fprintf(arq,"Troca inicio *A = %d e *B = %d\n",*A,*B);

    aux = *A;
    *A = *B;
    *B = aux;

    printf("Troca fim *A = %d e *B = %d\n",*A,*B);
    fprintf(arq,"Troca fim *A = %d e *B = %d\n",*A,*B);
}

int geraArquivo()
{
    FILE *arq = fopen("./entradaTroca.txt","w");
    int N;

    // gerador de n�meros com base numa semente inicial positiva
    srand((unsigned)time(NULL));

    N = 1 + (rand()%15);

    for (int linha=1; linha <= N; linha++)
    {
        fprintf(arq,"%d %d\n",1+(rand()%100),1+(rand()%100));
    }

    fclose(arq);

    return N;
}

void exibirMediaValores (int mat[][2], int N)
{
    int somaX = 0, somaY = 0;
    for (int i=0; i < N; i++)
    {
        somaX = somaX + mat[i][0];
        somaY = somaY + mat[i][1];
    }

    printf("\n&&&&&&&\nMedia dos valores de x %.2f\n",(float)somaX/N);
    printf("Media dos valores de y %.2f\n",(float)somaY/N);
}


int main()
{
    int totalLinhas = geraArquivo();

    FILE *entrada = fopen("./entradaTroca.txt","r");
    FILE *saida = fopen("./saidaTroca.txt","w");

    //int x[totalLinhas], y[totalLinhas], ln=0;
    int matriz[totalLinhas][2], ln=0;
    // int *x = (int *) malloc (totalLinhas * sizeof(int));
    // int *y = (int *) malloc (totalLinhas * sizeof(int));

    //while(fscanf(entrada,"%d%d",(x + ln),(y + ln)) != EOF)
    //while(fscanf(entrada,"%d%d",&x[ln],&y[ln]) != EOF)
    while(fscanf(entrada,"%d%d",&matriz[ln][0],&matriz[ln][1]) != EOF)
    {
        //printf("\n**********\nMain antes X = %d e Y = %d\n",*(x + ln),*(y + ln));
        //printf("\n**********\nMain antes X = %d e Y = %d\n",x[ln],y[ln]);
        printf("\n**********\nMain antes X = %d e Y = %d\n",matriz[ln][0],matriz[ln][1]);
        fprintf(saida,"Main antes X = %d e Y = %d\n",matriz[ln][0],matriz[ln][1]);

        troca(saida,&matriz[ln][0],&matriz[ln][1]);

        printf("Main depois X = %d e Y = %d\n",matriz[ln][0],matriz[ln][1]);
        fprintf(saida,"Main depois X = %d e Y = %d\n",matriz[ln][0],matriz[ln][1]);

        ln++;
    }

    exibirMediaValores(matriz,totalLinhas);

    fclose(entrada);
    fclose(saida);

    return 0;
}