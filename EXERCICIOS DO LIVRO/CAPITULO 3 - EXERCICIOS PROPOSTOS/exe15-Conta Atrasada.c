//João recebeu o salário e precisa pagar duas contas atrasadas, em razão ele deverá pagar multa de
//2% sobre cada conta. Calcule e mostre quanto restará do salário de João.
int main()
{
    //Inicializar com dados do enunciados.
    float sal_atual, conta1, conta2, multa1, multa2, multa_total, sal_final;

    //Receber as informações necessárias.
    printf("Salario de Joao = R$ ");
    scanf("%f", &sal_atual);
    printf("Valor da primeira conta = R$ ");
    scanf("%f", &conta1);
    printf("Valor da segunda conta = R$ ");
    scanf("%f", &conta2);

    //Calcular o valor das multas.
    multa1 = conta1 * 0.02;//Multiplicar por 0.02 para obte o valor da multa de 2% ou seja 2/100.
    multa2 = conta2 * 0.02;
    multa_total = multa1 + multa2; //Soma o valor da multa 1 com a multa 2 para obter o valor total das multas.

    //Calcular o salário final
    sal_final = sal_atual - (conta1 + conta2 + multa_total);//Subtrair o salário atual pela soma das contas mais o valor total das multas. 

    //Imprimir salário final.
    printf("Valor das multas = R$ %.2f\n", multa_total);
    printf("Salario Final com desconto = R$ %.2f", sal_final);

    return 0;

}
