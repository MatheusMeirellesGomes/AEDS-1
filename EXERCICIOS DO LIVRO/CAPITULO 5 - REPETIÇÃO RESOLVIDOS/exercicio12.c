#include <stdio.h> 
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis. 
    int num_op, pecas_op, num_maior, cont_m = 0, cont_f = 0, total_pecas = 0;
    float media_m = 0, salario_maior, media_f = 0, salario_op, total_folha = 0; 
    char sexo; 

    printf("FABRICA: \n"); 

    //Indicar que são 15 funcionários. 
    for (int cont = 1; cont <= 15; cont++)
    {
        //Receber informações. 
        printf("\nDigite o numero do operario: "); 
        scanf("%d", &num_op); 

        printf("Digite o sexo do operario [M / F]: "); 
        scanf(" %c", &sexo); 

        printf("Digite o total de peças fabricadas pelo %dº operario: ", num_op); 
        scanf("%d", &pecas_op); 

        //Verificar o salário de cada funcionário de acordo com a quantidade de peças fabricadas.
        if (pecas_op <= 30){
            salario_op = 450; 
        }
        else if (pecas_op > 30 && pecas_op <= 50){
            salario_op = 450 + ((pecas_op - 30) * 0.03 * 450); 
        }
        else {
            salario_op = 450 + ((pecas_op - 30) * 0.05 * 450); 
        }

        //Imprimir salário do operário. 
        printf("\nSalario do %dº operario: %.2f\n",num_op, salario_op); 

        //Calcular o total da folha de pagamento da fábrica. 
        total_folha += salario_op; //Vai ser a soma do salário do operário. 

        //Calcular o total de peças fabricada no mês. 
        total_pecas += pecas_op; 

        //Verificar a media de peças fabricada por homens e mulheres. 
        if (sexo == 'M'){
            media_m += pecas_op; //A média masculina vai ser a soma do número de peças fabricadas por homens. 
            cont_m++; 
        }
        else if (sexo == 'F'){
            media_f += pecas_op; //A média feminina vai ser a soma do número de peças fabricadas por mulheres. 
            cont_f++; 
        }

        //Verificar o número do operário(a) de maior salário. 
        if (cont == 1){
            salario_maior = salario_op; //O maior salário será o primeiro salário informado, que no caso será cont 1. 
            num_maior = num_op; 
        }
        else if (salario_op > salario_maior){
            salario_maior = salario_op; //Caso o próximo salário do operário(a), seja maior que o maior salário até então informado, ele passará a ser o maior. 
            num_maior = num_op;
        }
    }

    //Imprimir resultados. 
    printf("\nTotal da folha de pagamento: R$ %.2f\n", total_folha); 
    printf("\nTotal de pecas fabricadas no mes: %d\n", total_pecas); 
    
    //Calcular a média de peças feitas por mulheres. 
    if (cont_f == 0){
        printf("\nNENHUMA MULHER.\n"); 
    }
    else {
        media_f /= cont_f; //A média vai ser a soma das peças fabricadas pelas mulheres, divido pela quantidade de mulheres que fizeram. 
        printf("\nMedia de pecas fabricadas por mulheres: %.2f\n", media_f); 
    }

    //Calcular a méda de peças feitas por homens. 
    if (cont_m == 0){
        printf("\nNENHUM HOMEM.\n");
    }
    else {
        media_m /= cont_m; //Mesma lógica da divisão das mulheres.
        printf("\nMedia de pecas fabricada por homens: %.2f\n", media_m);
    }
    
    //Imprimir o número do operário com maior salário. 
    printf("\nNumero do operario com maior salario: %d\n", num_maior);

    return 0;

}