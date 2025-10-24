#include <stdio.h>
#include <stdlib.h>
//Crie um programa que receba dados de vários alunos (Matricula e Telefone) e armazene em um arquivo texto chamado saida.txt. Deve-se ler a opção da
//entrada de dados (1-pelo teclado, 2-por arquivo). Se escolhida a leitura por arquivo, considere o nome do arquivo como entrada.txt.
int main()
{
    //Inicializar Variáveis.
    int matricula, opcao;
    long int telefone; //Declarado como long int para suportar números maiores.

    //Abrir o arquivo saida.txt para escrita para armazenar os dados dos alunos.
    FILE *arqSaida = fopen("./saida.txt", "w");

    //Solicitar ao usuário a opção de entrada de dados.
    printf("Escolha a opcao de entrada de dados:\n");
    printf("1 - Pelo teclado \n2- Por arquivo\n");
    printf("Opcao Escolhida: ");
    scanf("%d", &opcao);

    //Verificar a escolha do usuário.
    if (opcao == 1){
        //Receber informações do usuário pelo teclado e mostrar no arquivo saida.txt. 
        printf("Informe a matricula do aluno: "); 
        scanf("%d", &matricula);

        printf("Informe o telefone do aluno: ");
        scanf("%ld", &telefone);

        //Gravar os dados no arquivo saida.txt.
        fprintf(arqSaida, "%d\n", matricula);
        fprintf(arqSaida, "%ld\n", telefone);
    }
    else if (opcao == 2){
        //Abrir o arquivo entrada.txt para leitura dos dados dos alunos.
        FILE *arqEntrada = fopen("./entrada.txt", "r");

        //Ler os dados do arquivo entrada.txt e gravar no arquivo saida.txt.
        while(fscanf(arqEntrada, "%d %ld", &matricula, &telefone) != EOF) { //Vai ter os dados no arquivo entrada.txt e vai passa-los para o arquivo saida.txt. 

            //Gravar os dados no arquivo saida.txt.
            fprintf(arqSaida, "Matricula: %d\n", matricula);
            fprintf(arqSaida, "Telefone: %ld\n", telefone);
        }

        //Fechar arquivo.
        fclose(arqEntrada);
    }
    else {
        printf("\nOpcao Invalida.\n");
    }

    //Fechar os arquivos.
    fclose(arqSaida);

    return 0;
}