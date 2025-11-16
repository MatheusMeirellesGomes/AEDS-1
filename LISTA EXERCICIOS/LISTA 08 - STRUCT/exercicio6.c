#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Struct para armazenar informações de um ponto no plano cartesiano.
typedef struct {
    int x;
    int y;
} Ponto;

int main() 
{
    //Inicializar variáveis.
    int n; 
    
    //Ler a quantidade de conjuntos de pontos a serem processados.
    printf("Quantidade de conjuntos: ");
    scanf("%d", &n);
    
    //Processar cada conjunto de pontos
    for (int i = 0; i < n; i++) {
        //Declarar variáveis para os 3 pontos. 
        Ponto A, B, C;
        
        //Ler as coordenadas dos 3 pontos.
        scanf("%d %d", &A.x, &A.y);
        scanf("%d %d", &B.x, &B.y);
        scanf("%d %d", &C.x, &C.y);
        
        //Inicializar contadores de alinhamentos.
        int verticais = 0;
        int horizontais = 0;
        
        //Verificar alinhamento A - B. 
        if (A.x == B.x) { //Se as coordenadas X forem iguais. 
            verticais++;  //Alinhamento vertical
        }
        if (A.y == B.y) { //Se as coordenadas y forem iguais. 
            horizontais++;  //Alinhamento horizontal
        }
        
        //Verificar alinhamento A - C
        if (A.x == C.x) { //Se as coordenadas X forem iguais. 
            verticais++;
        }
        if (A.y == C.y) { //Se as coordenadas y forem iguais. 
            horizontais++;
        }
        
        //Verificar alinhamento B - C
        if (B.x == C.x) { //Se as coordenadas X forem iguais. 
            verticais++;
        }
        if (B.y == C.y) { //Se as coordenadas y forem iguais. 
            horizontais++;
        }
        
        //Exibir resultados
        if (verticais == 0) {
            printf("Nao ha alinhamentos verticais\n");
        } else {
            printf("alinhamentos verticais: %d\n", verticais);
        }
        
        if (horizontais == 0) {
            printf("Nao ha alinhamentos horizontais\n");
        } else {
            printf("alinhamentos horizontais: %d\n", horizontais);
        }
    }
    
    return 0;
}