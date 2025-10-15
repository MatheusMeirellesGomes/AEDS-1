#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu()
{
    int op;

    printf("Escolha uma das opcoes\n");
    printf("1 - Criar novo arquivo\n");
    printf("2 - Completar arquivo existente\n");
    printf("3 - Exibir arquivo\n");
    printf("4 - Procurar valor no arquivo\n");
    printf("5 - Finalizar\n");
    printf("Opcao: ");
    scanf("%d",&op);

    return op;
}

void novoArquivo (FILE *arquivo)
{
    int N;

    srand((unsigned)time(NULL));
    arquivo = fopen("C:\\Users\\Matheus Gomes\\Desktop\\dados.txt","w");
    N = 1+(rand()%50);

    for (int conta=1; conta <= N; conta++)
    {
        fprintf(arquivo,"%d\n",1+(rand()%100));
    }

    fclose(arquivo);
}

void editarArquivo (FILE *arq)
{
    int N;

    srand((unsigned)time(NULL));
    arq = fopen("C:\\Users\\Matheus Gomes\\Desktop\\dados.txt","a");
    N = 1+(rand()%50);

    for (int conta=1; conta <= N; conta++)
    {
        fprintf(arq,"%d\n",1+(rand()%100));
    }

    fclose(arq);
}

void exibirArquivo(FILE *arq)
{
    int valor;
    arq = fopen("C:\\Users\\Matheus Gomes\\Desktop\\dados.txt","r");

    while (fscanf(arq,"%d", &valor) !=  EOF)
    {
        printf("%d ",valor);
    }
    printf("\n");
    fclose(arq);
}

int procurarArquivo(FILE *arq)
{
    int valor, procura, conta = 0;
    arq = fopen("C:\\Users\\Matheus Gomes\\Desktop\\dados.txt","r");
    printf("Qual numero esta procurando? ");
    scanf("%d",&procura);
    while (fscanf(arq,"%d",&valor) != EOF)
    {
        if (valor == procura) conta++;
    }

    fclose(arq);

    return conta;
}

int main()
{
    FILE *arq;
    int opcao;


    opcao = menu();

    while (opcao != 5)
    {
        switch(opcao)
        {
            case 1:
                novoArquivo(arq);
                break;
            case 2:
                editarArquivo(arq);
                break;
            case 3:
                exibirArquivo(arq);
                break;
            case 4:
                printf("Encontrou %d vezes o valor procurado\n",procurarArquivo(arq));
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }

        opcao = menu();
    }

    printf("Fim do programa\n");

    return 0;
}
