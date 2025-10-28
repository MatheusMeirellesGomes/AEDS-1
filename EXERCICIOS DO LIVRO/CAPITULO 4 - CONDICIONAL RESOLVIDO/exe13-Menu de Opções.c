//Apresente o menu a seguir, permitindo o usuário escolher a opção desejada. Receba os dados necessários e mostre o resultado. Verifique a possibilidade
//de opção inválida e não se preocupe com restrições, como salário negativos.
//Menu de Opções: 1- Imposto. 2- Novo Salário. 3- Classificação.
//Imposto: Salário < 500 - 5% percentual de imposto; Salário de 500 a 850 - 10% percentual de imposto; Salário > 850 - 15% percentual de imposto.
//Novo Salário: Salário > R$1500 - aumento de 25 reais; Salário de 750 a 1500 - aumento de 50 reais; Salario de 450 a 750 - aumento de 75 reais;
//Salario < 450 - aumento de 100 reais.
//Classificação: Salário até 700 - Mal remunerado; Salario > 700 - Bem remunerado.
//Opção 1: Receber o salário, calcular e mostrar o valor do imposto. Opção 2: Receber o salário, calcular e mostrar o novo salário.
//Opção 3: Receber o salário e mostrar a classificação.
int main()
{
    //inicialiar Variáveis.
    float sal_inicial, imposto, novo_sal, aumento;
    int opcao;

    //Receber o salário.
    printf("Informe o salario: R$ ");
    scanf("%f", &sal_inicial);

    printf("Escolha uma das opcoes a seguir (1 a 3): ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            if (sal_inicial < 500){
                imposto = sal_inicial * 0.05;
                printf("\nValor do imposto: R$ %.2f", imposto);
            }
            else if (sal_inicial >= 500 && sal_inicial <= 850){
                imposto = sal_inicial * 0.10;
                printf("\nValor do imposto: R$ %.2f", imposto);
            }
            else if (sal_inicial > 850){
                imposto = sal_inicial * 0.15;
                printf("\nValor do imposto: R$ %.2f", imposto);
            }
            break;
        case 2:
            if (sal_inicial > 1500){
                aumento = sal_inicial + 25;
                novo_sal = sal_inicial + aumento;
                printf("\nSalario Novo = R$ %.2f", novo_sal);
            }
            else if (sal_inicial >= 750 && sal_inicial <= 1500){
                aumento = sal_inicial + 50;
                novo_sal = sal_inicial + aumento;
                printf("\nSalario Novo = R$ %.2f", novo_sal);
            }
            else if (sal_inicial >= 450 && sal_inicial < 750){
                aumento = sal_inicial + 75;
                novo_sal = sal_inicial + aumento;
                printf("\nSalario Novo = R$ %.2f", novo_sal);
            }
            else if (sal_inicial < 450){
                aumento = sal_inicial + 100;
                novo_sal = sal_inicial + aumento;
                printf("\nSalario Novo = R$ %.2f", novo_sal);
            }
            break;
        case 3:
            if (sal_inicial <= 700){
                printf("\nMal Remunerado.\n");
            }
            else{
                printf("\nBem Remunerado.\n");
            }
            break;
        default:
            printf("\nOpcao Invalida.\n");
            break;
    }

    return 0;
}
