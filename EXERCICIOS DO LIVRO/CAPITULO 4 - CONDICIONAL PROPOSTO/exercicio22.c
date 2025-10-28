//Receba a idade e o peso de uma pessoa. Verifique e mostre de acordo com a tabela do livro, o grupo de risco que essa pessoa se encaixa. 
int main()
{
    //Inicializar Variáveis.
    int idade; 
    float peso; 

    //Receber informações.
    printf("Informe a idade: "); 
    scanf("%d", &idade); 

    printf("Informe o peso: "); 
    scanf("%f", &peso);

    //Verificar de acordo com a tabela do livro. 
    if (idade <= 20){
        if (peso <= 60){
            printf("\nGRUPO 9.\n");
        }
        else if (peso > 60 && peso <= 90){
            printf("\nGRUPO 8.\n");
        }
        else {
            printf("\nGRUPO 7.\n"); 
        }
    }
    else if (idade > 20 && idade <= 50){
        if (peso <= 60){
            printf("\nGRUPO 6.\n"); 
        }
        else if (peso > 60 && peso <= 90){
            printf("\nGRUPO 5.\n"); 
        }
        else {
            printf("\nGRUPO 4.\n"); 
        }
    }
    else {
        if (peso <= 60){
            printf("\nGRUPO 3.\n");
        }
        else if (peso > 60 && peso <= 90){
            printf("\nGRUPO 2.\n"); 
        }
        else {
            printf("\nGRUPO 1.\n");
        }
    }

    return 0; 
}