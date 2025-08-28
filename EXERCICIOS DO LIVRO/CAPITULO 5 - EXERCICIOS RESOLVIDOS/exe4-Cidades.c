//Uma estatística foi feita em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:
//a) Código da cidade; b) Número de veículos de passeio; c) Número de acidentes de trânsito com vítimas.
//Deseja-se saber:
//a) Qual é o maior e menor índice de acidentes de trânsito e a que cidade pertencem;
//b) Qual é a média de veículos nas cinco cidades juntas;
//c) Qual é a média de acidentes de trãnsito nas cidades com menos de 2.000 veículos de passeio.
//Estrutura de Repetição.
int main()
{
    //Iniciallizar Variáveis.
    int cont, cod_cidade, num_veiculos, num_acidentes;
    int maior, cidade_maior, menor, cidade_menor, cont_acidentes = 0;
    float media_veiculos, soma_veiculos = 0, media_acidentes, soma_acidentes = 0; //Inicializar as variáveis igualando a 0, para evitar lixo de memória. 

    //Receber dados das 5 cidades.
    for  (cont = 1; cont <= 5; cont++) //Laço que vai de 1 até 5, para as 5 cidades, e nao precisar ficar colocando um monte de printf.
    {
        printf("Digite o codigo da cidade: ");
        scanf("%d", &cod_cidade);
        printf("Digite o numero de veiculos de passeio: ");
        scanf("%d", &num_veiculos);
        printf("Digite o numero de acidentes de transito com vitimas: ");
        scanf("%d", &num_acidentes);
        printf("\n");

        //Calcular o maior e menor índice de acidentes de trânsito e a que cidade pertencem .
        if (cont == 1)//Se for a primeira cidade, o maior e menor índice de acidentes são os mesmos, porque é a primeira cidade.
        {
            maior = num_acidentes;
            cidade_maior = cod_cidade;
            menor = num_acidentes;
            cidade_menor = cod_cidade;
        }
        else //Se não for a primeira cidade, compara o número de acidentes com o maior e menor índice. 
        {
            if (num_acidentes > maior){//Se o número de acidentes for maior que o maior índice, atualiza o maior índice e a cidade.
                maior = num_acidentes;
                cidade_maior = cod_cidade;
            }
            if (num_acidentes < menor){//Se o número de acidentes for menor que o menor índice, atualiza o menor índice e a cidade.
                menor = num_acidentes;
                cidade_menor = cod_cidade;
            }
        }

        //Calcular a soma de veículos, para calcular a média depois.
        soma_veiculos += num_veiculos; //Soma o número de veículos de cada cidade.

        //Calcular a média de acidentes de trânsito nas cidades com menor de 2.000 veículos de passeio.
        if (num_veiculos < 2000) //Se o número de veículos for menor que 2000, soma o número de acidentes e incrementa o contador de cidades com menos de 2000 veículos.
        {
            soma_acidentes += num_acidentes;
            cont_acidentes++; //Incrementa o contador de cidades com menos de 2000 veículos.
            media_acidentes = soma_acidentes / cont_acidentes; //Média de acidentes é a soma dos acidentes dividido pelo contador de cidades com menos de 2000 veículos.
        }
        

    }
    //Calcular a média de veículos nas cinco cidades juntas. Pode deixar fora do for, porque é a soma total dos veículos. 
    media_veiculos = soma_veiculos / 5; //Média de veículos é a soma dos veículos dividido por 5, porque são 5 cidades.

    //Exibir os resultados.
        printf("Maior indice de acidentes: %d - Cidade: %d\n", maior, cidade_maior);
        printf("Menor indice de acidentes: %d - Cidade: %d\n", menor, cidade_menor);
        printf("Media de veiculos nas cinco cidades: %.2f\n", media_veiculos);
        printf("Media de acidentes nas cidades com menos de 2000 veiculos: %.2f\n", media_acidentes);
        printf("\n"); //Pula uma linha para separar os dados de cada cidade.

    return 0;

}
