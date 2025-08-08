//Uma pessoa quer pregar um quadro na parede. Calcule e mostre a distancia da escada ate a parede, a pessoa deve
//forncer o tamanho da escada, e a altura em que deseja pregar o quadro. 
//lembre-se que o tamanho da escada deve ser maior que a altura que se deseja alcançar.
//Use o teorema de Pitágoras, isolando o cateto horizontal para resolver o problema. 
int main()
{
    //Inicializar o programa com dados do enuncidado 
    // x = tamanho da escada; y = altura que deseja por o quadro; z = distância da escada;
    float x, y, z; //Simplificando as variáveis. 
    
    //Receber as informações necessárias
    printf("Informe o valor de x: "); 
    scanf("%f", &x); 
    
    printf("Informe o valor de y: "); 
    scanf("%f", &y); 
    
    //Fazer o cálculo conforme solicitado
    z = sqrt(pow(x,2) - pow(y,2)); //isolei o cateto horizontal, e resolvi usando raiz quadrada 
    
    //Imprimir z
    printf("Z = %.2f", z); 
    
    return 0; 
    
}