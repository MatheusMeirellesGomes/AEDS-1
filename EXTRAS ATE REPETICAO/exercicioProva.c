#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Uma sala possui capacidade pra vários lugares. Certo dia resolveram organizar as carteiras da sala de aula pela mão que os alunos preferem escrever. Para isso, 
//solicitaram para cada aluno seu sexo, (F- feminino, M- masculino), sua idade, e a mão que prefere escrever (D- destro, C- canhoto, A- ambidestro). 
//Faça um programa que receba e leia esses dados, calcula e imprima: 
//a) A quantidade de ambidestros. 
//b) O sexo que possui mais canhotos.  
//c) A média de idade das mulheres que são destras. 
//As informações são lidas até que uma idade nula ou negativa seja digitada. 
int main()
{
    //Inicializar Variáveis. 
    int idade, qntd_ambidestro = 0, qntd_canhotoF = 0, qntd_mulherDestra = 0, somaDestra = 0; 
    int qntd_canhotoM = 0;
    float media_mulherDestra; 
    char sexo, mao_dominante; 

    //Receber idade do aluno. 
     printf("Idade do aluno(a): "); //Primeiro o programa vai pedir a idade do aluno. 
     scanf("%d", &idade); 

    //Receber informações dentro da repetição. 
    while (idade > 0) //Caso essa idade seja maior que zero, ai sim vai executar o que tem dentro do while. 
    {
        //Receber informações.
        printf("Sexo do aluno(a) [F- feminino / M- masculino]: "); 
        scanf(" %c", &sexo); 

        printf("Mao que o aluno(a) prefere escrever [D- destro / C- canhoto / A- ambidestro]: "); 
        scanf(" %c", &mao_dominante); 

        //Verificar quantidade de ambidestros. 
        if (mao_dominante == 'A'){
            qntd_ambidestro++; //Vai salvar na variável a quantidade de ambidestros. 
        }

        //Verificar o sexo que possui mais canhotos. 
        if (sexo == 'F'){
            if (mao_dominante == 'C'){
                qntd_canhotoF++; 
            }
        }
        else if (sexo == 'M'){
            if (mao_dominante == 'C'){
                qntd_canhotoM++; 
            }
        }

        //Verificar média de idade das mulheres que são destras. 
        if (sexo == 'F' && mao_dominante == 'D'){
            qntd_mulherDestra++; 
            somaDestra += idade; 
        }

        //Receber idade do aluno novamente.
        printf("Idade do aluno(a): "); //Depois de receber as três informações volta nessa informação primeiramente, para depois receber as outras. 
        scanf("%d", &idade); 
    }

    //Imprimir quantidade de ambidestros. 
    printf("\nQuantidade de ambidestro na sala: %d\n", qntd_ambidestro); 

    //Imprimir o sexo que possui mais canhotos. 
    if (qntd_canhotoF > qntd_canhotoM){
        printf("\nSexo que possui mais canhotos: F\n"); 
    }
    else if (qntd_canhotoM > qntd_canhotoF) {
        printf("\nSexo que possui mais canhotos: M\n"); 
    }
    else {
        printf("\nA quantidade de canhotos eh a mesma.\n");
    }

    //Imprimir média de idade das mulheres que são destras.
    if (qntd_mulherDestra > 0){ //Pode ter risco de não haver mulheres destras na sala. 
        media_mulherDestra = somaDestra / qntd_mulherDestra; 
        printf("\nMedia de idade das mulheres que sao destras: %.2f\n", media_mulherDestra); 
    } 
    else {
        printf("\nNao houve mulheres ambidestras na sala.\n");
    }

    return 0; 
   
}