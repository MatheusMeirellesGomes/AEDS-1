//Calcular e mostrar a área do losango
//Sabe-se: Area = (diagonal maior * diagonal menor) / 2.
int main()
{
    //Inicializar o programa com os dados do enunciado.
    int diag_maior, diag_menor, area_losango;

    //Receber as informações necessárias.
    printf("Diagonal maior = ");
    scanf("%d", &diag_maior);

    printf("Diagonal menor = ");
    scanf("%d", &diag_menor);

    //Calcular a área do losango.
    area_losango = (diag_maior * diag_menor) / 2; //Multiplicar as diagonais e dividir por 2 para achar a área do losango. 

    //Imprimir área do losango.
    printf("Area do losango = %d", area_losango);

    return 0;

}
