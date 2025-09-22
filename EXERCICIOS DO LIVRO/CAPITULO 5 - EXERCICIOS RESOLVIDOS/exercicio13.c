#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis. 
    int num_crianca, meses_vida, qntdF = 0, qntdM = 0, qntd_morta = 0;
    float porcF, porcM, porcMorta; 
    char sexo; 

    //Receber informações. 
    printf("Digite o numero de criancas nascidade nesse periodo: "); 
    scanf("%d", &num_crianca); 

    //Verificar informações de cada criança. 
    for (int cont = 1; cont <= num_crianca; cont++) //Vai verificar uma por uma. 
    {
        //Receber genêro da criança. 
        printf("\nInforme o sexo da criança [M / F]: "); 
        scanf(" %c", &sexo); 

        printf("Digite o tempo de vida (meses) crianca: "); 
        scanf("%d", &meses_vida); 

        //Verificar a quantidade de mortalidade feminina. 
        if (sexo == 'F'){
            qntdF++; 
        }

        //Verificar a quantidade de mortalidade masculina.
        if (sexo == 'M'){
            qntdM++; 
        }

        //Verificar a quantidade de crianças que viveram menos de 24 anos. 
        if (meses_vida <= 24){
            qntd_morta++; 
        }
    }

    //Calcular para passar a quantidade para porcentagem. 
    if (num_crianca == 0){
        printf("\nNenhuma criança.\n"); 
    }
    else {
        porcF = (qntdF * 100.0) / num_crianca; //Cálculo para porcentagem, dividi por 100.0 e dividi pela quantidade de crianças. 
        porcM = (qntdM * 100.0) / num_crianca;
        porcMorta = (qntd_morta * 100.0) / num_crianca;
    }

    //Imprimir resultados.
    printf("\nPercentual de criancas do sexo feminino mortas: %.2f%%\n", porcF); 
    printf("\nPercentual de criancas do sexo masculino mortas: %.2f%%\n", porcM); 
    printf("\nPercentual de criancas com menos de 24 meses mortas: %.2f%%\n", porcMorta); 

    return 0; 
}