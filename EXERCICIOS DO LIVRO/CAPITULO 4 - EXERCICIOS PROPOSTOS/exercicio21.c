//Receba o preço de um produto e seu código de origem e mostre sua procedência. 
int main()
{
    //Inicializar Variáveis.
    int codigo;
    float preco; 

    //Receber informações.
    printf("Informe o preco do produto: "); 
    scanf("%f", &preco);

    printf("Informe o codigo de origem [1 - 30]: "); 
    scanf("%d", &codigo); 

    //Verificar o código para mostrar procedência. 
    if (codigo == 1){
        printf("\nSUL.\n");
    }
    else if (codigo == 2){
        printf("\nNORTE.\n");
    }
    else if (codigo == 3){
        printf("\nLESTE.\n");
    }
    else if (codigo == 4){
        printf("\nOESTE.\n");
    }
    else if (codigo == 5 || codigo == 6){
        printf("\nNORDESTE.\n");
    }
    else if (codigo == 7 || codigo == 8 || codigo == 9){
        printf("\nSUDESTE.\n");
    }
    else if (codigo >= 10 && codigo <= 20){
        printf("\nCENTRO-OESTE.\n"); 
    }
    else if (codigo >= 21 && codigo <= 30){
        printf("\nNOROESTE\n"); 
    }
    else {
        printf("\nCODIGO INVALIDO.\n");
    }

    return 0;
   
}