//Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar uma linha para cada mercadoria com o
//preço de compra e de venda de cada uma. A última linha contém preço de conta igual a 0. Escreva um programa que:
// A) Determine e escreva quantas mercadorias proporcionaram: • Lucro < 10% • 10% <= lucro <= 20% • Lucro > 20%;
// B) Determine e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total.
int main()
{
    //Inicializar Variáveis.
    float preco_compra, preco_venda, lucro = 0, total_compra = 0;
    float total_venda = 0, total_lucro = 0;
    int lucro10 = 0, lucro20 = 0, lucroMaior20 = 0;

    //Título do Comerciante.
    printf("COMPRAS E VENDAS:");

    //Receber os preços dentro de uma repetição até que chegue na condição de parada.
    do //Vai executar esse código
    {
        //Receber preço de compra e de venda.
        printf("\nPreco de compra: R$ "); //Vai primeiro receber o preço de compra. 
        scanf("%f", &preco_compra);

        if (preco_compra > 0) //Se o preço de compra for maior que zero.
        {
            printf("Preco de venda: R$ "); //Vai passar a ler o preço de venda. 
            scanf("%f", &preco_venda);

            //Calcular o lucro que o comerciante tem.
            lucro = ((preco_venda - preco_compra) / preco_compra) * 100; //O lucro é o preço de venda - o preço de cmpra dividido pelo preço de conta, multiplicado por 100 para dar em percentual.

            //Verificar em quantos porcento o lucro esta.
            if (lucro < 10){ //Se o lucro for menor que 10
            lucro10++; //Guarda na variável quantos lucros forem menor que 10.
            }
            else if (lucro >= 10 && lucro <= 20){ //Se o lucro for maior ou igual a 10 e menor ou igual a 20.
            lucro20++; //Guarda na variável quantos lucros estiverem nesse meio.
            }
            else{ //Se o lucro for maior que 20
            lucroMaior20++; //Guarda na variável quantos lucros forem maior que 20.
            }

            //Salvar na variável os totais dos preços de compra e vendo, e salvar o total do lucro tambem.
            total_compra += preco_compra;
            total_venda += preco_venda;
            total_lucro += preco_venda - preco_compra;
        }    
    } while (preco_compra > 0); //Enquanto o preço da compra não for zero. 

    //Imprimir quantos produtos tem em cada tipo de lucro.
    printf("\nProdutos com lucros abaixo de 10: %d\n", lucro10);
    printf("Produtos com lucros entre 10 e 20: %d\n", lucro20);
    printf("Produtos com lucros acima de 20: %d\n", lucroMaior20);

    //Imprimir Resultado com os totais de compras, vendas e lucros.
    printf("\nTotal de compras: R$ %.2f\n", total_compra);
    printf("Total de vendas: R$ %.2f\n", total_venda);
    printf("Total de Lucros: R$ %.2f\n", total_lucro);

    return 0;
}
