#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Leia uma opção que indica o que fazer, soma, subtração, multiplicação e divisão. O programa termina quando '.' for digitado. Ele deve ler 2 valores reais, calcular
//e exibir o resultado assoociado com a opção. Cada cálculo deve ser feito por uma função, as leituras e exibições em um procedimento que processo todas as opções e 
//esse deve ser acionado pelo principal; 

//Primeiro fazer as funções de cada operação, começando por soma. 
float soma (float a, float b){
    return (a + b); //Por ser função, vai retornar a soma, conforme solicitado.  
}

//Fazer função de subtração agora, retornando o resultado da operação. 
float subtrai (float p, float q){
    float resultado = p - q; 
    return resultado; //Vai retornar o resultado da operação acima.
}

//Fazer função de multiplicação, que retorna o primeiro pelo segundo.
float multiplica (float n1, float n2){
    return (n1 * n2); //Vai retornar o produto. 
}

//Fazer função de divisão, que retoorna a divisão dos números indicados.
float divide (float x, float y){
    if (y != 0){ //Pra ter uma divisão, o número que vai estar dividindo não pode ser zero. 
        return (x / y); 
    }
    else return FLI_MIN; //Variável de constante. (Retorna menor float)
}

//Depois de ter feito as funções fazer as leituras e exibições dentro de um procedimento. 
void processa () //Vai processar todas as informações das funções, ler, verificar e imprimir os resultados das funções. 
{
    //Inicializar Variáveis. 
    float num1, num2, resposta; 
    char opcao; 

    //Receber informações. 
    printf ("Informe o primeiro numero: "); 
    scanf("%f", &num1); 

    printf("Informe o segundo numero: "); 
    scanf("%f", &num2); 

    printf("Qual operacao deseja realizar [+, -, *, /]: "); 
    scanf(" %c", &opcao);

    //Usar repetição porque o programa necessita de uma ordem de parada. 
    do
    {
        //Verificar opção. 
        switch (opcao)
        {
        case '+':
            soma(num1, num2); 
            printf("\nSoma = %.2f\n", soma); 
            break;
        case '-': 
            subtrai(num1, num2); 
            printf("\nSubtracao = %.2f\n", subtrai); 
            break;
        case '*':
            multiplica(num1, num2);
            printf("\nMultiplicacao = %.2f\n", multiplica); 
            break; 
        case '/': 
            resposta = divide(num1, num2); 
            if (resposta == FLI_MIN){
                printf("\nDivisão por zero.\n");
            } 
            else {
                printf("\nDivisao = %.2f\n", divisao); 
            }
            break; 
        default:
            printf("\nOperacao Invalida.\n")
            break;
        }
    } while (opcao != '.');
}

//Apenas puxar o procedimento no int main. 
int main ()
{
    //Puxar o que esta fazendo no procedimento. 
    processa(); 

    return 0;
}
