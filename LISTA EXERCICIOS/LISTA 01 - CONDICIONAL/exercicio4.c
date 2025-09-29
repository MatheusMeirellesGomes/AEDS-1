//Faça um algoritmo que segundo uma nota informada pelo usuário, verifique em qual faixa a mesma se encaixa e imprima
//para o usuário a mensagem correspondente conforme a tabela abaixo:
//Faixa das notas Mensagem: Ótimo - nota > = 8 e nota < = 10; Bom - nota > = 7 e nota < 8; Regular - nota > = 5 e nota < 7; Insatisfatório - nota < 5;
int main()
{
    //Inicializar Variáveis.
    float nota;

    //Receber nota.
    printf("Digite a nota: ");
    scanf("%f", &nota);

    //Verificar onde essa nota se encaixa.
    if (nota >= 8 && nota <= 10)
    {
        printf("Otimo");
    }
    else if (nota >= 7 && nota < 8)
    {
        printf("Bom");
    }
    else if (nota >= 5 && nota < 7)
    {
        printf("Regular");
    }
    else if (nota < 5)
    {
        printf("Insatisfatorio");
    }
    else
    {
        printf("Nota Invalida");
    }

    return 0;
}
