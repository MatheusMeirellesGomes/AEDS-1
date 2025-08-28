//Faça um programa que leia um valor de N inteiro e positivo, calcule e mostre o valor de E, conforme a fórmula a seguir: 
//E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
//Estrutura de Repetição. 
//Laço externo é a mesma coisa que o contador de N, Laço interno é o que calcula o fatoral. 
int main()
{
    //Inicializar Variáveis.
    int N;  
    float E = 1.0, fatorial, i, cont;  //E começa com 1, que é o primeiro termo da fórmula, i = contator do laço interno, j = contador do laço externo.

    //Receber valor de N. 
    printf("Digite um valor inteiro e positivo para N: "); 
    scanf("%d", &N); 

    //Calcular o valor de E. 
    for (cont = 1; cont <= N; cont++) //Laço externo, que vai de 1 até N. 
    {
        fatorial = 1.0; //Fatorial começa com 1, pois o fatorial de 0 é 1 e o fatorial de 1 tambem é 1. 
        //Calcular o fatorial de cont. 
        for(i = 1; i <= cont; i++) //Laço interno, que calcula o fatorial de cont. 
        {
            fatorial *= i; //Fatorial é multiplicado por i a cada iteração do laço interno. 
        }
        E += 1.0 / fatorial; //Calcula o termo 1/cont! e adiciona a E. 
    }

    //Exibir o valor de E. 
    printf("Quando N = %d, valor de E = %.2f\n", N, E); //O valor de E é exibido com duas casas decimais. 

    return 0; 
    
}