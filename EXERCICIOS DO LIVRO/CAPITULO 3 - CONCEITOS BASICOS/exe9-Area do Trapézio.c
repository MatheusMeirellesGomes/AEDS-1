//Calcule e mostre a área de um trapézio
//Sabe-se que: Area = ((base maior + base menor) * altura) / 2.
int main()
{
    //Inicializar o programa com dados do enunciado
    int area_trapezio, base_maior, base_menor, altura;

    //Receber as informações necessárias.
    printf("Digite a base maior: ");
    scanf("%d", &base_maior);

    printf("Digite a base menor: ");
    scanf("%d", &base_menor);

    printf("Digite a altura do trapezio: ");
    scanf("%d", &altura);

    //Calcular a area do trapézio.
    area_trapezio = ((base_maior + base_menor) * altura) / 2;//Cálculo para saber a área do trapézio. 

    //Imprimir a área do trapézio.
    printf("Area do trapezio = %d", area_trapezio);

    return 0;
}
