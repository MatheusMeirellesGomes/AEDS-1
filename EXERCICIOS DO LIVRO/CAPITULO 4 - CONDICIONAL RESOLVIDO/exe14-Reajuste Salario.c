//Receba o salário atual de um funcionário, calule e mostre o novo salário acrescido de bonificação e de auxílio escola.
//Salário até 500 - bonificação de 5% do salário; Salário entre 500 e 1200 - bonificação de 12% do salário. Acima de 1200 - sem bonificação.
//Salário ate 600 - 150 reais de auxílio escola; acima de 600 reais - 100 reais de auxílio escola.
int main()
{
    //Inicializar Variáveis.
    float sal_atual, bonificacao, auxilio, novo_sal;

    //Receber salário do funcionário.
    printf("Digite o salario: R$ ");
    scanf("%f", &sal_atual);

    //Verificar e calcular o novo salário com os ajustes.
    if (sal_atual <= 500) //Salário até 500.
    {
        bonificacao = sal_atual * 0.05;
        auxilio = 150;
        novo_sal = sal_atual + bonificacao + auxilio;
        printf("\nSalario Ajustado = R$ %.2f\n", novo_sal);
    }
    else if (sal_atual > 500 && sal_atual <= 1200) //Salário entre 500 e 1200. 
    {
        bonificacao = sal_atual * 0.12;
        if (sal_atual <= 600){ //Caso o salário seja menor que 600.
            auxilio = 150; //Apenas o valor do auxiilio, ja que ele vai ser colocado no cálculo do novo salário.
            novo_sal = sal_atual + bonificacao + auxilio;
            printf("\nSalario Ajustado = R$ %.2f\n", novo_sal);
        }
        else if (sal_atual > 600){ //Se o salário for maior que 600.
            auxilio = 100;
            novo_sal = sal_atual + bonificacao + auxilio;
            printf("\nSalario Ajustado = R$ %.2f\n", novo_sal);
        }
    }
    else if (sal_atual > 1200) //Salário acima de 1200. 
    {
        auxilio = 100;
        novo_sal = sal_atual + auxilio;
        printf("\nSalario Ajustado = R$ %.2f\n", novo_sal);
    }

    return 0;
}
