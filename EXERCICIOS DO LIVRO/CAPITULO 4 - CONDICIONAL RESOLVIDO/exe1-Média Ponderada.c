//A nota final do estudante é calculada a partir de três notas. A média das notas mencionadas obedece aos pesoas a seguir:
//a) Nota de Laboratório = peso 2.
//b) Avaliação semestral = peso 3.
//c) Exame final = peso 5.
//Receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela:
//Media pondera: 8 a 10 - conceito A; 7 a 7.9 - conceito B; 6 a 6.9 - conceito c; 5 a 5.9 - conceito D; 0 a 4.9 - conceito E.
int main()
{
    //Indicar as variáveis.
    float notaA, notaB, notaC, media;
    int peso1 = 2, peso2 = 3, peso3 = 5;

    //Receber as notas:
    printf("Digite a primeira nota: ");
    scanf("%f", &notaA);
    printf("Digite a segunda nota: ");
    scanf("%f", &notaB);
    printf("Digite a terceira nota: ");
    scanf("%f", &notaC);

    //Calcular e imprimir media ponderada.
    media = (notaA * 2 + notaB * 3 + notaC * 5) / 10; //Soma da multiplicação das notas com o peso, dividido pela soma dos pesos.
    printf("\nMedia = %.2f\n", media);

    //Mostrar o conceito que se pede.
    if (media >= 8 && media <= 10)
    {
        printf("\nCONCEITO A\n");
    }
    else if (media >= 7 && media < 8)
    {
        printf("\nCONCEITO B\n");
    }
    else if (media >= 6 && media < 7)
    {
        printf("\nCONCEITO C\n");
    }
    else if (media >= 5 && media < 6)
    {
        printf("\nCONCEITO D\n");
    }
    else if (media >= 0 && media < 5)
    {
        printf("\nCONCEITO E\n");
    }
    else 
    {
        printf("\nMedia invalida\n");
    }

    return 0;
}
