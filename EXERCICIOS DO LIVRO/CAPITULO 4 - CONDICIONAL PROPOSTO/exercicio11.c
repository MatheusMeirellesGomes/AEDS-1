//Faça um programa que receba o salário atual de um funcionário e, usando a tabela do livro, calcule e mostre o valor do aumento e o novo salário. 
int main()
{
    //Inicializar Variáveis.
    float sal_atual, aumento, sal_novo; 

    //Receber informações.
    printf("Informe o salario atual: "); 
    scanf("%f", &sal_atual); 

    //Verificar o salário e ver qual aumento ele vai receber. 
    if (sal_atual <= 300){
        aumento = sal_atual * 0.15; 
        printf("\nValor do aumento: R$ %.2f\n", aumento); 
    }
    else if (sal_atual > 300 && sal_atual <= 600){
        aumento = sal_atual * 0.10; 
        printf("\nValor do aumento: R$ %.2f\n", aumento); 
    }
    else if (sal_atual > 600 && sal_atual <= 900){
        aumento = sal_atual * 0.05; 
        printf("\nValor do aumento: R$ %.2f\n", aumento); 
    }
    else {
        aumento = 0; 
        printf("\nESte salario nao tem aumento.\n"); 
    }

    //Calcular o salário final. 
    sal_novo = sal_atual + aumento; 

    //Imprimir salário final. 
    printf("\nSalario com aumento final: R$ %.2f\n", sal_novo); 

    return 0; 
}
