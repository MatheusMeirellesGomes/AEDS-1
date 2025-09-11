//Receba o preço universitário, a refrigeração (S para os produtos que necessitem de refrigeração e N para os que não necessitem) e a categoria (A - alimentação;
//L - Limpeza; V - Vestuário) de doze produtos. Calcule e mostre:
//O imposto calculado de acordo com as regras a seguir: Se o produto não preencher nenhum dos requisitos a seguir, seu imposto será de 2% sobre o preço unitário,
//caso contrário será de 4%.
//O preço final, ou seja, preço unitário mais custo de estocagem mais imposto.
//A classificação calculada usando a tabela do livro. A média de valores adicionais, ou seja, a média dos custos de estocagem e dos impostos dos doze produtos.
//O maior preço final. O menor preço final. O total dos impostos. A quantidade de produtos com classificação barato.
//A quantidade de produtos com classificação caro. A quantidade de produtos com a classificação normal.
int main()
{
    //Inicializar Variáveis de acordo com o enunciado.
    int N, barato = 0, normal = 0, caro = 0;
    float preco_unitario, custo_estocagem, imposto, preco_final, media_adicional;
    float  total_imposto = 0, adicionais, total_adicionais = 0, maior, menor;
    char refrigeracao, categoria;

    //Receber Informações
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &N);

    //Para cada produto
    for (int produto = 1; produto <= N; produto++)
    {
        //Receber dados do produto que pede no início do enunciado.
        printf("\nDados do Produto:\n");
        printf("Preco Unitario do produto = R$ ");
        scanf("%f", &preco_unitario);
        printf("Refrigeracao (S / N): ");
        scanf(" %c", &refrigeracao);
        printf("Categoria (A / L / V): ");
        scanf(" %c", &categoria);

        //Verificar de acordo com a tabela do livro. (Verificar de acordo com o preço unitário, refrigeração, categoria e calcular o custo de estocagem).
        if (preco_unitario < 20) //Se o preço unitário for menor que 20.
        {
            switch (categoria) //Vai analisar a categoria e verificar o custo de estocagem.
            {
                case 'A':
                    custo_estocagem = 2.0;
                    break;
                case 'L':
                    custo_estocagem = 3.0;
                    break;
                case 'V':
                    custo_estocagem = 4.0;
                    break;
                default:
                    printf("\nCategoria Invalida.\n");
            }
        }
        else if (preco_unitario >= 20 && preco_unitario <= 50)//Caso o preço unitário for entre 20 e 50.
        {
            if (refrigeracao == 'S' || refrigeracao == 's'){ //Vai analisar qual é a refrigeração e vai verificar o custo de estocagem.
                custo_estocagem = 6.0;
            }
            else if (refrigeracao == 'N' || refrigeracao == 'n'){
                custo_estocagem = 0.0;
            }
        }
        else if (preco_unitario > 50)//Se o preço for maior que 50.
        {
            if (refrigeracao == 'S' || refrigeracao == 's')//Vai analisar qual é a refrigeração
            {
                if (categoria == 'A'){ //Verificar qual é a categoria.
                    custo_estocagem = 5.0;
                }
                else if (categoria == 'L'){
                    custo_estocagem = 2.0;
                }
                else if (categoria == 'V'){
                    custo_estocagem = 4.0;
                }
            }
            else if (refrigeracao == 'N' || refrigeracao == 'n') //Verificar se é esta refrigeração.
            {
                if (categoria == 'A' || categoria == 'V'){ //Verificar qual é a categoria.
                    custo_estocagem = 0.0;
                }
                else if (categoria == 'L'){
                    custo_estocagem = 1.0;
                }
            }
        }
        //Imprimir o custo da estocagem.
        printf("\nValor do custo da estocagem = R$ %.2f\n", custo_estocagem);

        //Calcular imposto e verificar de acordo com os requisitos.
        if (categoria == 'A' || categoria == 'V') //Se for da categoria A, ou categoria V.
        {
            imposto = 0.04 * preco_unitario;
        }
        else
        {
            imposto = 0.02 * preco_unitario;
        }

        //Imprimir imposto.
        printf("Valor do Imposto = R$ %.2f\n", imposto);

        //Somar o total de impostos.
        total_imposto += imposto; //Vai somar todos os impostos de todos os produtos que forem lançados.

        //Calcular Adicionais e somar.
        adicionais = imposto + custo_estocagem;
        total_adicionais += adicionais; //Vai somar todos os adicionais de todos os produtos que serão lançados.

        //Calcular o preço final.
        preco_final = preco_unitario + adicionais; //Preço unitário de cada produto mais os adicionais, que é o custo da estocagem e o imposto.

        //Imprimir preço final.
        printf("Preco Final dos produtos = R$ %.2f\n", preco_final);

        //Verificar e atualizar maior e menor valor.
        if (produto == 1)//Primeira vc analisa o primeiro produto, porque por enquanto não vai ter maior nem menor.
        {
            maior = preco_final; //Então o maior é o preço final do primeiro produto.
            menor = preco_final; //E o menor também é o preço final do produto.
        }
        else //Depois que forem lançados os outros produtos.
        {
            if (preco_final > maior){ //Se o preço final for maior que o maior
                maior = preco_final; //O maior passará a ser o preço final.
            }
            else if (preco_final < menor){ //Mesma lógica com o menor.
                menor = preco_final;
            }
        }

        //Verificar qual é classificação do preço final e atualizar a contagem.
        if (preco_final <= 20)
        {
            printf("\nProduto Barato!\n");
            barato++; //Guardar na variável os produtos que forem abaixo de 20 reais.
        }
        else if (preco_final > 20 && preco_final <= 100)
        {
            printf("\nProduto Normal!\n");
            normal++; //Guardar na variável os produtos que estiverem entre 20 e 100 reais.
        }
        else
        {
            printf("\nProduto Caro!\n");
            caro++; //Guardar na variável os produtos que estiverem acima de 100 reais.
        }
    }

    //Calcular a média dos adicionais.
    media_adicional = total_adicionais / N; //A média dos adicionais é o total de adicionar divido pela quantidade de produtos que o usuário forneceu.

    //Exibir o maior e menor valor.
    printf("\nMaior valor = R$ %.2f\n", maior);
    printf("Menor valor = R$ %.2f\n", menor);

    //Exibir a soma dos impostos.
    printf("\nSoma dos impostos = R$ %.2f\n", total_imposto);

    //Exibir quantidades de produtos de acordo com a classificação deles.
    printf("Quantidade de produtos baratos: %d\n", barato);
    printf("Quantidade de produtos normais: %d\n", normal);
    printf("Quantidade de produtos caros: %d\n", caro);

    return 0;

}
