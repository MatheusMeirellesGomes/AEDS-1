//Receber o peso de uma pessoa, calcular e mostrar:
//a) O novo peso, se a pessoa engordar 15% sobre o peso digitado.
//b) o novo peso, se a pessoa emagrecer 20% sobre o preço ditado.
//A pessoa nao deve escolher, apenas imprima os dois resultados.
int main()
{
    //Inicializar o programa com dados do enunciado
    int peso_inicial, peso_engorda, peso_emagrece;

    //Receber o peso da pesso:
    printf("Digite o seu peso: ");
    scanf("%d", &peso_inicial);

    //Calcular o novo peso se a pesso engordar 15% sobre o peso digitado.
    peso_engorda = peso_inicial + (peso_inicial *0.15); //Multiplica o peso inicial por 15% (0.15) e soma ao peso inicial para obter o novo peso.

    //Calcular o novo peso se a pessoa emagrecer 20% sobre o peso digitado
    peso_emagrece = peso_inicial - (peso_inicial * 0.20);//Neste caso, o valor multiplicado por 20% será subtraído, já que ele esta perdendo peso.

    //Imprimir o novo peso se a pessoa engordar 15% sobre o peso digitado
    printf("Novo peso se engordar 15 porcento = %d kg\n", peso_engorda);

    //Imprimir o novo peso se a pessoa emgrecer 20% sobre o peso digitado.
    printf("Novo peso se emgrecer 20 porcento = %d kg", peso_emagrece);

    return 0;

}
