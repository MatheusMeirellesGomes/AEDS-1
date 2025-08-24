//Faça um algoritmo que leia o ano de nascimento de uma pessoa e calcule sua idade, considerando o ano atual. 
//Para verificar se já fez aniversário no ano atual pergunte se a pessoa já fez aniversário, sendo que ela pode entrar com a informação "S"(sim) ou "N" (não). 
//Com isto é possível se ter maior precisão sobre a idade. Verifique também se a pessoa já tem idade para conseguir Carteira de Habilitação (18 anos ou mais) e 
//imprima a mensagem referente a esta checagem. Imprima a idade da pessoa.
int main()
{
    //Inicializar Variáveis. 
    int ano_nasc, ano_atual = 2025, idade_atual, niver;  //Considerando o ano atual como 2025.
    char s; 

    //Receber informações de ano de nascimento e atual, e se ela ja fez aniversário ou não. 
    printf("Digite ano de nascimento: "); 
    scanf("%d", &ano_nasc); 

    printf("Ja fez aniversario (S / N): "); 
    scanf(" %c", &s); 

    //Calcular a idade dela. 
    idade_atual = ano_atual - ano_nasc; 

    //Verificar se ela ja fez aniversário ou nao.
    if (s == 'N')
    {
        idade_atual -= 1; //Se ela não tiver feito aniversário, subtraia 1 na idade atual dela.
    }

    //Verificar se ela pode dirigir ou não.
    if (idade_atual >= 18)
    {
        printf("Pode dirigir");
    }
    else 
    {
        printf("Nao pode dirigir");
    }

    //Imprimir a idade dela. 
    printf("\nIdade atual: %d anos", idade_atual); 
    
    return 0;
}