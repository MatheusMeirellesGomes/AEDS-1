#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas
//do aluno, se for ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N alunos e acione o procedimento para cada aluno.
//N deve ser lido do teclado.

//Primeiro Fazer procedimento pra média aritmética.
void mediaAritmetica(float nota1, float nota2, float nota3){
    //Inicializar Variáveis.
    float media; 

    //Calcular média. 
    media = (nota1 + nota2 + nota3) / 3; //Média Artimética é a soma das notas divido pela quantidade de notas. 

    //Imprimir média. 
    printf("\nMedia Artimetica = %.2f\n", media); 
}

//Segundo Fazer procedimento pra média ponderada. 
void mediaPonderada(float nota1, float nota2, float nota3){
    //Inicializar Variáveis.
    float media; 

    //Calcular média. 
    media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10; //Média Ponderada é a soma das notas multiplicado pelos respectivos pesos, dividido por 10. 

    //Imprimir média. 
    printf("\nMedia Ponderada = %.2f\n", media); 
}

//Verificar qual média o usuário vai preferir usar. 
void escolha(float nota1, float nota2, float nota3){
    char letra; 

    //Receber opções.
    printf("Escolha qual média deseja usar [A- Aritmética / P- Ponderada]: "); 
    scanf(" %c", &letra); 

    //Verificar a opção de escolha do usuário. 
    if (letra == 'A' || letra == 'a'){
        mediaAritmetica(nota1, nota2, nota3); //Se a opção for a letra A, vai acionar o procedimento feito, que no caso é a média aritmética.
    }
    else if (letra == 'P' || letra == 'p'){
        mediaPonderada(nota1, nota2, nota3); //Se a opção for letra P, vai acionar o procedimento feito, que no caso é a média ponderada. 
    }
    else {
        printf("\nOpcao Invalida.\n"); 
    }
}

//Acionar os procedimentos no int main. 
int main()
{
    //Inicializar Variáveis. 
    int N; 
    float n1, n2, n3; 

    //Receber quantos alunos vão ser usados para saber as 3 notas de cada um. 
    printf("Quantos alunos: "); 
    scanf("%d", &N);

    //Receber as notas de acordo com a quantidade de aluno informado pelo usuário. 
    for (int cont = 1; cont <= N; cont++){
        //Receber as notas. 
        printf("Informe a primeira nota: "); 
        scanf("%f", &n1); 

        printf("Informe a segunda nota: "); 
        scanf("%f", &n2); 

        printf("Informe a terceira nota: "); 
        scanf("%f", &n3); 

        escolha(n1, n2, n3); 
        //Vai acionar o que tem dentro do procedimento void escolha(), e conforme a letra informada, vai acionar o que tem dentro de cada procedimento. 
    }

    return 0; 
}

