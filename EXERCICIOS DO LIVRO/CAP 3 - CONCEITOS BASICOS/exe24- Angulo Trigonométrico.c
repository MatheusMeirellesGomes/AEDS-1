//Receber a medida do ângulo ( em graus ) formado por uma escada apoiada no chão e enconstada na parede, 
//e a altura da parede onde está a ponta da escada, calcule e mostre a medida dessa escada. 
//obs: As medidas de ângulos sao em radianos. 
int main()
{
    //Inicializar o programa com os dados do enunciado 
    int angulo, altura_parede, medida_escada, radiano; 

    //Receber as informações do enunciado
    printf("Informe o ângulo formado pela escada: "); 
    scanf("%d", &angulo); 

    printf("Informe a altura da parede onde está a ponta da escada: "); 
    scanf("%d", &altura_parede); 

    //Fazer o cálculo para achar a medida da escada
    radiano = angulo * (3.14 / 180);//Este é o cálculo para converter ângulo de graus para radianos. 
    medida_escada = altura_parede / sin(radiano); //Dividir a altura da parede pelo seno do angulo em radianos para achar a medida da escada. 

    //Imprimir a medida da escada
    printf("A medida da escada eh: %d", medida_escada); 

    return 0; 

}