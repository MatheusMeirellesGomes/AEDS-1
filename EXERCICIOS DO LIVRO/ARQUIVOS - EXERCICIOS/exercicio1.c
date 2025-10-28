#include <stdio.h>
#include <stdlib.h>
//Criar um arquivo com informações de N alunos, onde N é fornecido pelo usuário. 
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

    return 0;
}