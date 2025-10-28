//Receba o código do produto comprado, a quantidade comprada pelo produto. Calcule e mostre o preço unitário do produto comprado, o preço total da nota, o valor do 
//desconto e aplicado sobre o preço total da nota e o preço final da nota depois do desconto. 
int main()
{
    //Inicializar Variável. 
    int codigo, quantidade; 
    float preco, preco_total, desconto, preco_final; 

    //Receber Informações.
    printf("Codigo do produto comprado [1 - 40]: "); 
    scanf("%d", &codigo); 

    printf("Quantidade comprada do produto: "); 
    scanf("%d", &quantidade); 

    //Verificar código do produto. 
    if (codigo >= 1 && codigo <= 10){
        preco = 10; 
    }
    else if (codigo > 10 && codigo <= 20){
        preco = 15; 
    }
    else if (codigo > 20 && codigo <= 30){
        preco = 20; 
    }
    else if (codigo > 30 && codigo <= 40){
        preco = 30; 
    }

    //Calcular o preço total do produto. 
    preco_total = preco * quantidade; 

    //Imprimir preço total. 
    printf("\nPreco Total do produto: R$ %.2f\n", preco_total);

    //Verificar o preço total e o desconto. 
    if (preco_total <= 250){
        desconto = preco_total * 0.05; 
    }
    else if (preco_total > 250 && preco_total <= 500){
        desconto = preco_total * 0.10; 
    }
    else {
        desconto = preco_total * 0.15; 
    }

    //Imprimir o desconto. 
    printf("\nValor do desconto: R$ %.2f\n", desconto); 

    //Calcular e imprimir preço final. 
    preco_final = preco_total - desconto; 

    printf("\nPreco Final: R$ %.2f\n", preco_final); 

    return 0; 
    
}