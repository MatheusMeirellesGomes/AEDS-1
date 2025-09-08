//Receba o código do estado de origem da carga de um caminhão (inteiro de 1 a 5), o peso da carga do caminhão em toneladas, o código da carga (inteiro entre 10 e 40),
//Calcule e mostre, o peso da carga em kgs, o preço da carga do caminhão, o valor do imposto, sabendo que o imposto é cobrado sobre o preço de carga do caminhão e depende
//do estado de origem. O valor total transportado pelo caminhão, preço da carga mais o imposto.
int main()
{
    //Inicializar Variáveis.
    int cod_estado, peso_carga, cod_carga;
    float peso_convertido, preco_carga, imposto = 0, valor_total;

    //Receber informações necessárias.
    printf("Codigo do estado (1 - 5): ");
    scanf("%d", &cod_estado);

    printf("Peso do caminhao (tonelada): ");
    scanf("%d", &peso_carga);

    printf("Codigo da carga (10 - 40): ");
    scanf("%d", &cod_carga);

    //Calcular o preço da carga convertido em Kg´s.
    peso_convertido = peso_carga * 1000; //Trasnformar toneladas em quilos.

    //Calcular o preço da carga que depende do código da carga.
    if (cod_carga >= 10 && cod_carga <= 20)
    {
        preco_carga = peso_convertido * 100;
    }
    else if (cod_carga > 20 && cod_carga <= 30)
    {
        preco_carga = peso_convertido * 250;
    }
    else if (cod_carga > 30 && cod_carga <= 40)
    {
        preco_carga = peso_convertido * 340;
    }

    //Calcular o valor do imposto e quanto que ele é em cada cidade.
    switch (cod_estado)
    {
    case 1:
        imposto = preco_carga * 0.35;
        break;
    case 2:
        imposto = preco_carga * 0.25;
        break;
    case 3:
        imposto = preco_carga * 0.15;
        break;
    case 4:
        imposto = preco_carga * 0.05;
        break;
    case 5:
        printf("\nEstado isento de imposto.\n");
        imposto = 0;
        break;

    default:
        printf("\nCodigo do Estado invalido!\n");
        break;
    }

    //Calcular o valor total transportado pelo caminhão.
    valor_total = preco_carga + imposto;

    //Imprimir Resultados.
    printf("\nPeso da Carga: %.2f Kgs\n", peso_convertido);
    printf("\nPreco da Carga: R$ %.2f\n", preco_carga);
    printf("\nValor do Imposto: R$ %.2f\n", imposto);
    printf("\nValor total transportado pelo caminhao: R$ %.2f\n", valor_total);

    return 0;


}
