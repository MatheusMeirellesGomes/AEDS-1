#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct para armazenar informações do cliente. 
typedef struct {
    char nome[75];
    char endereco[100];
    char telefone[20];
} Cliente;

int main() {
    //Inicializar Variáveis. 
    Cliente clientes[2];
    
    printf("CADASTRO DE CLIENTES\n");
    
    //Recebdr informações dos clientes. 
    for (int cont = 0; cont < 2; cont++) {
        printf("Cliente %d:\n", cont + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]", clientes[cont].nome);
        
        printf("Endereco: ");
        scanf(" %[^\n]", clientes[cont].endereco);
        
        printf("Telefone: ");
        scanf(" %[^\n]", clientes[cont].telefone);
        
        //Pular linha para melhor visualização. 
        printf("\n");
    }
    
    // PASSO 4: Exibir dados cadastrados
    printf("CLIENTES CADASTRADOS\n");
    
    for (int cont = 0; cont < 2; cont++) {
        printf("Cliente %d:\n", cont + 1);
        printf("Nome: %s\n", clientes[cont].nome);
        printf("Endereco: %s\n", clientes[cont].endereco);
        printf("Telefone: %s\n", clientes[cont].telefone);
        printf("\n");
    }
    
    return 0;
}