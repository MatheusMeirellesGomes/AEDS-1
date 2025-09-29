//Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal.
int main()
{
    //Inicializar variáveis. 
    int base, altura, perimetro, area, diagonal; 

    //Receber informações necessárias. 
    printf("Informe a base: "); 
    scanf("%d", &base); 
    
    printf("Informe a altura: "); 
    scanf("%d", &altura); 

    //Calcular perímetro, área e diagonal de um retângulo. 
    perimetro = 2 * (base + altura); //Perímetro é igual a 2 vezes a soma da base com a altura. 
    area = base * altura; //Área é igual base vezes altura; 
    diagonal = sqrt(pow(base,2) + pow(altura,2)); //Diagonal é igual a raiz quadrada da soma das potências da base e altura. 

    //Imprimir resultados. 
    printf("Perimetro = %d", perimetro); 
    printf("Area = %d", area); 
    printf("Diagonal = %d", diagonal); 

    return 0;
}