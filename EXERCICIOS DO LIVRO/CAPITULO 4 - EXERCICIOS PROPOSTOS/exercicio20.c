//Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não. 
int main()
{
    //Inicializar Variáveis.
    int idade; 

    //Receber idade.
    printf("Informe a idade: "); 
    scanf("%d", &idade); 

    //Verificar se é maior ou menor de idade. 
    if (idade >= 18){
        printf("\nMAIOR DE IDADE!\n");
    }
    else{
        printf("\nMENOR DE IDADE\n"); 
    }

    return 0; 
    
}