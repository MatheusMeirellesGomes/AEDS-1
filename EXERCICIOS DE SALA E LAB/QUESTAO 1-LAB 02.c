//Faça um programa para ler e analisar os valores N inteiros digitados por uma pessoa, sendo N informado pela teclado. O programa devve calcular e exibir: 
//1- Média dos números ímpares e múltiplos de 3.
//2- Quantidade de números ímpares.s
//3- Menor valor par. 
int main()
{
    //Inicializar Variáveis. 
    float media, somaimpar3 = 0;
    int N, qntd_impar = 0, multiplo3 = 0;
    int menor_par = 0, num, cont_impar3 = 0, primeiro_par = 1; 

    //Receber Informações. 
    printf("Informe o numero de vezes que o programa vai rodar: "); 
    scanf("%d", &N);

    //Verificar as informações. 
    for (int cont = 1; cont <= N; cont++)
    {
        //Receber informações.
        printf("Digite um numero: "); 
        scanf("%d", &num);  

        //Média dos números ímpares e múltiplos de 3. 
        if (num % 2 != 0 && num % 3 == 0){
            somaimpar3 += num; //Esse calculo vai pegar os valores que são ímpares e múltiplos de 3, e vai somar eles um ao outro. 
            cont_impar3++;  //Vai salvar na variável quantos números são ímpares e múltiplos de 3. 
        }

        //Quantidade de Números Ímpares. 
        if (num % 2 != 0){
            qntd_impar++; //Vai salvar na variável os números que são ímpares. 
        }

        //Menor valor par. 
        if (num % 2 == 0){ //Primeiro verificar se o número é par. 
            if (primeiro_par){ //Inicializar com 0, porque vai ser o primeiro par encontrado. 
                menor_par = num; //O primeiro número par será o menor. 
                primeiro_par = 0;
            }
            else if (num < menor_par){ //Caso o segundo número par, seja menor que o primeiro 
                menor_par = num; //O menor par passará a ser o menor par.
            }
        }
    }

    //Calcular, verificar média de números ímpares e múltiplos de 3. 
    if (cont_impar3 > 0){
        media = somaimpar3 / cont_impar3; 
        printf("\nMedia dos numeros impares e multiplos de 3: %.2f\n", media); 
    }
    else {
        printf("\nNao ha numeros impares e multiplos de 3.\n");
    }

    //Imprimir quantidade de números ímpares. 
    printf("\nQuantidade de numeros impares: %d\n", qntd_impar); 

    //Verificar o menor par. 
    if (primeiro_par == 0){
        printf("\nMenor par: %d\n", menor_par);
    }
    else {
        printf("\nNao ha numeros pares.\n"); 
    }

    return 0; 
    
}