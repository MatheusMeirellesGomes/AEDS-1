//Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos 
//obedecem à seguinte codificação: • 1,2,3,4 = voto para os respectivos candidatos; • 5 = voto nulo; • 6 = voto em branco; 
//Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva: • total de votos para cada candidato; • total de votos nulos; 
//• total de votos em branco. Como finalizador do conjunto de votos, tem-se o valor 0.
int main()
{
    //Inicializar Variáveis. 
    int cod_voto, total_votos = 0, total_nulos = 0, total_brancos = 0; //Igualar totais igual a zero porque ainda não tem votos, e para não dar lixo na memória.
    int voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0; //Igualar os votos iguais a zero para não ter lixo na memória e porque ainda não tem nenhum voto salvo na variável. 

    //Receber os candidatos e os votos respectivmente dentro de uma repetição. 
    do //Irá executar o código 
    {
        //Receber o código do candidato e o voto do eleitor
        printf("Digite o código do voto (1-4 candidatos, 5 nulo, 6 branco, 0 encerra): "); 
        scanf("%d", &cod_voto); 

        switch (cod_voto) //Vai verificar qual é o código que o usuário vai inserir. 
        {
        case 1: //Se for o 1, vai salvar na variável e vai contabilizar. Mesma lógica com os demais. 
            voto1++; 
            break;
        case 2: 
            voto2++;
            break;
        case 3: 
            voto3++;
            break; 
        case 4: 
            voto4++;
            break; 
        case 5: 
            total_nulos++; 
            break;
        case 6: 
            total_brancos++; 
            break;
        default:
            break;
        }
    } while (cod_voto != 0); //Enquanto o código do candidato for diferente de zero. 

    //Imprimir resultados e quantidades de votos em cada candidato, podendo eles ser nulos ou brancos.
    printf("\nTotal de votos para o candidato 1: %d\n", voto1);
    printf("Total de votos para o candidato 2: %d\n", voto2);
    printf("Total de votos para o candidato 3: %d\n", voto3);
    printf("Total de votos para o candidato 4: %d\n", voto4);
    printf("Total de votos nulos: %d\n", total_nulos);
    printf("Total de votos em branco: %d\n", total_brancos);

    return 0; 
    
}