//Faça um programa que solicite ao usuário um número, em seguida, imprima na tela todos os seus divisores. 
//Salve em um arquivo texto a soma total desses divisores.
int main()
{
    //Inicializar Variáveis. 
    int num, somaDivisores = 0;  

    //Solicitar número ao usuário. 
    printf("Informe um numero: "); 
    scanf("%d", &num); 

    //Abrir arquivo para escrita. 
    FILE *arq = fopen("./divisores.txt", "w");

    //Somar todos os divisores do número informado. 
    for (int cont = 1; cont <= num; cont++)
    {
        //Verificar se é resto da divisão é zero. 
        if (num % cont == 0){
            //Somar os divisores do número informado e armazenar a soma na variável somaDivisores.
            somaDivisores += cont; 
            
            //Imprimir divisores na tela. 
            printf("%d\n", cont); //Vai imprimir todos os divisores na tela. 
        }
    }

    //Salvar a soma total dos divisores no arquivo texto. 
    fprintf(arq, "%d\n", somaDivisores); 

    //Fechar o arquivo. 
    fclose(arq); 

    return 0; 
}