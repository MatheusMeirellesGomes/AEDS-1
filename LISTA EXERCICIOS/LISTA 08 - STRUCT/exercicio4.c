#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Uma determinada biblioteca possui obras de ciências exatas, humanas e biológicas, totalizando 1500 volumes, distribuídos em cada uma das áreas. 
//O proprietário resolveu agrupar as informações de cada livro no seguinte registro:
//• Código de catalogação
//• Doação (S/N)
//• Nome da obra
//• Nome do autor
//• Editora
//• Área
//Construir um algoritmo que:
//a) cadastre todos os volumes de cada uma das áreas em três vetores distintos
//b) permita ao usuário fazer consulta às informações cadastradas fornecendo o código de catalogação e a área. Existindo tal livro as informações são exibidas,
//caso contrário enviar mensagem de aviso. A consulta se repete até que o usuário digite código finalizador-1

//Typedef para o registro do livro.
typedef struct {
    //Inicializar Variáveis que foram informadas para o registro de cada livro.
    int codigoCatalogacao;
    char doacao; //S - sim; N - não.
    char nomeObra[100];
    char nomeAutor[100];
    char editora[100];
    char area[20]; //Exatas, Humanas ou Biologicas.
} Livro; //Registro (struct) criado para ter os dados do livro.

//Função para cadastrar livros em um vetor específico.
void cadastrarLivros(Livro livros[], int quantidade, char* area) {
    printf("\n=== Cadastro de livros da area: %s ===\n", area);
    
    for (int cont = 0; cont < quantidade; cont++) {
        printf("\nLivro %d de %d:\n", cont + 1, quantidade);
        
        //Primeiro, ler o código de catalogação.
        printf("Informe o codigo de catalogacao: ");
        scanf("%d", &livros[cont].codigoCatalogacao);
        
        //Segundo, ler se é doação.
        printf("O livro e doacao? (S - sim; N - nao): ");
        scanf(" %c", &livros[cont].doacao);
        
        //Terceiro, ler o nome da obra.
        printf("Informe o nome da obra: ");
        scanf(" %[^\n]", livros[cont].nomeObra);
        
        //Quarto, ler o nome do autor.
        printf("Informe o nome do autor: ");
        scanf(" %[^\n]", livros[cont].nomeAutor);
        
        //Quinto, ler a editora.
        printf("Informe a editora: ");
        scanf(" %[^\n]", livros[cont].editora);
        
        //Sexto, armazenar a área do livro.
        strcpy(livros[cont].area, area);
    }
}

//Função para consultar livro por código e área.
int consultarLivro(Livro livros[], int quantidade, int codigo) {
    for (int cont = 0; cont < quantidade; cont++) {
        if (livros[cont].codigoCatalogacao == codigo) {
            //Livro encontrado, exibir informações.
            printf("\n=== Livro encontrado ===\n");
            printf("Codigo de Catalogacao: %d\n", livros[cont].codigoCatalogacao);
            printf("Doacao: %c\n", livros[cont].doacao);
            printf("Nome da Obra: %s\n", livros[cont].nomeObra);
            printf("Nome do Autor: %s\n", livros[cont].nomeAutor);
            printf("Editora: %s\n", livros[cont].editora);
            printf("Area: %s\n", livros[cont].area);
            return 1; //Retornar 1 indicando que o livro foi encontrado.
        }
    }
    return 0; //Retornar 0 indicando que o livro não foi encontrado.
}

//Função principal.
int main() {
    //Declarar Variáveis.
    int qtdExatas, qtdHumanas, qtdBiologicas;
    
    //Solicitar ao usuário as quantidades de livros para cada área.
    printf("=== Sistema de Cadastro de Biblioteca ===\n");
    printf("Informe a quantidade de livros de Ciencias Exatas: ");
    scanf("%d", &qtdExatas);
    
    printf("Informe a quantidade de livros de Ciencias Humanas: ");
    scanf("%d", &qtdHumanas);
    
    printf("Informe a quantidade de livros de Ciencias Biologicas: ");
    scanf("%d", &qtdBiologicas);
    
    //Declarar os três vetores distintos para cada área.
    Livro livrosExatas[qtdExatas];
    Livro livrosHumanas[qtdHumanas];
    Livro livrosBiologicas[qtdBiologicas];
    
    //Cadastrar livros de cada área.
    cadastrarLivros(livrosExatas, qtdExatas, "Exatas");
    cadastrarLivros(livrosHumanas, qtdHumanas, "Humanas");
    cadastrarLivros(livrosBiologicas, qtdBiologicas, "Biologicas");
    
    //Consulta aos livros cadastrados.
    printf("\n=== Sistema de Consulta ===\n");
    printf("Para finalizar, digite -1 como codigo de catalogacao.\n");
    
    int codigoConsulta;
    int opcaoArea;
    
    while (1) {
        printf("\nInforme o codigo de catalogacao para consulta: ");
        scanf("%d", &codigoConsulta);
        
        //Verificar se o usuário deseja finalizar.
        if (codigoConsulta == -1) {
            printf("Encerrando sistema de consulta...\n");
            break;
        }
        
        //Solicitar a área do livro.
        printf("Informe a area do livro:\n");
        printf("1 - Ciencias Exatas\n");
        printf("2 - Ciencias Humanas\n");
        printf("3 - Ciencias Biologicas\n");
        printf("Opcao: ");
        scanf("%d", &opcaoArea);
        
        int encontrado = 0;
        
        //Buscar o livro na área correspondente.
        switch (opcaoArea) {
            case 1:
                encontrado = consultarLivro(livrosExatas, qtdExatas, codigoConsulta);
                break;
            case 2:
                encontrado = consultarLivro(livrosHumanas, qtdHumanas, codigoConsulta);
                break;
            case 3:
                encontrado = consultarLivro(livrosBiologicas, qtdBiologicas, codigoConsulta);
                break;
            default:
                printf("Opcao de area invalida!\n");
                continue;
        }
        
        //Se o livro não foi encontrado, exibir mensagem.
        if (!encontrado) {
            printf("\nAviso: Livro com codigo %d nao encontrado na area selecionada.\n", codigoConsulta);
        }
    }
    
    return 0;
}