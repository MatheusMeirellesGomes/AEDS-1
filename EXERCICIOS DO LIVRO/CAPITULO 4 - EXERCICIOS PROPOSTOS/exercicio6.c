//Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com escolha do usuário. Se for digitada uma opção inválida, mostre uma
//mensagem de erro e termine a execução do programa. As opções são:
//a) O primeiro número elevado ao segundo número.
//b) Raiz Quadrada de cada um dos números.
//c) Raiz Cúbica de cada um dos números.
int main()
{
    //Inicializar Variáveis.
    float num1, num2, potencia, raiz_quad1, raiz_quad2, raiz_cubo1, raiz_cubo2;
    int opcao;

    //Receber Números.
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);

    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha um opcao (1 - 3): ");
    scanf("%d", &opcao);

    //Verificar de acordo com a opção.
    if (opcao == 1){ //Primeiro número elevado pelo segundo.
        potencia = pow(num1, num2);
        printf("\nPrimeiro numero elevado ao segundo: %.2f\n", potencia);
    }
    else if (opcao == 2){ //Raiz Quadrada de cada um dos números.
        raiz_quad1 = sqrt(num1);
        raiz_quad2 = sqrt(num2);
        printf("\nRaiz Quadrada do primeiro numero = %.2f e Raiz Quadrada do segundo numero = %.2f\n", raiz_quad1, raiz_quad2);
    }
    else if (opcao == 3){ //Raiz cúbica de cada um dos números.
        raiz_cubo1 = pow(num1, 1.0/3.0);
        raiz_cubo2 = pow(num2, 1.0/3.0);
        printf("\nRaiz Cubica do primeiro numero = %.2f e Raiz Cubica do segundo numero = %.2f\n", raiz_cubo1, raiz_cubo2);
    }
    else{
        printf("\nOpcao Invalida.\n");
    }

    return 0;

}
