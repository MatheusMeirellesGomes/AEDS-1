//Uma determinada biblioteca possui obras de ciências exatas, humanas e biológicas, totalizando 1500 volumes, distribuídos em cada uma das áreas. 
//O proprietário resolveu agrupar as informações de cada livro no seguinte registro:
//• Código de catalogação
//• Doação (S/N)
//• Nome da obra
//• Nome do autor
//• Editora
//• Área
//Cadastrar os volumes de cada uma das áreas em três vetores distintos. 
//Permita ao usuário fazer consulta às informações cadastradas fornecendo o código de catalogação e a área. Existindo tal livro as informações são exibidas, 
//caso contrário enviar mensagem de aviso. A consulta se repete até que o usuário digite o código finalizador -1. 
typedef struct {
    int codigo; 
    char doacao; //Sim ou Nao.
    char nome_obra[50];
    char nome_autor[50]; 
    char editora[50]; 
    char area[20]; 
} Livro; //Registro (struct) que armazenas as informações dos livros. 

//Função principal. 
int main()
{
    //Inicializar variáveis. 
    Livro exatas[500], humanas[500], biologicas[500]; //Três vetores distintos com 500 posições cada um, conforme o enunciado. 

    //Inicializa contador de cada área. 
    int qntd_exatas = 0, qntd_humanas = 0, qntd_biologicas = 0; //Contadores para verificar a quantidade de livros cadastrados em cada área. 

    //Primeiro, cadastrar livros na área de exatas. 
    for (int cont = 0; cont < 500; cont++) {
        printf("Cadastro de livros - Area de Exatas.\n"); 

        //Receber informações do livro de acordo com o registro. 
        printf("\nInforme o codigo de catalogacao (-1 para finalizar): "); 
        scanf("%d", &exatas[cont].codigo); //Referenciando ao código, de cada livro da área de exatas. 

        printf("Este livro teve alguma doacao? (S/N): ");
        scanf(" %c", &exatas[cont].doacao); //Referenciando à doação, de cada livro da área de exatas.

        printf("Informe o nome da obra: "); 
        scanf(" %[^\n]", exatas[cont].nome_obra); //Referenciando ao nome da obra, de cada livro da área de exatas. Como é string, não precisa do &.

        printf("Informe o nome do autor: "); 
        scanf(" %[^\n]", exatas[cont].nome_autor); //Referenciando ao nome do autor, de cada livro da área de exatas. Como é string, não precisa do &.

        printf("Informe a editora: ");
        scanf(" %[^\n]", exatas[cont].editora); //Referenciando à editora, de cada livro da área de exatas. Como é string, não precisa do &.

        //Verificar se o usuário deseja finalizar o cadastro.
        while (exatas[cont].codigo != -1) {
            qntd_exatas++; //Incrementar o contador de livros cadastrados na área de exatas. 
        }
    }

    //Cadastrar livros na área de humanas. 
    for (int cont = 0; cont < 500; cont++) {
        printf("Cadastro de livros - Area de Humanas.\n"); 

        //Receber informações do livro de acordo com o registro. 
        printf("\nInforme o codigo de catalogacao (-1 para finalizar): "); 
        scanf("%d", &humanas[cont].codigo); //Referenciando ao código, de cada livro da área de humanas. 

        printf("Este livro teve alguma doacao? (S/N): ");
        scanf(" %c", &humanas[cont].doacao); //Referenciando à doação, de cada livro da área de humanas.

        printf("Informe o nome da obra: "); 
        scanf(" %[^\n]", humanas[cont].nome_obra); //Referenciando ao nome da obra, de cada livro da área de humanas. Como é string, não precisa do &.

        printf("Informe o nome do autor: "); 
        scanf(" %[^\n]", humanas[cont].nome_autor); //Referenciando ao nome do autor, de cada livro da área de humanas. Como é string, não precisa do &.

        printf("Informe a editora: ");
        scanf(" %[^\n]", humanas[cont].editora); //Referenciando à editora, de cada livro da área de humanas. Como é string, não precisa do &.

        //Verificar se o usuário deseja finalizar o cadastro.
        while (humanas[cont].codigo != -1) {
            qntd_humanas++; //Incrementar o contador de livros cadastrados na área de humanas. 
        }
    }

    //Cadastrar livros na área de biológicas. 
    for (int cont = 0; cont < 500; cont++) {
        printf("Cadastro de livros - Area de Biologicas.\n"); 

        //Receber informações do livro de acordo com o registro. 
        printf("\nInforme o codigo de catalogacao (-1 para finalizar): "); 
        scanf("%d", &biologicas[cont].codigo); //Referenciando ao código, de cada livro da área de biológicas. 

        printf("Este livro teve alguma doacao? (S/N): ");
        scanf(" %c", &biologicas[cont].doacao); //Referenciando à doação, de cada livro da área de biológicas.

        printf("Informe o nome da obra: "); 
        scanf(" %[^\n]", biologicas[cont].nome_obra); //Referenciando ao nome da obra, de cada livro da área de biológicas. Como é string, não precisa do &.

        printf("Informe o nome do autor: "); 
        scanf(" %[^\n]", biologicas[cont].nome_autor); //Referenciando ao nome do autor, de cada livro da área de biológicas. Como é string, não precisa do &.

        printf("Informe a editora: ");
        scanf(" %[^\n]", biologicas[cont].editora); //Referenciando à editora, de cada livro da área de biológicas. Como é string, não precisa do &.

        //Verificar se o usuário deseja finalizar o cadastro.
        while (biologicas[cont].codigo != -1) {
            qntd_biologicas++; //Incrementar o contador de livros cadastrados na área de biológicas. 
        }
    }

    return 0; 
}