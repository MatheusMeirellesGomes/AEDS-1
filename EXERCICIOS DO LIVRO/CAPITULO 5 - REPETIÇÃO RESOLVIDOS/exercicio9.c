#include <stdio.h> 
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis. 
    float nota1, nota2, mediaAritmetica; 
    int total_alunosA = 0, total_alunosE = 0, total_alunosR = 0; 
    float soma_alunos = 0, mediaClasse; 

    //receber as notas dos 6 alunos dentro do for. 
    for (int cont = 1; cont <= 6; cont++)
    {
        //Receber as duas notas. 
        printf("Informe a primeira nota: "); 
        scanf("%f", &nota1); 

        printf("Informe a segunda nota: "); 
        scanf("%f", &nota2); 

        //Calcular média aritmética das duas notas. 
        mediaAritmetica = (nota1 + nota2) / 2; 

        //Verificar a mensagem de acordo com a média. 
        if (mediaAritmetica <= 3){
            printf("\nREPROVADO.\n"); 
            total_alunosR++; //Salvar quantos alunos foram reprovados.
        }
        else if (mediaAritmetica > 3 && mediaAritmetica <= 7){
            printf("\nEXAME.\n");
            total_alunosE++;  
        }
        else {
            printf("\nAPROVADO.\n"); 
            total_alunosA++; 
        }

        //Verificar média da classe 
        soma_alunos += mediaAritmetica; 

    }

    //Calcular média da classe. 
    mediaClasse = soma_alunos / 6; //A média da classe vai ser o total das notas média dos alunos dividido pela quantidade de aluno da sala. 

    //Imprimir resultados. 
    printf("\nTotal de alunos reprovados: %d\n", total_alunosR); 
    printf("\nTotal de alunos em exame: %d\n", total_alunosE); 
    printf("\nTotal de alunos aprovados: %d\n", total_alunosA); 
    printf("\nMedia da classe: %.2f\n", mediaClasse); 

    return 0;

}