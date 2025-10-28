//Calcular e mostrar a área do quadrado.
//Sabe-se que: Area = lado * lado.
int main()
{
    //Inicializar o programa com dados do enunciado.
    int area_quadrado, lado;

    //Receber o lado do quadrado.
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    //Calcular a area do quadrado
    area_quadrado = pow(lado, 2);//Como é lado vezes lado, podemos usar a função de potência para calcular a área do quadrado. 

    //Imprimir a área do quadrado.
    printf("Area do quadrado = %d1", area_quadrado);

}
