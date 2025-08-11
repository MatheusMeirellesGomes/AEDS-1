//Receber uma hora formada por hora e minuto (numero real), calcular e mostrar a hora 
//digitada apenas em minutos.
//a) para quatro e meia, deve-se digitar 4.30; 
//b) os minutos vão de 0 a 59; 

int main()
{
    //Inicializar o programa colocando os dados do enunciado
    int hora, minuto, hora_total; 
    float hora_real; //Para ler em float 

    //Receber as horas e minutos
    printf("Digite a hora (formato HH.MM): ");
    scanf("%f", &hora_real); 

    hora = (int)hora_real; 
    minuto = (int)((hora_real - hora) * 100); //Multiplicar por 100 achar os minutos certos. 

    //Calcular a hora total em minutos 
    hora_total = (hora *  60) + minuto; //Primeiro multiplica a hora por 60 para converter em minutos e depois soma os minutos digitados para obter o total. 
    // 1 hora = 60 minutos. Se a pessoa digitar 4.30, o cálculo será (4 * 60) + 30 = 270 minutos.

    //Imprimir os minutos
    printf("A hora total em minutos eh: %d minutos\n", hora_total); //Imprime o total de minutos conforme solicitado

    return 0; 

}