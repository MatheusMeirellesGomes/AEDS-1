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

void troca1 (FILE *arq, int *A, int *B)
{
    int aux;

    //printf("Troca1 inicio *A = %d e *B = %d\n",*A,*B);
    //fprintf(arq,"Troca1 inicio *A = %d e *B = %d\n",*A,*B);

    aux = *A;
    *A = *B;
    *B = aux;

    //printf("Troca1 fim *A = %d e *B = %d\n",*A,*B);
    //fprintf(arq,"Troca1 fim *A = %d e *B = %d\n",*A,*B);
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

int novoArquivo ()
{
    int N;

    srand((unsigned)time(NULL));
    FILE *arquivo = fopen("C:\\Temp\\lab\\entradaTroca.txt","w");
    N = 1+(rand()%15);

    for (int conta=1; conta <= N; conta++)
    {
        fprintf(arquivo,"%d %d\n",1+(rand()%100),1+(rand()%100));
    }

    fclose(arquivo);

    return N;
}

int main()
{
    int N = novoArquivo(), pos = 0;

    FILE *entrada = fopen("c:\\Temp\\lab\\entradaTroca.txt","r");
    FILE *saida = fopen("c:\\Temp\\lab\\saidaTroca.txt","w");

    int x[N], y[N];

    // Lendo do arquivo e salvando nos vetores
    while(fscanf(entrada,"%d%d",&x[pos],&y[pos]) != EOF)
    {
        pos++;
    }


    // Lendo dos vetores e trocando
    for (int i=0; i < N; i++)
    {
        //printf("Main antes X = %d e Y = %d\n",x,y);
        //fprintf(saida,"Main antes X = %d e Y = %d\n",x,y);
        troca1(saida,&x[i],&y[i]);
        //troca4(saida,x,y);
        //troca2(saida,&x,y);
        //troca3(saida,x,&y);

        printf("Main depois X = %d e Y = %d\n",x[i],y[i]);
        fprintf(saida,"Main depois X = %d e Y = %d\n",x[i],y[i]);
    }

    fclose(entrada);
    fclose(saida);
    return 0;
}