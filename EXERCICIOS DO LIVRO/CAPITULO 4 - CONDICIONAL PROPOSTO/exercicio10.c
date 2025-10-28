//O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. 
//As porcentagens encontram-se na tabela do livro. Receba o custo de fábrica de um carro e mostre o preço ao consumidor. 
int main()
{
    //Inicializar Variáveis. 
    float custo_fabrica, porc_distribuidor, imposto = 0, preco_final; 

    //Receber Informações. 
    printf("Informe o preco de custo da fabrica: "); 
    scanf("%f", &custo_fabrica); 

    //Verifcar o preço de custo e calcular de acordo com a tabela. 
    if (custo_fabrica <= 12000){
        porc_distribuidor = custo_fabrica * 0.05; 
        imposto = 0; 
    }
    else if (custo_fabrica > 12000 && custo_fabrica <= 25000){
        porc_distribuidor = custo_fabrica * 0.10; 
        imposto = custo_fabrica * 0.15; 
    }
    else if (custo_fabrica > 25000){
        porc_distribuidor = custo_fabrica * 0.15; 
        imposto = custo_fabrica * 0.20; 
    }

    //Calcular o preço ao cliente. 
    preco_final = custo_fabrica + porc_distribuidor + imposto; 

    //Imprimir Preço final ao consumidor
    printf("\nPreco Final: R$ %.2f", preco_final); 

    return 0; 

}