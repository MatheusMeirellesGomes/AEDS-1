//Receber o numero de horas trabalhar e o valor do  salario minimo, calcular e mostrar o salario a receber 
//seguindo as seguintes regras: 
//a) A hora trabalhada vale a metade do salario mínimo.
//b) O salario bruto equivale ao numero de horas trabalhar multiplicado pelo valor da hora trabalhada.
//c) O imposto equivale a 3% do salário bruto.
//d) O salario a receber equivale ao salario bruto menos o imposto.
int main()
{
    //Inicializar o programa com os dados do enunciado.
    int horas_trabalhadas;
    float salario_minimo, valor_hora_trabalhada, salario_bruto, imposto, salario_final;

    //Pedir os dados do usuario 
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas); 
    printf("Digite o valor do salario minimo: R$ "); 
    scanf("%f", &salario_minimo); 
    
    //Fazer os càlculos da hora trabalhada, salario bruto, imposto e salario final
    valor_hora_trabalhada = salario_minimo / 2; //Como pede na letra a, a hora trabalhada vale metade do salario minimo
    salario_bruto = horas_trabalhadas * valor_hora_trabalhada; //Como pede na letra b, o salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada. 
    imposto = salario_bruto * 0.03; //Como pede na letra c, o imposto equivale a 3% do salario bruto, podendo ser feita a multiplicação do salario bruto pela divisão por 3/100.
    salario_final = salario_bruto - imposto; //Como pede na letra d, salario a receber equivale ao salario bruto menos o imposto.
    
    //Mostrar o resultado final de acordo com os cálculos feitos
    printf("O salario a receber eh: R$ %.2f", salario_final); 

    return 0; 
}