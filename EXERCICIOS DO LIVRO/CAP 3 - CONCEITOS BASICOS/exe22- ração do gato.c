//Pedro comprou um saco de ração com peso em kgs. Ele possui dois gatos, e a ração é fornecida em gramas.
//A qntd de ração por dia de cada gato é a mesma. Receba o peso do saco de ração e a qntd de ração fornecida 
//para cada gato, calcule e mostre quantoo restará de ração no saco após 5 dias. 
int main()
{
    //Inicialializar o programa com os dados do enunciado 
    float peso_saco, racao_gato1, racao_gato2, racao_final; 
    
    //Receber os dados do usuário. 
    printf("Digite o peso do saco: "); 
    scanf("%f", &peso_saco); 
    
    printf("Digite a qntd de racao do primeiro gato: "); 
    scanf("%f", &racao_gato1); 
    
    printf("Digite a qntd de raçao do segundo gato: "); 
    scanf("%f", &racao_gato2); 
    
    //Fazer o cálculo de quanto cada gato come
    float peso_saco_gramas = peso_saco * 1000; //Transformar o peso do saco para gramas. 
    racao_gato1 = racao_gato1 / 1000; //Dividiu por 1000, por e de kgs para gramas, ou seja, 1kg = 1.000g, e assim por diante. 
    racao_gato2 = racao_gato2 / 1000; 
    racao_final = peso_saco - 5 * ( racao_gato1 + racao_gato2); //A ração final é o peso total do saco menos os 5 dias que eles estao comendo, multipicado pela soma da qntd de ração que cada gato come. 

    //Imprimir quanto restará de ração após os  5 dias. 
    printf("Resta cerca de %.2f kg de racao no saco.", racao_final);


    return 0;
}

