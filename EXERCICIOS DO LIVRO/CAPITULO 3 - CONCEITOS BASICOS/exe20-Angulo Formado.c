//Receba a medida do ângulo formado por uma escada apoiada no chão e a distância 
//que a escada está da parede. Calcule a medida da escada para que possa alcançar sua ponta. 
int main()
{
    //Inicializar com dados do enunciado. 
    int angulo, distancia, medida_escada; 
    
    //Receber as informações necessárias. 
    printf("Medida do angulo formado: "); 
    scanf("%d", &angulo); 
    printf("Distancia da escada da parede: "); 
    scanf("%d", &distancia); 
    
    //Calcular a medida da escada. 
    medida_escaada = distancia / cos(angulo * 3.14 / 180); //A medida da escada é a distância dividida pelo cosseno do ângulo, convertido para radianos.

    //Imprimir a medida da escada. 
    printf("Medida da escada = %d", medida_escada); 

    return 0; 
    
}