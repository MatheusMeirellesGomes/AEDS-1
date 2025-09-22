#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis. 
    int num_termos, num1 = 2, num2 = 7, num3 = 3, i = 4; //i começa com 4 porque já foram impresos 3 números antes dele.

    //Ler a quantidade de termos do programa. 
    printf("Quantos termos: "); 
    scanf("%d", &num_termos);

    //Escrever números para ficar na ordem correta ao imprimir. 
    printf("\n%d - %d  - %d", num1, num2, num3); //Valores iniciais da sequência. 

    while (i != num_termos){ //Só vai rodar enquanto quando o número de termos (i), não for igual ao total pedido. 
        num1 *= 2; //num1 é multiplicado por dois, e passa a ter outro valor. 
        printf("%d", num1); 
        i++; //Cada vez que um número é impresso, i é incrementado

        if (i != num_termos){ //Só vai executar se ainda não tiver chegado no limite. 
            num2 *= 3; //num2 é multiplicado por 3 e passa a ter novo valor. 
            printf("%d", num2); 
            i++; //Cada vez que um número é impresso i é incrementado. 
        }
        
        if (i != num_termos){ //Só vai executar se ainda não tiver chegado no limite do número de termos. 
            num3 *= 4; //num3 é multiplicado por 4 e passa a ter novo valor. 
            printf("%d", num3); 
            i++; //Cada vez que um número é imresso i é incrementado. 
        }
    }
}