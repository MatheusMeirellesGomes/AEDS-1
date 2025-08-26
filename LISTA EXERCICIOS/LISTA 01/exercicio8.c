//Construa um programa que lê uma opção conforme abaixo (usar estrutura SWITCH) e o salário atual do funcionário,
//calcule e exibe o novo salário:
//A = aumento de 8% no salário; B = aumento de 11% no salário;
//C = aumento fixo no salário (de R$ 350,00 se o salário atual for até R$ 1000 e de R$ 200,00 se o salário atual for maior que R$ 1000).
int main()
{
    //Inicializar Variáveis.
    float sal_inicial, aumento, sal_final;
    char opcao;

    //Receber informações.
    printf("Escolha uma opcao (A - C): ");
    scanf(" %c", &opcao);

    printf("\nSalario Inicial = R$ ");
    scanf("%f", &sal_inicial);

    //Verificar a opção escolhida e calcular o novo salário.
    switch (opcao) //Usando switch conforme solicitado.
    {
        case 'A': //Seguindo a forma correta da estrutura switch, caso por caso.
            aumento = sal_inicial * 0.08;
            sal_final = sal_inicial + aumento;
            printf("Salario Final = R$ %.2f\n", sal_final);
            break;

        case 'B':
            aumento = sal_inicial * 0.11;
            sal_final = sal_inicial + aumento;
            printf("Salario Final = R$ %.2f\n", sal_final);
            break;

        case 'C':
            if (sal_inicial <= 1000){
                sal_final = sal_inicial + 350;
                printf("Salario Final = R$ %.2f\n", sal_final);
            }
            else if (sal_inicial > 1000){
                sal_final = sal_inicial + 200;
                printf("Salario Final = R$ %.2f\n", sal_final);
            }
            break;

        default: //Como se fosse o 'else' da estrutura if-else.
                printf("Opcao Invalida.\n");
                break;
    }
    return 0;
}
