int main()
{
    //Inicializar Variáveis. 
    int idade; 
    int cont1_10 = 0, cont11_20 = 0, cont21_30 = 0, cont31 = 0;
    float peso, media1_10, media11_20, media21_30, media31; 
    float soma1_10 = 0, soma11_20 = 0, soma21_30 = 0, soma31 = 0;

    //Receber idade e peso de cada pessoa. 
    for (int cont = 1; cont <= 15; cont++)
    {
        printf("%d pessoa:\n", cont); 

        //Receber idade e peso.
        printf("Informe a idade: "); 
        scanf("%d", &idade); 

        printf("Informe o peso: "); 
        scanf("%f", &peso);

        //Verificar a soma dos pesos de cada faixa etária para depois calcular a média fora do loop. 
        if (idade > 1 && idade <= 10){
            soma1_10 += peso; //Vai somar os pesos correspondentes a essa faixa etária.
            cont1_10++;
        }
        else if (idade >= 11 && idade <= 20){
            soma11_20 += peso; //Vai somar os pesos correspondentes a essa faixa etária.
            cont11_20++;
        }
        else if (idade >= 21 && idade <= 30){
            soma21_30 += peso; //Vai somar os pesos correspondentes a essa faixa etária.
            cont21_30++;
        }
        else if (idade > 30){
            soma31 += peso; //Vai somar os pesos correspondentes a essa faixa etária.
            cont31++;
        }
    }

    //Calcular a média dos pesos de cada faixa etária. 
    media1_10 = soma1_10 / cont1_10; //A média dos pesos de cada faixa etária é a soma dos pesos dividida pela quantidade de pessoas de cada faixa etária. 
    media11_20 = soma11_20 / cont11_20;
    media21_30 = soma21_30 / cont21_30;
    media31 = soma31 / cont31;

    //Imprimir as médias. 
    printf("\nMedia de peso das pessoas de 1 a 10 anos: %.2f\n", media1_10);
    printf("Media de peso das pessoas de 11 a 20 anos: %.2f\n", media11_20);
    printf("Media de peso das pessoas de 21 a 30 anos: %.2f\n", media21_30);
    printf("Media de peso das pessoas acima de 30 anos: %.2f\n", media31);

    return 0; 
}