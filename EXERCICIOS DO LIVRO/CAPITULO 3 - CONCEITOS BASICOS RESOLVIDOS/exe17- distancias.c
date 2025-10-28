//pé = 12 polegadas
//1 jarda = 3 pés
//1 milha = 1,760 jarda
//Receber uma medida em pés, fazer as conversões a seguir e mostrar os resultados
//a) polegadas
//b) jardas
//c) milhas
int main()
{
    //Inicializar o programa de acordo com o que tem no enunciado
    float pes, polegadas, jardas, milhas;

    //Receber os dados que o usuário irá colocar
    printf("Digite quantos pe(s): ");
    scanf("%f", &pes);

    //Fazer os cálculos para achar as conversões
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760.0; //adicionei o .0 porque e divisão em float. 

    //Imprimir o resultado das conversões de acordo com o cálculo
    printf("\nPolegada(s) = %.2f\n Jarda(s) = %.2f\n Milha(s) = %.6f", polegadas, jardas, milhas); // adicionei 0 %.6f para visualizar melhor a divisão porque senão arredondaria para 0. 

    return 0;
}
