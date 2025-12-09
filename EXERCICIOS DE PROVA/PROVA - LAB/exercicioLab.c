//Utillizando alocação dinâmica, faça um programa pra uma loja que compra produtos em importadoras. Leia do teclado o valor bruto das compras do mês em um determinado
//ano e armazene-os em um vetor, sendo o valor de cada mês registrado separadamente. Em outro vetor, armazene o percentual de desconto que a importadora oferece
//em cada mês (ex: 1% de desconto). Calcule e mostre: 1- Mensagem que informe valor lìquido a ser pago em cada mês, o valor bruto deduzidos descontos. 
//2- Maior Percentual de desconto do ano e em que mês foi. 3- Média dos valores brutos das compras do ano. 
int main()
{
    //Inicializar Variáveis usando alocação dinâmica. 
    float *valorBruto = (float *)malloc(12 * sizeof(float)); //Vetor para armazenar os valores brutos das compras, multpilicando por 12 (meses do ano). 
    float *percDesconto = (float *)malloc(12 * sizeof(float)); //Vetor para armazenar os percentuais de desconto, multiplicando por 12 (meses do ano).
    float *valorLiquido = (float *)malloc(12 * sizeof(float)); //Vetor para armazenar os valores líquidos das compras, multiplicando por 12 (meses do ano).
    float somaValores = 0.0; //Variável para armazenar a soma dos valores brutos de cada mês. 
    float mediaValores; //Variável para armazenar a média dos valores brutos das compras do ano.
    int mesMaiorDesconto = 0; //Variável para armazenar o mês com maior percentual de desconto.
    float maiorDesconto = 0.0; //Variável para armazenar o maior percentual de desconto.
    float desconto = 0.0; 

    //Receber os valores brutos das compras e os percentuais de desconto de cada mês
    for (int mes = 0; mes < 12; mes++) {
        printf("Informe o valor bruto das compras do mes %d:\n", mes + 1); //mes + 1 para mostrar o mês correto (1 a 12). 
        printf("Valor Bruto: R$ ");
        scanf("%f", &valorBruto[mes]); //Armazenar no vetor o valor bruto de cada mês. Sendo mes o índice do vetor. 
        
        printf("Informe o percentual de desconto do mes %d:\n", mes + 1); //mes + 1 para mostrar o mês correto (1 a 12).
        printf("Percentual de Desconto (1 para 1%%): ");
        scanf("%f", &percDesconto[mes]); //Armazenar no vetor o percentual de desconto de cada mês. Sendo mes o índice do vetor. 
        
        //Calcular desconto. 
        desconto = valorBruto[mes] * (percDesconto[mes] / 100.0); 

        //Calcular o valor líquido a ser pago em cada mês, deduzindo o desconto do valor bruto. 
        valorLiquido[mes] = valorBruto[mes] - desconto; 
        
        //Acumular a soma dos valores brutos para calcular a média depois. 
        somaValores += valorBruto[mes]; 

        //Verificar se o percentual de desconto atual é maior que o maior registrado até agora. 
        if (percDesconto[mes] > maiorDesconto) { //Se o percentual de desconto de cada mês for maior que o maior desconto atual
            maiorDesconto = percDesconto[mes]; //O maior desconto será o percentual de desconto do mês atual. 
            mesMaiorDesconto = mes; //O mês com maior desconto será o mês atual. 
        } 
    }

    //Calcular a média dos valores brutos das compras do ano. 
    mediaValores = somaValores / 12.0; //Média = Soma dos Valores Brutos / 12 (total de meses no ano).

    //Imprimir resultados de cada mês. 
    for (int mes = 0; mes < 12; mes++) {
        printf("\nMes %d:\n", mes + 1); 
        printf("Valor Bruto: R$ %.2f\n", valorBruto[mes]); 
        printf("Percentual de Desconto: %.2f%%\n", percDesconto[mes]);
        printf("Valor Liquido a ser pago: R$ %.2f\n", valorLiquido[mes]);
    }

    //Imprimir resultados. 
    printf("\nMaior Percentual de Desconto do Ano: %.2f%% no mes %d\n", maiorDesconto, mesMaiorDesconto + 1); 
    printf("Media dos valores Brutos das compras do ano: R$ %.2f\n", mediaValores); 

    //Liberar memória alocada dinamicamente. 
    free(valorBruto); 
    free(percDesconto); 
    free(valorLiquido); 

    return 0; 
}