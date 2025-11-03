//Escreva um programa em C para imprimir todas as letras do alfabeto maiúsculo usando um
//ponteiro.
int main()
{
    //Inicializar Variáveis.
    char letra; //Variável para armazenar cada letra do alfabeto.
    char *ponteiroLetra; //Ponteiro para a variável letra.

    //Atribuir o endereço da variável letra ao ponteiro.
    ponteiroLetra = &letra;

    //Imprimir todas as letras do alfabeto maiúsculo usando o ponteiro.
    printf("Letras do alfabeto maiusculo:\n");
    for (*ponteiroLetra = 'A'; *ponteiroLetra <= 'Z'; (*ponteiroLetra)++) {
        printf("%c ", *ponteiroLetra); //Imprimir a letra atual.
    }
    printf("\n"); //Nova linha após imprimir todas as letras.

    return 0;
}