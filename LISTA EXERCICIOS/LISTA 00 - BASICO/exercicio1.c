//Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade) e mostrar o número invertido (no formato UDC).
// O número invertido deve ser armazenado em outra variável antes de ser mostrado.
int main()
{
    //inicialziar variáveis.
    int num, invertido; //Uma variável para o número, e outra variável para o número invertido.

    //Receeber número.
    //printf("Digite um número: "), com centena, dezena, unidade.
    scanf("%d", &num);

    //Inverter número.
    invertido = (num % 10) * 100 + (num / 10 % 10) * 10 + (num / 100); //U * 100 + D * 10 + C, ex: 472 - Unidade: 472 % 10 = 2;  Dezena: 472 / 10 % 10 = 47 % 10 = 7;
    // Centena: 472 / 100 = 4; Montagem: 2*100 + 7*10 + 4 = 200 + 70 + 4 = 274;

    //Imprimir resultado.
    printf("%d", invertido);

    return 0;

}
