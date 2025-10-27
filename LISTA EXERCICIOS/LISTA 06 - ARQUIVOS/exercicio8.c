#include <stdio.h>
#include <stdlib.h>
//Crie um programa que leia a quantidade de veículos que uma locadora de veículos possui e o valor que ela cobra por cada aluguel, 
//mostrando as informações pedidas a seguir:
//a) Sabendo-se que um terço dos veículos são alugados por mês, exiba o faturamento anual da locadora;
//b) Quando o cliente atrasa a entrega, é cobrada uma multa de 20% sobre o valor do aluguel. Sabendo que um décimo dos veículos alugados 
//no mês é devolvido com atraso, calcule o valor ganho com multas no mês; 
//c) Sabe-se ainda que 2% dos veículos precisam de manutenção ao longo do ano. Calcule o valor gasto com a manutenção anual, sabendo 
//que o valor gasto em média com a manutenção é de R$ 600,00.
//Além de mostrar os resultados na tela, grave em um arquivo chamado resultado.txt. Cada valor deverá ser armazenado em uma linha. 
int main()
{
    //Inicializar Variáveis. 
    int qntdVeiculos;  
    float valorAluguel, faturamentoAnual, valorMultasMensal, gastoManutencaoAnual;  

    //Abrir o arquivo para escrita. 
    FILE *arq = fopen("./resultado.txt", "w"); 

    //Receber informações necessárias do usuário. 
    printf("Informe a quantidade de veiculos que a locadora possu: "); 
    scanf("%d", &qntdVeiculos); 

    printf("Informe o valor que a locadora cobra por cada aluguel: R$ ");
    scanf("%f", &valorAluguel); 

    //Calcular o faturamemto anual da locadora. 
    faturamentoAnual = (qntdVeiculs / 3.0) * valorAluguel * 12.0;
    //Faturamento anual = (1/3 dos veículos alugados por mês) * (valor do alugel) * 12 meses (anual). 

    //Calcular o valor ganho com multas no mês. 
    valorMultasMensal = ((qntdVeiculos / 3.0) / 10.0) * (valorAluguel * 0.20);
    //Valor ganho com multas no mês = (1/10 dos veículos alugados no mês) * (20% do valor do aluguel).

    //Calcular o valor gasto com a manutenção anual. 
    gastoManutencaoAnual = (qntdVeiculos * 0.02) * 600.0; 

    //Gravar os resultados no arquivo. 
    fprintf(arq, "Faturamento anual da locadora: R$ %.2f\n", faturamentoAnual); 
    fprintf(arq, "Valor ganho com multas no mes: R$ %.2f\n", valorMultasMensal);
    fprintf(arq, "Valor gasto com a manutencao anual: R$ %.2f\n", gastoManutencaoAnual);

    //Fechar o arquivo. 
    fclose(arq); 

    //Mostrar os resultados na tela. 
    printf("\nFaturamento anual da locadora: R$ %.2f\n", faturamentoAnual); 
    printf("Valor ganho com multas no mes: R$ %.2f\n", valorMultasMensal);
    printf("Valor gasto com a manutencao anual: R$ %.2f\n", gastoManutencaoAnual);

    return 0; 
}