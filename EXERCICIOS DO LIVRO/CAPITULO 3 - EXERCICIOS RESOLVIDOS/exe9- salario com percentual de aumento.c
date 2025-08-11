//Receber o salário de um funcionário e o percentual de aumento,
//calcular e mostrar o valor do aumento e o novo salário
int main()
{
    //inicialzar o programa
    float sal_atual, novo_sal, perc, aumento;

    //receber o salaário do funcionário
    printf("Digite o salario: R$ ");
    scanf("%f", &sal_atual);

    //receber o percentual de aumento
    printf("Digite o percentual de aumento que o salario teve: ");// O percentual de aumento é feito em porcentagem
    scanf("%f", &perc);

    //cálculo do aumento do salario com o percentual
    aumento = sal_atual * perc/100; // esse é o calculo para saber o aumento, vai pegar a porcentagem, e dividir por 100

    //Fazer o cálculo do aumento com o salário atual
    novo_sal = sal_atual + aumento; //Depois do cálculo para saber o aumento ele vai somar o salario atual com o aumento para saber o novo salário
   
    printf("O aumento foi de: R$ %.2f", aumento);//Os dois printf no final do código, um para imprimir o aumento que o salario sofreu. 
    printf("\nO salario ajustado eh de: R$ %.2f", novo_sal);//O outro para saber qual é o novo salário ajustado do funcionário. 

    return 0;

}