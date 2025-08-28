//Um funcionário recebe anualmente, um aumento salarial. Sabe-se que: 
//a) ELe foi contratado em 2005, com salário inicial de R$ 1000,00; 
//b) Em 2006, ele recebeu um aumento de 1,5% sobre seu salário inicial; 
//c) A partir de 2007(inclusive), os aumentos salariais corresponderam ao dobro do percentual do ano anterior. 
//Determine o salário atual desse funcionário. 
//Estrutura de Repetição.
int main()
{
    //Inicializar Variáveis. 
    int ano_contratacao = 2005, ano_atual = 2025, ano;  
    float sal_inicial = 1000.0, sal_atual, aumento = 0.015, perc_aumento;  //Dois aumentos iniciais: Um pro ano de 2006 e outro pro ano de 2007 e assim por diante.
    
    //Exibir o título e os dados de contratação. 
    printf("Ano de Contratacao: %d\n", ano_contratacao); 
    printf("Salario Inicial: R$ %.2f\n", sal_inicial); 
    printf("Ano Atual: %d", ano_atual);

    //Calcular o salário atual do funcionário. 
    sal_atual = sal_inicial; //O salário atual começa sendo o salário inicial. 
    perc_aumento = aumento; //O primeiro aumento é de 1,5% (0.015). 

    //Calcular o salário ano a ano, com a estrutura de repetição for. 
    for (ano = ano_contratacao + 1; ano <= ano_atual; ano++) //Começa no ano seguinte ao ano de contratação, até o final do ano atual.
    {
        sal_atual = sal_atual + (sal_atual * perc_aumento); //Salário atual é o salário do ano anterior mais o aumento.
        perc_aumento = perc_aumento * 2; //O percentual de aumento dobra a cada ano.
        printf("\nAno: %d - Salario: R$ %.2f - Percentual de Aumento: %.2f%%", ano, sal_atual, perc_aumento * 100);
        //Esse printf esta sendo para mostrar o salário ano a ano, junto com o percentual de aumento, que foi multiplicado por 100 para aparecer em porcentagem.  
    }

    //Exibir o salário atual do funcionário. 
    printf("\nSalario Atual do Funcionario em %d = R$ %.2f\n", ano_atual, sal_atual);

    return 0;
}