int main()
{
    //Inicializar Variáveis. 
    int num_op, pecas_op, num_maior, cont_m = 0, cont_f = 0;
    float total_pecas = 0, media_m = 0, salario_maior, media_f = 0, salario_op, total_folha = 0; 
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

        printf("Digite o total de peças fabricadas pelo operario: "); 
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
        
    }
}