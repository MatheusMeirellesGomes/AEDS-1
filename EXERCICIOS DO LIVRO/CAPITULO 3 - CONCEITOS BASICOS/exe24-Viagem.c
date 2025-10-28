//Receber a quantidade de dinheiro em reais que a pessoa vai viajar. Ela precisa converter seu dinheiro 
//para dólares, marco alemão e libra esterlina. Sabe-se que:  
//Dolar = 1.80; Marco Alemão = 2.0; Libra Esterlina = 3.57;
//Faça as conversões acima. 
int main()
{
    //Inicializar com dados do enunciado.
    float qntd_dinheiro, dolar, marco, libra; 

    //Receber as informações necessárias. 
    printf("Valor em reais = R$ "); 
    scanf("%f", &qntd_dinheiro); 

    //Fazer as conversões necessárias. 
    dolar = qntd_dinheiro / 1.80; 
    marco = qntd_dinheiro / 2.0; 
    libra = qntd_dinheiro / 3.57; 
    
    //Imprimir as conversões. 
    printf("Valor em dolar = R$ %.2f", dolar); 
    printf("Valor em marco = R$ %.2f", marco); 
    printf("Valor em libra = R$ %.2f", libra); 

    return 0; 
}