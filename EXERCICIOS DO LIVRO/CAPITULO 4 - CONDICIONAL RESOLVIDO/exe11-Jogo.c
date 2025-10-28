//Receba a hora do início e final de um jogo e a hora do término (composto por horas e minutos inteiros). Calcule e mostre a duração do jogo (hrs e mints) sabendo
//que o tempo máximo de duração do jogo é de 24 horas, e que ele pode começar em um dia e terminar no outro. Estrtura Condicional.
int main()
{
    //Inicializar Variáveis. (Está pedindo hora e minutos).
    int hora_inicio, hora_final, min_inicio, min_final, tempo_hora, tempo_min; 

    //Receber hora e minutos do início e do final do jogo. 
    printf("Hora do inicio do jogo: "); //Hora do início.
    scanf("%d", &hora_inicio); 

    printf("Minutos do inicio do jogo: "); //Minutos do início.
    scanf("%d", &min_inicio); 

    printf("Hora final do jogo: "); //Hora do final. 
    scanf("%d", &hora_final); 
    
    printf("Minutos do final do jogo: "); //Minutos do final. 
    scanf("%d", &min_final); 

    //Calcular o tempo de duração do jogo.
    if (min_final < min_inicio) //Ex: Início: 14:50; Final: 16:30; empresta 60 minutos da hora final. Minutos: 80 - 50 = 30 e subtrai 1 da hora final. Horas: 14 - 14 = 0
    {
        min_final = min_final + 60; //Adiciona 60 minuto ao minuto final. Podendo ser min_final += 60.
        hora_final = hora_final - 1; //Subtrai 1 hora da hora final. Podendo ser hora_final -= 1. 
    }

    if (hora_final < hora_inicio) //Ex: Inicio: 22:30; Final: 06:15; Adiciona 24 horas a hora final. Horas: 26 - 22 = 4; Minutos: 0 - 0 = 0.
    {
        hora_final = hora_final + 24; //Adiciona 24 horas a hora final. Podendo ser hora_final += 24. 
    }

    tempo_hora = hora_final - hora_inicio; //Calcula o tempo final em horas. Ex: 16hrs - 10hrs = 6hrs. 
    tempo_min = min_final - min_inicio; //Calcula o tempo final em minutos. Ex: 50min - 30min = 20min. 
  

    //Imprimir Resultado. 
    printf("O jogo durou %d hora(s) e %d minutos(s). \n", tempo_hora, tempo_min); 

    return 0; 

}