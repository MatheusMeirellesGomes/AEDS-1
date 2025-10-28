//Receba o salário de um funcionário e, usando a tabela do livro, calcule e mostre: 
int main()
{
    //Inicializar Variáveis.
    float sal_inicial, aumento, sal_final; 

    //Receber salário. 
    printf("Informe salario do funcionario: "); 
    scanf("%f", &sal_inicial); 

    //Verificar o aumento de acordo com a tabela.
    if (sal_inicial <= 300){
        aumento = sal_inicial * 0.50; 
    }
    else if (sal_inicial > 300 && sal_inicial <= 500){
        aumento = sal_inicial * 0.40; 
    }
    else if (sal_inicial > 500 && sal_inicial <= 700){
        aumento = sal_inicial * 0.30; 
    }
    else if (sal_inicial > 700 && sal_inicial <= 800){
        aumento = sal_inicial * 0.20; 
    }
    else if (sal_inicial > 800 && sal_inicial <= 1000){
        aumento = sal_inicial * 0.10; 
    }
    else {
        aumento = sal_inicial * 0.05; 
    }

    //Calcular salário final. 
    sal_final = sal_inicial + aumento;

    //Imprimir salário final. 
    printf("\nSalario Final: R$ %.2f\n", sal_final); 

    return 0;

}
