//Verifique a validade de uma senha fornecida pelo usuário. A senha é 4531, a mensagem deve mostrar uma mensagem de permissão ou não. 
int main() 
{
    //Inicializar Variáveis.
    int senha;
    
    //Receber senha.
    printf("Digite a senha: ");
    scanf("%d", &senha);
    
    //Verificar se a senha é a que foi indicada.
    if (senha == 4531) {
        printf("Acesso permitido\n");
    } 
    else {
        printf("Acesso negado\n");
    }
    
    return 0;
}