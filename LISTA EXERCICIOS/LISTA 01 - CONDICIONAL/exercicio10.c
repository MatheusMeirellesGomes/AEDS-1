//Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela.
//Se o motorista estiver dentro do limite de velocidade, imprima a mensagem “Motorista respeitou a lei”. Se o motorista tiver ultrapassado a
//velocidade máxima permitida, calcule e imprima o valor da multa a ser cobrada, sabendo que os valores a serem cobrados são os seguintes:
//50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida.(ex: se a velocidade máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h);
// 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida; 200 reais, se estiver acima de 30km/h da velocidade permitida.
int main()
{
    //Inicializar Informações.
    int velo_permitida, velo_motorista, multa;

    //Receber informações.
    printf("Velocidade Permitida(Km/h): ");
    scanf("%d", &velo_permitida);

    printf("Velocidade do motorista(Km/h): ");
    scanf("%d", &velo_motorista);

    //Verificar qual a multa de acordo com a velocidade.
    if (velo_motorista > velo_permitida) //Se o motoriste estiver acima da velocidade permitida.
    {
        if (velo_motorista <= velo_permitida + 10){ //Se ele estiver acima de 10km/h da velocidade permitida.
            multa = 50;
            printf("Multa de %d reais\n", multa);
        }
        else if (velo_motorista <= velo_permitida + 30){//Se ele estiver acima de 30km/h da velocidade permitida.
            multa = 100;
            printf("Multa de %d reais\n", multa);
        }
        else{
            multa = 200;
            printf("Multa de %d reais\n", multa);
        }

    }

    else //Se ele estiver dentro do limite de velocidade.
    {
        printf("Motorista respeitou a lei.\n");
    }

    return 0;

}
