//Receba o salário bruto de um funcionário e, usando a tabela do livro, calcule e mostre o valor a receber. Sabe-se que este é composto pelo salário bruto, 
//acrescido de gratificação e descontado o imposto de 7% sobre o salário. 
int main()
{
    //Inicializar Variáveis. 
    float sal_bruto, gratificacao = 0, imposto, sal_final; 

    //Receber informações. 
    printf("Informe o salario bruto: R$ "); 
    scanf("%f", &sal_bruto); 

    //Verificar a tabela e ver qual a gratificação.
    if (sal_bruto <= 350){
        gratificacao = 100; 
    }
    else if (sal_bruto > 350 && sal_bruto <= 600){
        gratificacao = 75; 
    }
    else if (sal_bruto > 600 && sal_bruto <= 900){
        gratificacao = 50; 
    }
    else {
        gratificacao = 35; 
    }

    //Calcular o imposto sobre o salário bruto. 
    imposto = sal_bruto * 0.07;

    //Calcular o salário final acrescido com a gratificação e descontando o imposto. 
    sal_final = (sal_bruto + gratificacao) - imposto; 

    //Imprimir resultado. 
    printf("\nSalario final: R$ %.2f\n", sal_final); 

    return 0; 
}