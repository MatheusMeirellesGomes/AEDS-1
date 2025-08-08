//Cada degrau da escada tem x altura, receba essa altura e a altura que o usuário deseja para alcançar subindo
//a escada, calcule e mostre quantos degraus ele deverá subir para atingir seu objetivo. As medidas devem estar
//em metros.
int main()
{
    //Inicializar o programa com os dados do enunciado
    int altura_degrau, altura_desejada, qntd_degraus;

    //Receber as informações necessárias
    printf("Informe a altura do degrau: "); //Receber a altura do degrau conforme solicitado.
    scanf("%d", &altura_degrau);

    printf("Altura desejada para alcancar o objetivo: "); //Receber a altura que o usuário deseja para alcançar seu objetivo.
    scanf("%d", &altura_desejada);

    //Fazer o cálculo para saber a quantidade de degraus.
    qntd_degraus = altura_desejada / altura_degrau;// Esta é o cálculo que deve ser feito, dividir a altura desejada pela altura do degrau para saber a qntd de degraus da escada. 

    //Imprimir a quantidade de degraus que a escada tem.
    printf("Esta escada possui %d degraus", qntd_degraus); //Imprimindo conforme solicitado.

    return 0;

}


