#include <stdio.h>
#include <stdlib.h>
//Fazer a função recebendo a idade de um nadador por parâmetro e retorna a categoria desse nadador.
char categoriaNadador(int idade)
{
    //Verificar a idade para retornar a categoria do nadador.
    if (idade >= 5 && idade <= 7){
       return 'F';
    }
    else if (idade > 7 && idade <= 10){
        return 'E';
    }
    else if (idade > 10 && idade <= 13){
        return 'D';
    }
    else if (idade > 13 && idade <= 15){
        return 'C';
    }
    else if (idade > 15 && idade <= 17){
        return 'B';
    }
    else if (idade >= 18){
        return 'A'; //Apenas retorna a letra da categoria na função feita.
    }
}
int main()
{
    //Inicializar Variáveis.
    int idade;

    //Receber idade do nadador.
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    //Acionar função passando a idade do nadador.
    printf("\nCategoria %c\n", categoriaNadador(idade)); //Vai mostrar a categoria, acionando o que está retornando dentro da função.

    return 0;
}
