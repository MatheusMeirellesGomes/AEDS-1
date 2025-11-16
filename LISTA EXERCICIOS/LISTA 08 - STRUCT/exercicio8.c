#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Struct para armazenar informações da moto.
typedef struct {
    float consumo;//km por litro
    float tanque; //capacidade em litros
    float autonomia;//km com tanque cheio
} Moto;

//Procedimento para calcular a autonomia da moto.
void calcularAutonomia(Moto *m) { //Recebendo ponteiro para Moto
    m->autonomia = m->consumo * m->tanque;//Autonomia é consumo multiplicado pela capacidade do tanque.
}

//Função para calcular quantas paradas são necessárias para uma dada distância.
int calcularParadas(Moto m, int distancia) {
    //Verificar se a moto consegue percorrer a distância sem parar.
    if (distancia <= m.autonomia) { //Se a distância for menor ou igual à autonomia.
        return 0; //Nenhuma parada necessária.
    }
    
    //Iniciar contadores.
    int paradas = 0;
    float distanciaRestante = distancia;
    
    //Calcular quantas paradas são necessárias.
    while (distanciaRestante > m.autonomia) { //Enquanto a distância restante for maior que a autonomia.
        distanciaRestante -= m.autonomia; //Reduzir a distância restante pela autonomia.
        paradas++; //Incrementar o contador de paradas.
    }
    
    //Retornar o número total de paradas necessárias.
    return paradas; 
}

int main() 
{
    //Inicializar Variáveis.
    Moto moto;      
    int distancia;
    
    //Gerar distância aleatória
    srand((unsigned)time(NULL)); //Inicializar gerador de números aleatórios
    distancia = rand() % 101;  // 0 a 100 km
    
    //Exibir distância gerada
    printf("Distancia gerada: %d km\n", distancia);
    
    //Ler dados da moto 
    printf("Consumo (km/litro): ");
    scanf("%f", &moto.consumo);
    
    printf("Capacidade do tanque (litros): ");
    scanf("%f", &moto.tanque);
    
    //Acionar procedimento para calcular autonomia usando ponteiro
    calcularAutonomia(&moto);
    
    //Imprimir autonomia calculada
    printf("Autonomia: %.2f km\n", moto.autonomia);
    
    //Acionar função para calcular paradas necessárias
    int paradas = calcularParadas(moto, distancia);
    
    //Exibir resultado do cálculo da função
    if (paradas == 0) {
        printf("A moto nao precisa parar para abastecer\n");
    } else {
        printf("A moto precisa parar %d vezes para abastecer\n", paradas);
    }
    
    return 0;
}