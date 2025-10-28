//Receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal. Utilize as seguinte fórmulas (onde h é a altura). 
//para homens: (72,7 * h) - 58.
//para mulheres: (62,1 * h) - 44,7.
int main()
{
    //Inicializar Variáveis. 
    float altura, peso_ideal; 
    char sexo; 

    //Receber altura. 
    printf("Informe a altura: "); 
    scanf("%f", &altura); 

    printf("Informe o sexo [M- masculino / F- feminino]: "); 
    scanf(" %c", &sexo); 

    //Verificar o peso ideal de acordo com o peso. 
    switch (sexo)
    {
    case 'M':
        peso_ideal = (72.7 * altura) - 58;
        printf("\nPeso Ideal: %.2f Kgs\n", peso_ideal);
        break;
    case 'F': 
        peso_ideal = (62.1 * altura) - 44.7;
        printf("\nPeso Ideal: %.2f Kgs\n", peso_ideal);
        break;
    default:
        printf("\nSexo Invalido.\n");
        break;
    }

    return 0; 

}