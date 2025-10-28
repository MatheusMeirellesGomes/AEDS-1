//Pegar as informações dos alunos no exerício 1, e ler pelo arquivo e mudar as notas dos alunos. 
int main()
{
    //Inicializar Variáveis. 
    int N, numero; 
    char nome; 
    float nota1, nota2; 

    //Criar arquivo para escrita que vai ter número, nome, curso nota1 e nota2 de N alunos. 
    FILE *arq = fopen("./alunos.txt", "w"); 

    //Verificar quantos alunos o usuário quer cadastrar. 
    printf("Quantos alunos deseja cadastrar: "); 
    scanf("%d", &N); 

    //Loop para cadastrar N alunos. 
    for (int cont = 1; cont <= N; cont++)
    {
        //Receber informações do aluno. 
        printf("\nInforme o numero do aluno: "); 
        scanf("%d", &numero);

        printf("Informe a inicial do aluno: "); 
        scanf(" %c", &nome); 

        printf("Informe a primeira nota do aluno: "); 
        scanf("%f", &nota1);
        
        printf("Informe a segunda nota do aluno: "); 
        scanf("%f", &nota2); 
    }

    //Imprimir no arquivo as informações dos N alunos. 
    fprintf(arq,"Numero: %d\n", numero); 
    fprintf(arq, "Nome: %c\n", nome); 
    fprintf(arq, "Nota 1: %.2f\n", nota1); 
    fprintf(arq,"Nota 2: %.2f\n", nota2); 

    //Fechar o arquivo.
    fclose(arq); 

    //Abrir o arquivo para leitura das informações dos alunos.
    FILE *arqLeitura = fopen("./alunos.txt", "r");

    //Ler as informações dos N alunos do arquivo. 
    for (int cont = 1; cont <= N; cont++)
    {
        //Ler as informações do arquivo. 
        fscanf(arqLeitura, "Numero: %d\n", &numero); 
        fscanf(arqLeitura, "Inicial do Nome: %c\n", &nome);
        fscanf(arqLeitura, "Nota 1: %f\n", &nota1); 
        fscanf(arqLeitura, "Nota 2: %f\n", &nota2);
        
    }

    //Mudar as notas dos alunos lidas do arquivo. 
    for (int cont = 1; cont <= N; cont++)
    {
        //Solicitar ao usuário as novas notas dos alunos. 
        printf("\nInforme a nova primeira nota do aluno %d: ", cont); 
        scanf("%f", &nota1); 

        printf("Informe a nova segunda nota do aluno %d: ", cont); 
        scanf("%f", &nota2); 
    }

    //Fechar o arquivo de leitura. 
    fclose(arqLeitura); 

    //Reabrir o arquivo para escrita das novas notas dos alunos. 
    FILE *arqEscrita = fopen("./alunos.txt", "a"); //Modo "a" para adicionar ao final do arquivo.

    //Imprimir no arquivo as novas notas dos N alunos. 
    for (int cont = 1; cont <= N; cont++)
    {
        fprintf(arqEscrita, "Nova Nota 1: %.2f\n", nota1); 
        fprintf(arqEscrita, "Nova Nota 2: %.2f\n", nota2);
    }

    //Fechar o arquivo de escrita. 
    fclose(arqEscrita);

    return 0;
}