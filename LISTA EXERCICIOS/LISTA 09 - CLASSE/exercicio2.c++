#include <iostream>
using namespace std;
//Você está desenvolvendo um programa para realizar o controle de tempo em um sistema. Cada operação é marcada com um horário específico, representado por
//um objeto da classe Relogio. A classe Relogio possui métodos para definir o horário, obter o horário formatado e avançar o horário para o próximo segundo.
//Sua tarefa é ler um número inteiro N (1 <= N <= 1000) que representa a quantidade de operações a serem realizadas
//Para cada operação, você deve receber um horário inicial e imprimir o horário após um segundo

//Primeiro criar a classe chamada Relogio.
class Relogio {
    private:
        int horas, minutos, segundos; //Atributos privados da classe Relogio.

    public:
        //Procedimento para definir o horário.
        void definirHorario(int h, int m, int s) {
            horas = h;
            minutos = m;
            segundos = s;
        }

        //procedimento para avançar o horário em um segundo.
        void avancarSegundo() {
            //Adicionar 1 segundo ao horário atual.
            segundos++;

            //Verificar se os segundos ultrapassaram 59.
            if (segundos > 59) { //Se o os segundos forem maiores que 59...
                segundos = 0; //Zerar os segundos para começar uma nova contagem...
                minutos++; //E adicionar 1 minutos ao horário.

                //Verificar se os minutos ultrapassaram 59.
                if (minutos > 59) { //Se os minutos forem maiores que 59...
                    minutos = 0; //Zerar os minutos para começar uma nova contagem...
                    horas++; //Adicionar 1 hora ao horário.

                    //Verificar se as horas ultrapassaram 23.
                    if (horas > 23) { //Se as horas forem maiores que 23...
                        horas = 0; //Zerar as horas para começar uma nova contagem...
                    }
                }
            }
        }

        //Procedimento para exibir hora formatada.
         void exibeHorario() {
            //Imprimir horas
            if (horas < 10) { //Se os horas for menor que 10...
                cout << "0" << horas << ":"; //Imprimir com 0 na frente. Ex: 09:
            }
            else { //Se não, imprimir normalmente.
                cout << horas << ":";  //Ex: 12:
            }

            //Imprimir minutos
            if (minutos < 10) {  //Se os minutos for menor que 10...
                cout << "0" << minutos << ":"; //Imprimir com 0 na frente. Ex: 05:
            }
            else { //Se não, imprimir normalmente.
                cout << minutos << ":"; //Ex: 30:
            }

            //Imprimir segundos
            if (segundos < 10) { //Se os segundos for menor que 10...
                cout << "0" << segundos << endl; //Imprimir com 0 na frente. Ex: 07
            }
            else { //Se não, imprimir normalmente.
                cout << segundos << endl; //Ex: 45
            }
        }
};

//Função principal do programa para receber os horários e exibir o horário após um segundo.
int main()
{
    //Inicializar variável para receber o número de operações.
    int N;

    //Perguntar ao usuário a quantidade de operações.
    cout << "Informe a quantidade de operacoes: ";
    cin >> N;

    //Limpar o buffer do teclado antes de ler os horários.
    fflush (stdin);

    //Criar um objeto da classe Relogio para realizar as operações, alocado dinâmicamente.
    Relogio *relogio = new Relogio();

    //Laço para realizar as N operações.
    for (int i = 0; i < N; i++) {
        //Inicializar variáveis para receber o horário inicial.
        int h, m, s;

        //Receber o horário inicial do usuário.
        cout << endl << "Digite o horario (HH MM SS): ";
        cin >> h >> m >> s;

        //Acionar o procedimento para definir o horário no objeto relogio.
        relogio->definirHorario(h, m, s);

        //Acionar o procedimento para avançar o horário em um segundo.
        relogio->avancarSegundo(); //

        //Melhor visulização,
        cout << endl << "Horario Formatado depois de 1 segundo acrescido:" << endl;

        //Exibir o horário após um segundo.
        relogio->exibeHorario();
    }

    //Limpar a memória alocada
    delete relogio;

    return 0;
}