//Dado três valores X, Y e Z, veirifique se eles podem ser os comprimentos dos lados de um triângulo, e se forem, verifique se é equilátero, isósceles ou escaleno. 
//Se eles não formarem  um triângulo, escreva uma mensagem, considerando: 
//O comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados. 
//Chama-se equilátero o triângulo que tem três lados iguais.
//Chama-se isósceles o triângulo que tem o comprimento de dois lados iguais.
//Chama-se escaleno o triângulo que tem os três lados diferentes. 
int main()
{
    //Inicializar Variáveis. 
    float x, y, z; //lado 1, lado 2, lado 3.

    //Receber os valores de X, Y e Z. 
    printf("Informe o valor de X: "); 
    scanf("%f", &x); 

    printf("informe o valor de Y: ");
    scanf("%f", &y); 

    printf("Informe o valor de Z: "); 
    scanf("%f", &z); 

    //Verificar se os valores podem formar um triângulo. 
    if (x < y + z && y < x + z && z < x + y) //Se o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados. 
    {
        //Verificar o tipo de triângulo. 
        if (x == y && y == z){ //Se os três lados forem iguais. 
            printf("\nTrinangulo Equilatero.\n"); 
        }
        else if (x == y || y == z || x == z){//Se o comprimento de dois lados forem iguais
            printf("\nTriangulo Isosceles.\n"); 
        }
        else{ //Se os três lados forem diferentes.
            printf("\nTriangulo Escaleno.\n"); 
        }
    }

    else{ //Se os valores não podem formar um triângulo. 
        printf("\nOs valores nao forman um triangulo.\n"); 
    }

    return 0; 
}