//Receba o custo  de um espetáculo e o preço do convite. Calcule a quantidade
//de convites que devem ser vendidos para alcançar o custo do espetáculo
int main()
{
    //Inicializar o programa colocando os dados do enunciado
    int custo, preco, qntd_convite;

    //Receber o custo do espetáculo
    printf("Digite o custo do espetaculo: R$ ");//Recebendo custo do espetáculo
    scanf("%d", &custo);

    //Receber o preço do convite
    printf("Digite o preco do convite: R$ ");//Recebendo o preço do convite
    scanf("%d", &preco);

    //Calcular a quantidade de convites que devem ser vendidos
    qntd_convite = custo  / preco; //Dividir o custo pelo preço do convite para obter a quantidade de convite
    //Ex: Se o custo for 1000 e o preço for 50, a qntd de convites será 1000 / 50 = 20 convites.

    //Imprimir a qntd de convites para cobrir o custo do espetáculo
    printf("Devem ser vendidos %d convites\n", qntd_convite);

    return 0;
}
