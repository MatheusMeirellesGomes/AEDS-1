//Receba a hora, uma variável pra hora outra pra minuto, calcule e mostre: 
//a) a hora digitada convertida em minutos; 
//b) o total dos minutos, ou seja, os minutos digitados mais os minutos da hora convertida; 
//c) o total dos minutos convertidos em segundos. 
int main()
{
    //Inicializar com dados do enunciado. 
    int hora, minuto_informado, minuto, total_minuto, total_segundo;
    
    //Receber informações do usuário. 
    printf("Digite a hora: ");
    scanf("%d", &hora); 
    printf("Digite os minutos: "); 
    scanf("%d", &minuto_informado); 

    //Calcular a hora convertida em minutos. 
    minuto += hora * 60; //Convertendo hora em minutos. 

    //Calcular o total de minutos. 
    total_minuto = minuto + minuto_informado; //Minuto informado mais os minutos da hora convertida. 

    //Calcular o total de segundos. 
    total_segundo = total_minuto * 60; //Convertendo minutos em segundos. 

    //Imprimir os resultados. 
    printf("Hora convertida em minutos = %d\n", minuto); 
    printf("Total de minutos = %d\n", total_minuto); 
    printf("Total de segundos = %d", total_segundo); 

    return 0; 
}