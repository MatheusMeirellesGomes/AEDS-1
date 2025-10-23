#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função que gera um arquivo com números aleatórios. 
int geraArquivo()
{
    //Criar arquivo de saída por isso usa-se 'w', pra ele criar um novo arquivo. 
    FILE *arq = fopen("./entradaTroca.txt","w"); //Usar ./ para indicar que o arquivo está na mesma pasta do .c. 
    int N;

    //Gerador de números aleatórios.
    srand((unsigned)time(NULL));

    //Gerar um número aleatório para definir o total de linhas do arquivo. 
    N = 1 + (rand()%15);

    //Verificar o total de linhas.
    for (int linha = 1; linha <= N; linha++) //Podendo ser de 1 até 15 linhas (ENTRE). 
    {
        //Imprimir no arquivo, por isso usa-se fprintf
        fprintf(arq,"%d %d\n", 1+(rand()%100), 1+(rand()%100)); //Vai imprimir dois números aleatórios entre 1 e 100 em cada linha. 
    }

    //Fechar o arquivo. 
    fclose(arq);

    return N;
}

//Função que vai calcular e exibir a média dos valores de x e y.
void exibirMediaValores (int mat[][2], int N) //Vai receber a matriz e o total de linhas, que foi gerado aleatoriamente no geraArquivo. 
{
    //Inicializar Variáveis para armazenas a soma dos valores de x e y, nesse caso x é a coluna 0 e y é a coluna 1. 
    int somaX = 0, somaY = 0; //Somas de cada coluna. 
    float mediaX, mediaY; //Variáveis para armazenar a média.

    //Percorrer a matriz para calcular a soma dos valores de x e y. 
    for (int i = 0; i < N; i++)
    {
        //Somar os valores de cada coluna, sendo [i] os valores de cada linha. 
        somaX += mat[i][0]; 
        somaY += mat[i][1];
    }

    //Exibir média dos valores de cada coluna. 
    mediaX = (float)somaX / N; //Convertendo para float porque se trata de média.
    mediaY = (float)somaY / N; //Convertendo para float porque se trata de média.

    //Exibir a média dos valores de x e y. 
    printf("\n&&&&&&&\nMedia dos valores de x %.2f\n", mediaX);
    printf("Media dos valores de y %.2f\n", mediaY);
}

//Função que vai editar um valor no arquivo de entradaTroca.txt. 
void editarValor(int mat[][2], int N) //Vai receber a matriz e o total de linhas. 
{
    //Gerar um novo arquivo de entrada para sobrescrever o antigo. 
    FILE *arq = fopen("./entradaTroca.txt","w"); 

    //Inicializar Variáveis. 
    char resposta; 
    int novoValor, linhaAlterar;

    //Solicitar qual linha trocar, qual coordenada (coluna) e o novo valor que vai substituir o antigo. 
    printf("Qual linha deseja alterar (1 a %d): ",N);
    scanf("%d",&linhaAlterar);
    
    printf("Quer alterar qual coordenada x ou y: ");
    scanf(" %c",&resposta);
    
    printf("Qual eh o novo valor: ");
    scanf("%d",&novoValor);

    //Realizar a alteração na matriz. 
    if (resposta == 'x' || resposta == 'X') {
        mat[linhaAlterar - 1][0] = novoValor; //Como linha começa com 1, precisa usar linhaAlterar - 1, para acessar o índice correto.
    } 
    else {
        mat[linhaAlterar - 1][1] = novoValor; //Como linha começa com 1, precisa usar linhaAlterar - 1, para acessar o índice correto.
    }

    //Reescrever o arquivo com os novos valores da matriz.
    for (int i = 0; i < N; i++) //Percorrer todas as linhas.     
        fprintf(arq,"%d %d\n",mat[i][0],mat[i][1]); //Escrever cada linha com os valores atualizados. 

    //Fechar o arquivo. 
    fclose(arq);
}

//Função que troca os valores de A e B usando ponteiros. 
void troca (FILE *arq, int *A, int *B) //Receber os endereços de A e B e do arquivo. 
{
    //Inicializar variável auxiliar. 
    int aux;

    //Imprimir valores iniciais. 
    printf("Troca inicio A = %d e B = %d\n",*A,*B);
    fprintf(arq,"Troca inicio A = %d e B = %d\n",*A,*B); //Gravar os valores iniciais no arquivo, por isso utiliza-se fprintf.

    //Realiza a troca dos valores. 
    aux = *A;
    *A = *B;
    *B = aux;

    //Imprimir valores finais. 
    printf("Troca fim A = %d e B = %d\n",*A,*B);
    fprintf(arq,"Troca fim A = %d e B = %d\n",*A,*B); //Imprimir valores finais no arquivo.
}

int main()
{
    //Inicializar Variável para armazenar o total de linhas do arquivo gerado. 
    int totalLinhas = geraArquivo();
    char opcao;

    //Gerar um arquivo de entrada sendo ele para leitura e um arquivo de saída para gravação.
    FILE *entrada = fopen("./entradaTroca.txt","r");
    FILE *saida = fopen("./saidaTroca.txt","w");

    //Inicializar a matriz para armazenar os valores lidos no arquivo. 
    int matriz[totalLinhas][2], ln = 0; //Inicializar linha com 0, pra não ter lixo. 

    //PRIMEIRO PASSO: Ler todos os valores do arquivo e armazenar na matriz.
    //Como o arquivo foi aberto para leitura, usa-se fscanf para ler os valores.
    while(fscanf(entrada,"%d%d", &matriz[ln][0], &matriz[ln][1]) != EOF) //Enquanto não chegar ao final do arquivo, vai lendo os valores.
    {
        //Incrementar a linha para ler o próximo par de valores.
        ln++;
    }
    
    //Fechar o arquivo de entrada após terminar de ler todos os valores.
    fclose(entrada);

    //SEGUNDO PASSO: Verificar se o usuário quer editar algum valor no arquivo.
    //AGORA a matriz já está preenchida com os valores do arquivo, então é seguro editar.
    printf("Quer editar arquivo (S ou N): ");
    scanf(" %c", &opcao);

    //Verificar a resposta do usuário. 
    if (opcao == 'S' || opcao == 's') { //Se for sim, chamar a função para editar o valor. 
        editarValor(matriz,totalLinhas);  //Chamar a função enviando a matriz e o total de linhas.
        
        //Como o arquivo foi editado, precisamos reabrir e reler os valores atualizados.
        entrada = fopen("./entradaTroca.txt","r"); //Reabrir o arquivo para leitura.
        ln = 0; //Resetar o contador de linhas.
        
        //Reler todos os valores do arquivo atualizado.
        while(fscanf(entrada,"%d%d",&matriz[ln][0],&matriz[ln][1]) != EOF)
        {
            ln++;
        }
        
        //Fechar o arquivo novamente após reler.
        fclose(entrada);
    }

    //TERCEIRO PASSO: Processar cada linha da matriz, fazer a troca e gravar no arquivo de saída.
    for (int i = 0; i < totalLinhas; i++) //Percorrer todas as linhas da matriz.
    {
        //Mostrar os valores antes da troca. 
        printf("\n**********\nMain antes X = %d e Y = %d\n",matriz[i][0],matriz[i][1]);
        //Mostrar os valores antes da troca no arquivo. 
        fprintf(saida,"Main antes X = %d e Y = %d\n",matriz[i][0],matriz[i][1]);

        //Chamar a função de troca enviando o endereço dos elementos da matriz. 
        troca(saida,&matriz[i][0],&matriz[i][1]); //Vai enviar o endereço dos elementos da matriz para trocar os valores.

        //Mostrar os valores depois da troca. 
        printf("Main depois X = %d e Y = %d\n",matriz[i][0],matriz[i][1]);
        //Mostrar os valores depois da troca no arquivo.
        fprintf(saida,"Main depois X = %d e Y = %d\n",matriz[i][0],matriz[i][1]);
    }

    //QUARTO PASSO: Depois de processar todas as trocas, calcular e exibir a média dos valores.
    exibirMediaValores(matriz,totalLinhas); //Chamar a função enviando a matriz e o total de linhas que foi informado no geraArquivo. 

    //Fechar o arquivo de saída.
    fclose(saida);

    return 0;
}