//Receba o código correspondente ao cargo de um funcionário e seu saláio atual e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela:
//Código correspondente ao cargo: 1 - Escrituário - 50%; 2 - Secretário - 35%; 3 - Caixa - 20%; 4 - Gerente - 10%; 5  - Diretor - Sem aumento. Estrutura Condicional.
int main()
{
    //Inicializar Variáveis.
    int codigo;
    float sal_inicial, aumento, sal_final;

    //Receber informações:
    printf("Informe o codigo (1 a 5): "); //Tem apenas 5 códigos.
    scanf("%d", &codigo);

    printf("\nDigite o salario inicial: R$ ");
    scanf("%f", &sal_inicial);

    //Calcular o aumento e verificar código e salario final. (Tudo no mesmo if do mesmo código)
    if (codigo == 1) //Escrituário - 50% de aumento.
    {
        aumento = sal_inicial * 0.50;
        sal_final = sal_inicial + aumento;
        printf("\nSalario Final do Escrituario = R$ %.2f\n", sal_final);
    }
    else if (codigo == 2) //Secretário - 35%.
    {
        aumento = sal_inicial * 0.25;
        sal_final = sal_inicial + aumento;
        printf("\nSalario Final do Secretario = R$ %.2f\n", sal_final);
    }
    else if (codigo == 3) //Caixa - 20%.
    {
        aumento = sal_inicial * 0.20;
        sal_final = sal_inicial + aumento;
        printf("\nSalario Final do Caixa = R$ %.2f\n", sal_final);
    }
    else if (codigo == 4) //Gerente = 10%.
    {
        aumento = sal_inicial * 0.10;
        sal_final = sal_inicial + aumento;
        printf("\nSalario Final do Gerente = R$ %.2f\n", sal_final);
    }
    else if (codigo == 5) //Diretor - sem aumento.
    {
        sal_final = sal_inicial;
        printf("\nSalario Final do Diretor = R$ %.2f\n", sal_final);
    }
    else
    {
        printf("\nCodigo Invalido.\n");
    }

    return 0;
}
