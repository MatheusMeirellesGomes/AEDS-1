//Faça um programa usando modularização ou procedimento sobre essa fórmula fatorial:
// S = 1/1! + 1/2! + 1/3! + ... + 1/n! (n é um número inteiro e positivo).
float fatorial (int num) //Função que calcula o fatorial de um número. 
{
    //Inicializar Variável com valor de 1 porque fatorial de 0 e 1 é 1. 
    float fat = 1; 

    //Calcular fatorial. 
    for (int valor = num; valor > 1; valor--)// Começa em num e vai até 2, multiplicando todos os valores. 
    {
        fat = fat * valor; //Fatorial é o fatorial vezes o valor atual. EX: 5! = 5 * 4 * 3 * 2 * 1. 
    }
    return fat; //Retorna o fatorial. 
}
float soma (int N) //Função que calcula a soma dos fatoriais. 
{
    //Inicializar Variável de soma = 0, porque é uma soma. 
    float s = 0; 

    //Calcular soma. 
    for (int denominador = 1; denominador <= N; denominador++)// Começa em 1 e vai até N, somando os valores. 
    {
        s = s + (1 / fatorial(denominador)); //Soma é a soma mais 1 dividido pelo fatorial do denominador atual.
        //Ex: s = 1/1! + 1/2! +  1/3! + ... + 1/N!. 
    }
    return s; //Retorna a soma dos fatoriais. 
}
int main()
{
    //Inicializar Variáveis. 
    int total; 

    //Receber informações de quantas vezes vai ser executado (Número de Parcelas). 
    printf("Quantidade de Parcelas: "); 
    scanf("%d", &total); 

    //Imprimir Calculando o total. 
    printf("O resultado do fatorial = %.2f", soma(total)); //

    return 0; 
}