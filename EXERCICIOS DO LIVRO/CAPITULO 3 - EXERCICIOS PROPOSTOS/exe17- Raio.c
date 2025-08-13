//Receber o valor do raio e calcular:
//a) o comprimento de uma esfera. Sabe-se que C = 2 * 3,14 * R.
//b) a área de uma esfera; sabe-se que A = 3,14 * R².
//c) o volume da esfera; sabe-se que V = 3/4 *  3,14 * R³.
int main()
{
    //Inicializar com dados do enunciado.
    int raio;
    float compri_esfera, area_esfera, volume_esfera; //Colocar como float, pois o resultado pode ter casa decimal.

    //Receber o raio.
    printf("Valor do Raio = ");
    scanf("%d", &raio);

    //Calcular o comprimento, área e volume da esfera.
    compri_esfera = 2 * 3.14  * raio;
    area_esfera = 3.14 * pow(raio,2);
    volume_esfera = (4.0/3.0) * 3.14 * pow(raio, 3);// Usar 4.0 3 e 3.0 porque é float, e colocar entre parênteses para fazer em ordem.


    //Imprimir os resultados
    printf("Comprimeto da Esfera = %.2f cm\n", compri_esfera);
    printf("Area da Esfera = %.2f cm\n", area_esfera);
    printf("Volume da Esfera = %.2f cm", volume_esfera);

    return 0;


}
