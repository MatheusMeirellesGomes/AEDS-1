#include <stdio.h>

//Struct para armazenar informações de um retângulo.
typedef struct {
    float largura;
    float altura;
    float area;
} Retangulo;

//Procedimento para calcular a área do retângulo.
void calcularArea(Retangulo *r) {
    //Usar -> para acessar membor dos ponteiros de struct. Mesma coisa que r.area (Vetor de struct). 
    r->area = r->largura * r->altura;
}

int main() 
{
    //Inicializar Variáveis. 
    int n;  
    
    //Ler quantidade de retângulos a serem processados.
    printf("Quantos retangulos? ");
    scanf("%d", &n);
    
    //Processar cada retângulo
    for (int i = 0; i < n; i++) {
        //Declarar variável do tipo Retangulo
        Retangulo ret;
        
        //Ler largura e altura
        printf("Largura: ");
        scanf("%f", &ret.largura);
        
        printf("Altura: ");
        scanf("%f", &ret.altura);
        
        //Chamar função passando o endereço de retângulo. 
        calcularArea(&ret);
        
        //Exibir área calculada. 
        printf("A area do retangulo eh: %.2f\n", ret.area);
    }
    
    return 0;
}