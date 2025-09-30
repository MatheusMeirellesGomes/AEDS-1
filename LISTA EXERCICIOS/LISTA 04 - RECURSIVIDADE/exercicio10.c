//Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0: S = 1/1! + 1/2! + 1/3! + ... + 1/N! float serie (int n)
 //Faça um programa principal que leia um número, acione a função e exiba o resultado gerado. Obs: Quando se falar em série e fatorial, deve-se criar uma função 
 //para calcular o fatorial, e outra função para calcular a série. 

 //Função para calcular o fatorial. 
 float fatorial(int n)
 {
    //Caso Base. 
    if (n == 0 || n == 1){
        return 1; //Fatorial de 0 e 1 = 1.
    }
    else {
        return n * fatorial(n - 1); //Ex: 5 * fatorial(4), até chegar no caso base.
    }
 }
 
 float serie (int n)
 {
    //Caso Base. 
    if (n == 1){
        return 1.0; //Vai retornar um porque vai ter uma série apenas de 1/1!, que vai dar 1.
    }
    else {
        return 1.0 / fatorial(n) + serie(n - 1); //Ex: 1.0 / fatorial(5) + serie(4), até chegar no caso base. 
    }
 }
 int main()
 {
    //Inicializar Variáveis.
    int num; 

    //Receber número.
    printf("Informe um numero: "); 
    scanf("%d", &num); 

    //Acionar função e exibir resultado gerado. 
    printf("\nS = %.2f\n", serie(num)); 

    return 0;
 }