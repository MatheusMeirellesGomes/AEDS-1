//Fzça um programa que receba a idade, o sexo (M ou F), a altura de N alunos, e informe:
//a) Qual a maior altura do aluno. 
//b) Alunos com mais de 15 anos. 
//c) Ver quantos homens e quantas mulheres tem na sala.  
//d) A média da idade das mulheres com mais de 1.60 metros de altura. 
int main()
{
    //Inicializar Variáveis. 
    int N, idade, feminino = 0, masculino = 0, idade15 = 0, qntd_idade = 0; //Igualar a zero para não ter lixo. 
    float altura, maior_altura, media_idade, soma_idade = 0; 
    char sexo; 

    printf("Informe quantos alunos a sala tem: "); 
    scanf("%d", &N); 

    //Receber informações múltiplas vezes de todos os alunos. 
    for (int cont = 1; cont <= N; cont++)
    {
        //Receber informações. 
        printf("\nInforme a idade do aluno: "); 
        scanf("%d", &idade);

        printf("Informe o sexo do alunos (M / F): "); 
        scanf(" %c", &sexo); 

        printf("Informe a altura do aluno: "); 
        scanf("%f", &altura); 

        //Verificar de acordo com as alternativas
        if (cont == 1) //Idade começa com 1. Tem que ser cont == 1. Não pode ser altura == 1. 
        {
            maior_altura = altura; //Então a maior altura por enquanto é a primeira altura informada. 
        }
        else if (altura > maior_altura) //Se a altura, for maior que a maior altura
        {
            maior_altura = altura; //A maior altura passará a ser a altura maior informada. 
        }

        //Verificar quantos alunos tem mais de 15 anos. 
        if (idade >= 15)
        {
            idade15++; //Guardar na variável quantos alunos tem 15 anos ou mais. 
        }

        //Verificar se a sala tem mais homens ou mulheres. 
        if (sexo == 'M' || sexo == 'm')
        {
            masculino++; //Guardar na variável quantos masculinos têm na sala. 
        }
        else if (sexo == 'F' || sexo == 'f')
        {
            feminino++; //Guardar na variável quantos femininos têm na sala. 
        }

        //Verificar a média de idade das mulheres com mais de 1.60 de altura. 
        if (sexo == 'F' || sexo == 'f') //Se o sexo for feminino. 
        {
            if (altura > 1.60){ //Se for feminino e tiver mais de 1.60 
                soma_idade += idade; //Vai primeira somar a idade de todas as mulheres com mais de 1.60. 
                qntd_idade++; //Vai guardar na variável a quantidade de mulheres com mais de 1.60 de altura. 
            }
        }
    }

    //Calcular a média de mulheres com mais de 1.60 de altura. 
    media_idade = soma_idade / qntd_idade; //A média de mulheres com mais de 1.60 nada mais é que a soma das idades das mulheres com mais de 1.60 dividido pela quantidade
    //de mulheres com mais de 1.60. 

    //Imprimir resultados necessários. 
    printf("\nMaior altura do aluno(a): %.2f\n", maior_altura); 
    printf("Quantidade de alunos com mais de 15 anos: %d\n", idade15); 
    printf("Pessoas do sexo masculino: %d - Pessoas do sexo feminino: %d\n", masculino, feminino); 
    printf("Media da idade de mulheres com mais de 1.60 de altura: %.2f\n", media_idade); 

    return 0; 

}