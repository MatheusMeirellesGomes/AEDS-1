//Uma empresa decidiu dar uma gratificação de Natal, baseada no número de horas extras e ao número de horas que o funcionário faltou no trabalho. O valor do prêmio 
//é obtido pela consulta á tabela que se segue. H = números de horas - (2 / 3 * (numero de horas falta)). 
int main()
{
    //Inicializar Variáveis.
    int nmr_hrs_extras, nmr_hrs_falta, premio;
    float horas;

    //Receber informações necessárias. 
    printf("Numero de Horas extras: "); 
    scanf("%d", &nmr_hrs_extras); 

    printf("Numero de Horas que o funcioanrio faltou: "); 
    scanf("%d", &nmr_hrs_falta); 

    //Calcular as horas totais. 
    horas = nmr_hrs_extras - (2.0 / 3.0 * (nmr_hrs_falta)); 
    
    //Verificar as horas de acordo com a tabela. 
    if (horas < 600){
        premio = 100; 
    }
    else if (horas >= 600 && horas < 1200){
        premio = 200;
    }
    else if (horas >= 1200 && horas < 1800){
        premio = 300; 
    }
    else if (horas >= 1800 && horas < 2400){
        premio = 400;
    }
    else if (horas >= 2400){
        premio = 500; 
    }

    //Imprimir Prêmio. 
    printf("\nValor do Prêmio = %d\n", premio); 

    return 0; 

}