//Receba a medida do ângulo em graus. Calcule e mostre o quadrante em que se localiza esse ângulo. Considere-se os quadrantes da trigonometria e, para ângulos maiores
//que 360 ou menores que -360, reduzi-los, mostrando também o número de voltas e o sentido da volta (horário ou anti-horário).
int main()
{
    //Inicializar Variáveis.
    int angulo, voltas;

    //Receber informações.
    printf("Informe o angulo em graus: ");
    scanf("%d", &angulo);

    // Calcular número de voltas completas
    voltas = angulo / 360;

    // Reduzir o ângulo ao intervalo [-360, 360]
    angulo = angulo % 360;

    // Ajustar caso seja negativo
    if (angulo < 0)
    {
        angulo = angulo + 360;
        voltas--;
    }

    //Mostrar voltas e sentido
    if (voltas > 0){
        printf("\nNumero de voltas: %d (anti-horario)\n", voltas);
    }
    else if (voltas < 0){
         printf("\nNumero de voltas: %d (horario)\n", -voltas);
    }
    else{                           
         printf("\nNenhuma volta completa.\n");
    }

    // Verificar quadrante
    if (angulo > 0 && angulo < 90)
        printf("Quadrante 1.\n");
    else if (angulo > 90 && angulo < 180)
        printf("Quadrante 2.\n");
    else if (angulo > 180 && angulo < 270)
        printf("Quadrante 3.\n");
    else if (angulo > 270 && angulo < 360)
        printf("Quadrante 4.\n");
    else if (angulo == 0 || angulo == 360)
        printf("Eixo X positivo.\n");
    else if (angulo == 90)
        printf("Eixo Y positivo.\n");
    else if (angulo == 180)
        printf("Eixo X negativo.\n");
    else if (angulo == 270)
        printf("Eixo Y negativo.\n");

    return 0;
}