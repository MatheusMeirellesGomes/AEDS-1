//Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um programa que receba o salário do funcionário e mostre o 
//valor do salário reajustado ou uma mensagem, caso ele não tenha direito a aumento. 
int main()
{
    //Inicializar Variáveis. 
    float sal_inicial, aumento, sal_reajustado; 

    //Receber Informações necessárias. 
    printf("Informe o salario inicial: R$ "); 
    scanf("%f", &sal_inicial); 

    //Verificar se ele tem aumento ou não. 
    if (sal_inicial < 500){
        aumento = sal_inicial * 0.30; 
    }
    else {
        printf("\nSalario nao tem direito a aumento.\n");
    }
    

    //Calcular o salário reajustado. 7
    sal_reajustado = sal_inicial + aumento; 

    //Imprimir salário reajustado. 
    printf("\nSalario Reajustado: R$ %.2f\n", sal_reajustado); 

    return 0; 

}