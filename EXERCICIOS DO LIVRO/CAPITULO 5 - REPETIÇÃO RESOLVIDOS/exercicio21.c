#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicialzar Variáveis.
    float num, soma = 0, media_num, somaNum = 0;
    float maiorNum = 0, menorNum = 0, mediaPar, somaPar = 0,  porcentagem;
    int qntd_num = 0, qntdPar = 0, qntdImpar = 0;

    //Receber número primeiro para então verificá-lo.
    printf("Informe um numero: ");
    scanf("%f", &num);

    //Apenas executar o código se o número digitado for diferente de 30.000.
    do
    {
        if (num == 30000){
            printf("\nPROGRAMA ENCERRADO!\n");
        }
        else {
            
            //Informar o maior e menor número.
            if (qntd_num == 0){
                maiorNum = num;
                menorNum = num;
            }
        
            //Fazer a soma dos números.
            soma += num;

            //Verificar a quantidade de números digitados e soma-los para depois achar a média.
            somaNum += num;
            qntd_num++;

            //Verificar o maior número digitado.
            if (num > maiorNum){
                maiorNum = num;
            }

            //Verificar menor número.
            if (num < menorNum){
                menorNum = num;
            }

            //A média de números pares.
            if (fmod (num,2) == 0){
                somaPar += num; //Vai somar apenas os números que forem pares.
                qntdPar++;
            }

            //Calcular a porcentagem de números ímpares entre todos os números digitados.
            if (fmod (num, 2) != 0){
                qntdImpar++;
            }

            //Receber número novamente para entrar na repetição até que o 30.000 seja digitado e encerre o programa.
            printf("\nInforme outro numero: ");
            scanf("%f", &num);
        }
    } while (num != 30000);

    //Imprimir resultados e verificar médias.
    if (qntd_num == 0){
        printf("\nNENHUM NUMERO INFORMADO!\n");
    }
    else {
        //Imprimir soma e quantidade de números digitados.
        printf("\nSoma = %.2f\n", soma);
        printf("Quantidade de numeros digitados: %d\n", qntd_num);

        //Informar média de números digitados.
        media_num = somaNum / qntd_num; //É a soma de todos os números dividos pela quantidade de números.
        printf("Media dos numeros digitados: %.2f\n", media_num);

        //Informar o maior e menor número digiado.
        printf("Maior numero infomado: %.2f\n", maiorNum);
        printf("Menor numero informado: %.2f\n", menorNum);

        //Informar a média de números pares.
        if (qntdPar == 0){
            printf("\nNao foram informados numeros pares.\n");
        }
        else {
            mediaPar = somaPar / qntdPar; //É a soma de todos os pares divido pela quantidade de par.
            printf("Media de numeros pares: %.2f\n", mediaPar);
        }
        
        //Informar a porcentagem de números ímpares.
        if (qntdImpar == 0){
            printf("\nNao foram informados numeros impares.\n"); 
        }
        else {
            porcentagem = (qntdImpar * 100) / qntd_num; //Vai ser a quantidade de números ímpares vezes 100, dividido pela quantidade de números do programa todo.
            printf("Porcentagem de numeros impares: %.2f%%\n", porcentagem);
    }

    return 0;
}
