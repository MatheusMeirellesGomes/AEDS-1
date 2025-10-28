//Para iluminar uma casa, para cada m², deve-se usar 18 w de potência. Receba as dimensões de um 
//cômodo ( em metros ), calcule e mostre a sua área ( em m² ) e a potência de iluminação que deverá ser usada.
int main()
{
    //Inicializar com dados do enunciado. 
    //Quando se fala em dimensão de um cômodo, é necessário saber a largura e o comprimento. 
    float largura, comprimento, area, potencia; //Como pede para receber as dimensões, estão entre elas largura e comprmento necessário. 

    //Recebe as dimensões do cômodo em metros. 
    printf("Digite a largura do comodo (em metros): ");
    scanf("%f", &largura); 

    printf("Digite o comprimento do comodo (em metros): ");
    scanf("%f", &comprimento); 

    //Calcular a área do cômodo. 
    area = largura * comprimento; //Area é a multiplicação das dimensôes do cômodo, largura pelo comprimento.

    //Calcular a potência de iluminação necessária.
    potencia = area * 18; //Deve-se multiplicar a área por 18, que é a quantidade de ww necessário por m², citado no enunciado. 

    //Imprimir valores da área e da potência. 
    printf("Area do comodo = %.2f metros", area); 
    printf("Potencia = %.2f w", potencia);

    return 0;
}