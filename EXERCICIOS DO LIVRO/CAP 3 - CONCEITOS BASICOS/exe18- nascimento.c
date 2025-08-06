//Receber o ano do nascimento da pessoa, e o ano atual, calcular e mostrar:
//a) A idade dessa pessoa.
//b) Quantos anos ela terá em 2050.

int main()
{
    //Inicializar o programa com os dados do enunciado
    int ano_nasc, ano_atual, nova_idade, idade_2050;

    //Receber os dados do usuário
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    //Fazer o cálculo para achar o que se pede
    nova_idade = ano_atual - ano_nasc;
    idade_2050 = 2050 - ano_nasc;

    //Imprimir o que pede no enunciado
    printf("A idade eh: %d  \nEm 2050 ele(a) tera: %d", nova_idade, idade_2050);

    return 0;

}