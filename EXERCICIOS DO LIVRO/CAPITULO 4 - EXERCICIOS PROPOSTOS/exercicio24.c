//Receba o preço, a categoria (1- Limpeza; 2- Alimentação; 3- vestuário) e a situação (R- Produtos que necessitam de refrigeração; N- Produtos que não necessitam).
//Calcule e mostre, o valor do aumento, o valo do imposto, o novo preço (preço mais aumento menos imposto), e a classificação. 
int main()
{
    //Inicializar Variáveis.
    float preco, aumento, imposto, novo_preco; 
    int categoria; 
    char situacao; 

    //Receber informações.
    printf("Informe o preco: "); 
    scanf("%f", &preco); 

    printf("Informe a categoria do produto [1 - 3]: "); 
    scanf("%d", &categoria); 

    printf("Informe a situacao do produto [R / N]: "); 
    scanf(" %c", &situacao); 

    //Verificar o preco e a categoria, para definir o aumento. 
    if (preco <= 25){
        if (categoria == 1){
            aumento = preco * 0.05;
        }
        else if (categoria == 2){
            aumento = preco * 0.08; 
        }
        else if (categoria == 3){
            aumento = preco * 0.10;
        }
        else {
            printf("\nCATEGORIA INVALIDA.\n"); 
        }
    }
    else if (preco > 25){
        if (categoria == 1){
            aumento =preco * 0.12;
        }
        else if (categoria == 2){
            aumento = preco * 0.15; 
        }
        else if (categoria == 3){
            aumento = preco * 0.18;
        }
        else {
            printf("\nCATEGORIA INVALIDA.\n"); 
        }
    }

    //Imprimir o valor do aumento. 
    printf("\nValor do aumento: R$ %.2f\n", aumento);

    //Verificar o imposto de acordo com as regras que estão no livro. 
    if (categoria == 2 || situacao == 'R') {
        imposto = preco * 0.05; 
    }
    else {
        imposto = preco * 0.08;
    }

    //Imprimir valor do imposto. 
    printf("\nValor do imposto: R$ %.2f\n", imposto);

    //Calcular o novo preço do produto. 
    novo_preco = (preco + aumento) - imposto; 

    //Imprimir o novo preço do produto. 
    printf("\nPreco Novo: R$ %.2f\n", novo_preco); 
    
    //Verificar a classificação de acordo com o novo preço. 
    if (novo_preco <= 50){
        printf("\nBARATO.\n"); 
    }
    else if (novo_preco > 50 && novo_preco < 120){
        printf("\nNORMAL.\n"); 
    }
    else {
        printf("\nCARO.\n");
    }

    return 0;

}