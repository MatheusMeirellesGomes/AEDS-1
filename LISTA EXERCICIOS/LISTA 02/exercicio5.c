//A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos de cada habitante.
//A prefeitura deseja saber: A - média do salário da população; B - média do número de filhos; C - Maior salário; D - percentual de pessoas com salário até R$100,00.
// O final da leitura de dados se dará com a entrada de um salário negativo.
int main()
{
    //Inicializar Variáveis.
    int num_pessoas = 0, num_filhos, sal_100 = 0;
    float salario, media_sal, media_filhos, maior_sal, percentual;
    float total_sal = 0, total_filhos = 0;

    //Usar estrutura de repetição para verificar o que fazer. 
    do //O programa vai executar o que esta dentro do do. (Faça...)
    {
        printf("Digite o salario: R$ "); //Se for um salário negativo, encerra o programa. 
        scanf("%f", &salario);

        if (salario >= 0)
        {
            printf("Informe quantos filhos: ");
            scanf("%d", &num_filhos);

            num_pessoas++;
            total_sal += salario; //Vai pegar todos os salários e somar para calcular a média depois. 
            total_filhos += num_filhos; //Vai pegar todos os salários e somar para calcular a média depois. 

            //Verificar qual é o maior salário da pesquisa.
            if (num_pessoas == 1){
                maior_sal = salario;
            }
            else if (salario > maior_sal){
                maior_sal = salario;
            }

            //Verificar qual é o percentual de pessoas com salário até 100 reais. 
            if (salario <= 100){
                sal_100++; //Guardar na variável todos os salários que forem maior que 100. 
            }
        }

    }while (salario >= 0); //... enquanto o salário for maior que 0. 

    //Calcular a media de salários e filhos. 
    media_sal = total_sal / num_pessoas;
    media_filhos = total_filhos / num_pessoas; 
    percentual = (sal_100 * 100.0) / num_pessoas;

    //Imprimir resultados. 
    printf("\nMaior salario: R$ %.2f\n", maior_sal); 
    printf("Media salarial: R$ %.2f\n", media_sal); 
    printf("Media de filhos: %.2f\n", media_filhos); 
    printf("Percentual de pessoas com menos de 100 reais: %.2f\n", percentual); 

    return 0;
}