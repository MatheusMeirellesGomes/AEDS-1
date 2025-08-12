//Recebe o valor do salário mínimo e o valor do salário do funcionário
//Calcular e receber a quantidade de salarios mínimos que este funcionário ganha.
int main()
{
    //Inicializar o programa com os dados do enunciado.
    float sal_minimo, sal_funcionario, qntd_salarios;

    //Receber informações necessárias.
    printf("Salario Minimo = R$ ");
    scanf("%f", &sal_minimo);

    printf("Salario Funcionario = ");
    scanf("%f", &sal_funcionario);

    //Calcular quantos salarios minimos ele recebe
    qntd_salarios = sal_funcionario / sal_minimo;//Baste dividir quanto o funcionário recebe pelo salário minimo, para onter a qntd de salários. 

    //Imprimir a quantidade de salarios que o funcionário recebe.
    printf("Ele recebe %.1f salario(s) minimo(s)", qntd_salarios);

    return 0;
}
