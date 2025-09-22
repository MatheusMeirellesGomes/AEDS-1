#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis. 
    float valor_inicial, juros = 0, valor_parc;
    int qntd_parc = 0;  
    

    //Receber informações. 
    printf("Informe o valor inicial da divida: "); 
    scanf("%f", &valor_inicial); 

    printf("Informe a quantidade de parcelas: "); 
    scanf("%d", &qntd_parc); 

    //Verificar quantidade de parcelas e juros. 
    if (qntd_parc == 1){
        juros = 0; 
        printf("\nDivida nao tem juros.\n"); 
    }
    else if (qntd_parc == 3){
        juros = valor_inicial * 0.10; 
        printf("\nValor do juros: R$ %.2f\n", juros); 
    }
    else if (qntd_parc == 6){
        juros = valor_inicial * 0.15; 
        printf("\nValor do juros: R$ %.2f\n", juros); 
    }
    else if (qntd_parc == 9){
        juros = valor_inicial * 0.20;
        printf("\nValor do juros: R$ %.2f\n", juros); 
    }
    else if (qntd_parc == 12){
        juros = valor_inicial * 0.25; 
        printf("\nValor do juros: %.2f\n", juros); 
    }
    else {
        printf("\nNao existe essa quantidade de parcelas.\n");
    }

    //Calcular valor da parcela. 
    valor_parc = (valor_inicial + juros) / qntd_parc; 
    
    //Imprimir resultado. 
    printf("\nQuantidade de Parcelas: %d\n", qntd_parc); 
    printf("\nValor da parcela: %.2f\n", valor_parc); 

    return 0;
}