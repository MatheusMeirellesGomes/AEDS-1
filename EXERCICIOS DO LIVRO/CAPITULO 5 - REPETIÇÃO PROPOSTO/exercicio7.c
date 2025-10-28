int main()
{
    //Inicializar Variáveis.
    int idade, idade50 = 0, peso40 = 0, qntd1020 = 0;
    float peso, altura, media_altura, soma_altura = 0;
    float porcentagem;

    //Receber peso e altura de 5 pessoas.
    for (int cont = 1; cont <= 5; cont++)
    {
        //Receber idade e peso.
        printf("Informe a idade: "); 
        scanf("%d", &idade);

        printf("Informe a altura: "); 
        scanf("%f", &altura);

        printf("Informe peso: "); 
        scanf("%f", &peso);

        //Verificar quantidade de pessoas com mais de 50 anos. 
        if (idade > 50){
            idade50++;
        }

        //Verificar média das alturas das pessoas entre 10 e 20 anos.
        if (idade >= 10 && idade <= 20){
            soma_altura += altura;
            qntd1020++;
        }

        //Verificar porcentagem de pessoas com peso inferior a 40kg entre todas as pessoas analisadas.
        if (peso < 40){
            peso40++;
        }
    }

    //Calcular média de altura de pessoas com essa idade.
    if (qntd1020 > 0){
        media_altura = soma_altura / qntd1020;
    }
    else{
        media_altura = 0; 
        printf("\nNao tem pessoas entre essas idades.\n");
    }
    //Calcular porcentagem de pessoas com peso inferior a 40kg. 
    porcentagem = (peso40 * 100) / 5;

    //Imprimir resultados.
    printf("\nQuantidade de pessoas com mais de 50 anos: %d\n", idade50);
    printf("\nMedia de altura de pessoas entre 10 e 20 anos: %.2f\n", media_altura);
    printf("\nPorcentagem de pessoas com peso inferior a 40 kgs: %.2f%%\n", porcentagem); 

    return 0;
}