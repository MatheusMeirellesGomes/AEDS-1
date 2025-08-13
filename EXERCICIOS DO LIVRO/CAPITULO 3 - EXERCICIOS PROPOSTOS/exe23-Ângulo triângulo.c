//Receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. 
//Sabe-se que a soma dos ângulos de um triângulo é igual a 180 graus. 
int main()
{
    //Inicializar com dados do enunciado.
    int angulo1, angulo2, angulo_falta; 

    //Receber os dois ângulos. 
    printf("Valor do primeiro angulo = ");
    scanf("%d", &angulo1); 
    printf("Valor do segundo angulo = "); 
    scanf("%d", &angulo2); 

    //Calcular quanto vai ser o último ângulo.
    angulo_falta = (angulo1 + angulo2) - 180; 

    //Imprimir o terceito angulo. 
    printf("Valor do terceiro angulo = %d", angulo_falta); 

    return 0; 

} 