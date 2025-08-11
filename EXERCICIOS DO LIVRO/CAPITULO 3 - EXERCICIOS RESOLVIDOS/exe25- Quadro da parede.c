//Uma pessoa quer pregar um quadro na parede. Calcule e mostre a distancia da escada ate a parede, a pessoa deve
//forncer o tamanho da escada, e a altura em que deseja pregar o quadro. 
//lembre-se que o tamanho da escada deve ser maior que a altura que se deseja alcançar. 
//Use teorema de Pitágoras para resolver, pois se trata de um triângulo retângulo. 
int main()
{
    //Inicializar o programa com dados do enunciado. 
    float distancia_escada, tamanho_escada, altura_quadro; 
    
    //Receber as informações necessárias
    printf("Informe o tamanho da escada: "); // O tamanho da escada deve ser maior que a altura que deseja colar o quadro 
    scanf("%f", &tamanho_escada);
    
    printf("Informe a que altura deseja colar o quadro: "); 
    scanf("%f", &altura_quadro); 
    
    //Fazer o cálculo para saber a distância da escada ate a parede.
   //Isole o cateto horizontal, que é a distância da escada até a parede e use a raiz quadrada para calcular a hipotenusa. 
   distancia_escada = sqrt(tamanho_escada * tamanho_escada - altura_quadro * altura_quadro); //Usar o teorema de Pitágoras para calcular a distância da escada até a parede. 

    //Imprimir a distância da escada até a parede
    printf("A distancia da escada ate a parede eh: %.2f", distancia_escada);

    return 0;
}