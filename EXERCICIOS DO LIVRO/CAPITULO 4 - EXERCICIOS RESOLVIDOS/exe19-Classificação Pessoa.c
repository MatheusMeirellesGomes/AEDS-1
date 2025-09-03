//Receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre a classificação dessa pessoa:
//Altura < 1,20 - Peso <= 60 = A; Peso > 60 && <= 90 = D; Peso > 90 = G. 
//Altura > 1,20 && Altura < 1,70; Peso > 60 = B; Peso > 60 && Peso <= 90 = E; Peso > 90 = H. 
//Altura > 1,70; Peso <= 60 = C; Peso > 60 && Peso <= 90 = F; Peso > 90 = I.
int main() 
{
    //Inicializar Variáveis.
    float altura, peso;

    //Receber informações.
    printf("Informe a altura: ");
    scanf("%f", &altura);

    printf("Informe o peso: ");
    scanf("%f", &peso);

    //Verificar Classificação, tendo um if para cada faixa de altura e dentro de cada if, um if para cada faixa de peso. 
    if (altura <= 1.20) 
    {
        if (peso <= 60) {
            printf("CLASSIFICACAO A!\n");
        } 
        else if (peso > 60 && peso <= 90) {
            printf("CLASSIFICACAO D!\n");
        } 
        else {
            printf("CLASSIFICACAO G!\n");
        }
    } 
    else if (altura > 1.20 && altura <= 1.70) 
    {
        if (peso <= 60) {
            printf("CLASSIFICACAO B!\n");
        } 
        else if (peso > 60 && peso <= 90) {
            printf("CLASSIFICACAO E!\n");
        } 
        else {
            printf("CLASSIFICACAO H!\n");
        }
    } 
    else { // altura > 1.70
        if (peso <= 60) {
            printf("CLASSIFICACAO C!\n");
        } 
        else if (peso > 60 && peso <= 90) {
            printf("CLASSIFICACAO F!\n");
        } 
        else {
            printf("CLASSIFICACAO I!\n");
        }
    }

    return 0;
}
