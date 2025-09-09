//Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento encontra-se
//na tabela do livro. 
int main()
{
    //Inicializar Variáveis. 
    float sal_inicial, aumento, sal_final; 

    //Receber Informações. 
    printf("Informe o salario inicial: "); 
    scanf("%f", &sal_inicial); 

    //Verificar de acordo com a tabela. 
    if (sal_inicial < 300){
        aumento = sal_inicial * 0.35; 
    }
    else {
        aumento = sal_inicial * 0.15; 
    }

    //Calcular o salário final. 
    sal_final = sal_inicial + aumento; 

    //Imprimir salário final.
    printf("Salario Final: R$ %.2f", sal_final); 

    return 0;
    
}