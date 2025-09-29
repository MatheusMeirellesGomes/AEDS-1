//Fazer um programa para: ler um símbolo do teclado; identificar com a estrutura SWITCH e mostrar as seguintes mensagens,
//segundo o caso: "SINAL DE MENOR" "SINAL DE MAIOR" "SINAL DE IGUAL" "OUTRO SINAL".
int main()
{
    //Inicializar Variáveis.
    char opcao;

    //Receber informações.
    printf("Digite o sinal: ");
    scanf(" %c", &opcao);

    //Verificar e imprimir o sinal que foi usado usando a estrutura SWITCH.
    switch (opcao)
    {
        case '<':
            printf("SINAL DE MENOR\n");
            break;

        case '>':
            printf("SINAL DE MAIOR\n");
            break;

        case '=':
            printf("SINAL DE IGUAL\n");
            break;

        default:
            printf("OPCAO INVALIDA\n");
            break;
    }
    return 0;
}
