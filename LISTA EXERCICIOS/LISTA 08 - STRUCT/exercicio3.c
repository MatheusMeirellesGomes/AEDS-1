#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente, e-mail, número de horas de acesso, página (S-sim ou N-não).
//Elaborar um algoritmo que calcule e mostre um relatório contendo o valor a pagar por cada cliente, sabendo-se que as primeiras
//20 horas de acesso é 35,00 Quanzas e as horas que excederam tem o custo de 2,50 Quanzas por hora. Para os clientes que têm página, adicionar 40,00 Quanzas.
//Inserir um conjunto de registros (máximo 500).

//Typedef para o registro do cliente.
typedef struct {
    //Inicializar Variáveis para o registro de cada cliente.
    int codigoCliente;
    char email[100];
    int horasAcesso;
    char pagina; //S - sim; N - não.
} Cliente; //Registro (struct) criado para ter os dados do cliente.

//Função para calcular o valor a pagar pelo cliente.
float valorPagar(Cliente Cada_cliente) {
    //Estipular valor fixo e variável.
    float valor = 35.0; //Valor fixo para as primeiras 20 horas.

    //Verificar se o cliente excedeu as 20 horas.
    if (Cada_cliente.horasAcesso > 20) {
        valor += (Cada_cliente.horasAcesso - 20) * 2.5; //Adicionar o valor excedente.
    }

    //Verificar se o cliente possui página.
    if (Cada_cliente.pagina == 'S' || Cada_cliente.pagina == 's') {
        valor += 40.0; //Adicionar 40 quanzas se o cliente possuir página, conforme solicitado.
    }

    //Retornar o valor total a pagar e guardar na variável.
    return valor;
}

//Função principal.
int main()
{
    //Inicializar Variáveis.
    int N; //Número de clientes a serem cadastrados.

    //Antes de inicializar o vetor de registros, solicitar ao usuário a quantidade de clientes que ele deseja cadastrar.
    printf("Informe o numero de clientes a serem cadastrados: ");
    scanf("%d", &N);

    //Depois de saber o número de clientes, inicializar o vetor de registros.
    Cliente clientes[N]; //Vetor de registros, estaticamente alocado para N clientes.

    //Laço para ler os dados dos clientes.
    for (int cont = 0; cont < N; cont++) {
        //Primeiro, ler o código do cliente.
        printf("\nInforme o codigo do cliente %d: ", cont + 1);
        scanf("%d", &clientes[cont].codigoCliente); //Acessa o campo código do cliente do struct de cada cliente cadastrado (cont).

        //Segundo, ler o e-mail do cliente.
        printf("Informe o email do cliente %d: ", cont + 1);
        scanf(" %[^\n]", clientes[cont].email); //Acessa o campo e-mail do cliente do struct de cada cliente cadastrado (cont).

        //Terceiro, ler o número de horas de acesso do cliente.
        printf("Informe o numero de horas de acesso ao cliente %d: ", cont + 1);
        scanf("%d", &clientes[cont].horasAcesso); //Acessa o campo número de horas de acesso ao cliente do struct de cada cliente cadastrado (cont).

        //Quarto, ler se o cliente tem página ou não.
        printf("O cliente %d possui pagina? (S - sim; N - nao): ", cont + 1);
        scanf(" %c", &clientes[cont].pagina); //Acessa o campo página do cliente do struct de cada cliente cadastrado (cont).

        printf("\n"); //Pular uma linha para melhor visualização dos dados.
    }

    printf("Relatorio de valores a pagar pelos clientes:\n");

    //Laço para acionar a função e mostrar o valor a pagar por cada cliente.
    for (int cont = 0; cont < N; cont++) {
        //Acionar a função que calcula o valor a ser pago por cada cliente.
        float valor = valorPagar(clientes[cont]); //Chamar a função para calcular o valor a pagar pelo cliente.

        //Imprimir os dados do cliente e o valor a pagar.
        printf("\nCodigo do Cliente: %d\n", clientes[cont].codigoCliente);
        printf("Email do Cliente: %s\n", clientes[cont].email);
        printf("Horas de Acesso: %d\n", clientes[cont].horasAcesso);
        printf("Possui pagina: %c\n", clientes[cont].pagina);
        printf("Valor a pagar: %.2f Quanzas\n", valor);
    }

    return 0;
}