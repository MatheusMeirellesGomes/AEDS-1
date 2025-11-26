#include <iostream>
using namespace std;
//Você está desenvolvendo um sistema de controle de combustível para uma frota de carros. Cada carro é representado por um objeto da classe Carro, que possui 
//características como capacidade do tanque, consumo de combustível, quantidade atual de combustível e distância percorrida. A classe Carro também possui 
//atributos para abastecer e mover o carro, atualizando a quantidade de combustível e a distância percorrida, respectivamente.
//Sua tarefa é receber informações sobre dois carros e simular o movimento de cada um deles. Para cada carro, você deve ler o combustível inicial e a 
//distância que será percorrida. Após a simulação, você deve imprimir a distância total percorrida e a quantidade de combustível restante para cada carro.
//A entrada contém as seguintes informações:
//Um número inteiro representando o combustível inicial do Carro 1.
//Um número inteiro representando o combustível inicial do Carro 2.
//Um número inteiro representando a distância que o Carro 1 irá percorrer.
//Um número inteiro representando a distância que o Carro 2 irá percorrer
//Considere que as capacidades dos tanques dos carros são 50 litros e que o consumo de combustível é o mesmo para ambos, 15 km/l.

//Primeiro criar um classe chamada Carro. 
class Carro {
    //atributos privados. 
    private: 
        int capacidadeTanque; 
        int consumoCombustivel;
        int qntdCombustivel; 
        int distanciaPercorrida;

    //Atributos públicos. 
    public: 
        //Construtor padrão. 
        Carro() {  //Construtor sem parâmetros que vai ter os valores padrão, conforme o enunciado. 
            capacidadeTanque = 50; 
            consumoCombustivel = 15; 
            qntdCombustivel = 0; //Quantidade atual de combustível começa com 0. 
            distanciaPercorrida = 0; //Até agora não percorreu nada.
        }

        //Procedimento para abastecer o carro. 
        void setAbastecer (int litros) {
            //Verificar se a quantidade de litros a ser abastecida é válida. 
            if (litros > 0 && (qntdCombustivel + litros) <= capacidadeTanque) { //Se a quantidade de litros for maior que 0 e a soma da quantidade 
                //atual com os litros a serem abastecidos for menor ou igual à capacidade do tanque, pode abastecer.
                qntdCombustivel += litros; //Atualizar a quantidade de combustível no tanque.
            }

            else {
                cout << "ERRO: Quantidade de litros invalida" << endl;
            }
        }

        //Função para retornar a quantidade atual de combustível.
        int getQntdCombustivel() {
            return qntdCombustivel;
        }

        //Procedimento para mover o carro. 
        void setMover (int distancia) {
            //Calcular o combustível necessário para percorrer a distância. 
            int qntd_necessaria = distancia / consumoCombustivel; //Consumo de combustível é em km/l, então dividir a distância 
            //pelo consumo para obter a quantidade necessária. 

            //Verificar se há combustível suficiente para percorrer a distância.
            if (qntd_necessaria <= qntdCombustivel) { //Se a quantidade necessária for menor ou igual à quantidade atual de combustível, pode mover.
                distanciaPercorrida += distancia; //Atualizar a distância percorrida.
                qntdCombustivel -= qntd_necessaria; //Atualizar a quantidade de combustível restante.
            }

            else {
                cout << "ERRO: Combustivel insuficiente para percorrer a distancia" << endl;
            }
        }

        //Função para retornar a distância percorrida. 
        int getDistanciaPercorrida() {
            return distanciaPercorrida;
        }

        //Exibir o status do carro.
        void exibir() {
            //Imprimir a distânica percorrida e a quantidade de combustível restante. 
            cout << "Distancia Percorrida: " << getDistanciaPercorrida() << "km" << endl;
            cout << "Combustivel Restante: " << getQntdCombustivel() << " litros" << endl;
        }
}; 

int main() 
{
    //Criar um vetor dinâmico de dois objetos da classe carro que representam os dois carros da frota.
    Carro *carros = new Carro[2];

    //Variáveis para armazenar o combustível inicial e a distância a ser percorrida.
   int combustivel_inicial[2];
   int distancia_percorrida[2];

    //Receber informações dos dois carros. 
    for (int cont = 0; cont < 2; cont++) {
        //Receber o combustível inicial. 
        cout << "Digite o combustivel inicial do Carro " << (cont + 1) << ": "; 
        cin >> combustivel_inicial[cont]; //Está se referinfo ao carro 1 e carro 2, índices 0 e 1 do vetor. 

        //Abastecer o carro com o combustível inicial.
        carros[cont].setAbastecer(combustivel_inicial[cont]);

        //Receber a distânicia a ser percorrida de cada carro. 
        cout << endl << "Digite a distancia que o Carro " << (cont + 1) << " vai percorrer (em km): ";
        cin >> distancia_percorrida[cont]; //Está se referinfo ao carro 1 e carro 2, índices 0 e 1 do vetor.

        //Mover o carro pela distância informada.
        carros[cont].setMover(distancia_percorrida[cont]);

        cout << endl; //Linha em branco para melhor visualização.

        //Exibir o status do carro após o movimento. 
        cout << "Status do Carro " << (cont + 1) << ":" << endl;
        carros[cont].exibir();
    }

    //LIberar a memória alocada para o vetor de carros.
    delete[] carros; 

    return 0; 
}