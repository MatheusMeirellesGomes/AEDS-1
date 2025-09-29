//Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia.
int main()
{
    //Inicializar Variáveis. 
    int hora, minuto, total_minuto, minuto_final; 
    
    //Receber Hora. 
    printf("Digite Hora: "); 
    scanf("%d", &hora); 

    printf("Digite os minutos: "); 
    scanf("%d", &minuto);

    //Converter em minutos para saber quantos minutos de passaram desde o início do dia. 
    total_minuto = hora * 60; // 1 hora = 60 minutos.
    minuto_final = total_minuto + minuto; 

    //Imprimir qntd de minutos. 
    printf("Se passaram %d minutos desde o inicio do dia", minuto_final); 

    return 0; 
    
}