int main()
{
    //Inicializar Variáveis. 
    int codigo, nmr_horas_trabalhadas; 
    float sal_minimo = 450, sal_inicial = 0, valor_hr_trabalhada;
    float auxilio_alimentacao, sal_final;  
    char turno, categoria;

    printf("EMPRESA.\n"); 

    printf("\nSalario Minimo = R$ 450.\n"); 

    //Verficar as informações necessárias. 
    for (int cont = 1; cont <= 10; cont++)
    {
        //Receber informações. 
        printf("\nInforme o codigo do funcionario [1 - 10]: "); 
        scanf("%d", &codigo); 

        printf("Informe o numero de horas trabalhadas: "); 
        scanf("%d", &nmr_horas_trabalhadas);

        printf("Informe a categoria [O- operario / G- gerente]: "); //Informar apenas letras maiúsculas. 
        scanf(" %c", &categoria); 

        printf("Informe o turno do funcionario [M / V / N]: "); //Informar apenas letras maiúsculas. 
        scanf(" %c", &turno); 

        //Verificar valor da hora trabalhada. 
        if (categoria == 'G' && turno == 'N'){
            valor_hr_trabalhada = sal_minimo * 0.18; 
        }
        else if (categoria == 'G'){
            if (turno == 'M' || turno == 'V'){
                valor_hr_trabalhada = sal_minimo * 0.18; 
            }
        }
        else if (categoria == 'O' && turno == 'N'){
            valor_hr_trabalhada = sal_minimo * 0.13; 
        } 
        else if (categoria == 'O'){
            if (turno == 'M' || turno == 'V'){
                valor_hr_trabalhada = sal_minimo * 0.10; 
            }
        }
        else {
            printf("\nTurno ou categoria invalido.\n");
        }

        //Calcular o salário inicial dos funcionários. 
        sal_inicial = valor_hr_trabalhada * nmr_horas_trabalhadas;

         //Verificar o auxilio alimentação. 
        if (sal_inicial <= 300){
            auxilio_alimentacao = sal_inicial * 0.20; 
        }
        else if (sal_inicial > 300 && sal_inicial <= 600){
            auxilio_alimentacao = sal_inicial * 0.15; 
        }
        else {
            auxilio_alimentacao = sal_inicial * 0.05; 
        }

        //Calcular o salário final. 
        sal_final = sal_inicial + auxilio_alimentacao; 

        //Imprimir resultados. 
        printf("\nValor da hora trabalhada: R$ %.2f\n", valor_hr_trabalhada); 
        printf("\nSalario Inicial: R$ %.2f\n", sal_inicial); 
        printf("\nAuxilio Alimentacao: R$ %.2f\n", auxilio_alimentacao); 
        printf("\nSalario Final: R$ %.2f\n", sal_final); 
    }

    return 0; 
    
}