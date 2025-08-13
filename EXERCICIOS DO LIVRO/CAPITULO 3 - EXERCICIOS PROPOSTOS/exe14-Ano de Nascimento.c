//Receber o ano de nascimento de uma pessoa e o ano atual, calcular e mostrar:
//a) a idade dessa pessoa em anos.
//b) a idade dessa pessoa em meses
//c) a idade dessa pessoa em dias.
//d) a idade dessa pessoa em semanas. 
int main()
{
    //Inicializar com dados do enunciado 
    int ano_nasc, ano_atual, idade_atual, idade_mensal, idade_diaria, idade_semana; 
    
    //Receber o ano de nascimento e o ano atual. 
    printf("Digite o ano de nascimento: "); 
    scanf("%d", &ano_nasc); 
    printf("Digite o ano atual: "); 
    scanf("%d", &ano_atual);
    
    //Calcular o que o enunciado pede.
    idade_atual = ano_nasc; //Idade em anos. 
    idade_mensal = idade_atual * 12; //Como o ano tem 12 meses, basta muultiplicar a idade em anos por 12.
    idade_diaria = idade_atual * 365; //Como o ano tem 365 dias, baste multiplicar a idade em anos por 365. 
    idade_semana = idade_atual * 52; //Como o ano tem 52 semanas, basta multiplicar a idade em anos por 52. 
    
    //Imprimir os resultados. 
    printf("Idade em anos = %d\n", idade_atual);
    printf("Idade em meses = %d\n", idade_mensal);
    printf("Idade em dias = %d\n", idade_diaria);
    printf("Idade em semanas = %d\n", idade_semana);

    return 0;
}