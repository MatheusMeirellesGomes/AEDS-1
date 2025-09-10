//Receba a idade de um nadador e mostre sua categoria, usando as regras da tabela do livro. Para idade inferior a 5, deverá mostrar mensagem. 
int main()
{
    //Inicializar Variáveis. 
    int idade; 

    //Receber Informação. 
    printf("Informe a idade do nadador: "); 
    scanf("%d", &idade); 

    //Verificar a idade e mostrar a caategoria. 
    if (idade < 5){
        printf("\nCATEGORIA INVALIDA\n");
    }
    else if (idade >= 5 && idade <= 7){
        printf("\nCATEGORIA INFANTIL.\n");
    }
    else if (idade >= 8 && idade <= 10){
        printf("\nCATEGORIA JUVENIL.\n");
    }
    else if (idade >= 11 && idade <= 15){
        printf("\nCATEGORIA ADOLESCENTE.\n"); 
    }
    else if (idade >= 16 && idade <= 30){
        printf("\nCATEGORIA ADULTO.\n");
    }
    else {
        printf("\nCATEGORIA SENIOR.\n");
    }

    return 0;
    
}