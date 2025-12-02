#include <iostream>
#include <string>
using namespace std;
/*A PUC Minas Praça da Liberdade decidiu modernizar seus elevadores, e você foi designado para desenvolver um sistema de controle para os dois elevadores que 
estarão em operação. Sua tarefa é implementar a classe Elevador e criar um programa principal (main) que utiliza as funcionalidades desses elevadores.
Especificações:
Implemente a classe Elevador com os seguintes atributos privados: andarAtual: o andar atual do elevador. totalAndares: o total de andares no prédio da PUC Minas Praça
capacidade: a capacidade máxima de pessoas no elevador. pessoasPresentes: o número atual de pessoas no elevador. A classe deve ter um construtor padrão e um 
construtor que recebe a capacidade e o total de andares como parâmetros. Implemente o método inicializa que recebe a capacidade e o total de andares como parâme-
tros e inicializa os atributos do elevador. Implemente os métodos entra e sai para simular a entrada e saída de pessoas do elevador, respectivamente. 
Lembre-se de verificar se há espaço ou pessoas suficientes para realizar a operação. Implemente os métodos sobe e desce para simular o movimento do elevador 
para cima e para baixo, respectivamente. Certifique-se de que o elevador não ultrapasse os limites do prédio. Implemente métodos de acesso 
(getAndarAtual, getTotalAndares, getCapacidade, getPessoasPresentes) para obter informações sobre o estado atual do elevador.
Programa Principal:
O programa principal deve realizar o seguinte: Solicitar ao usuário a capacidade do elevador e o total de andares do prédio da PUC Minas Praça da Liberdade.
Criar dois objetos Elevador com base nas informações fornecidas e inicializar os elevadores. Solicitar ao usuário a quantidade de ações a serem simuladas.
Para cada ação, solicitar ao usuário a operação desejada (entrar, sair, subir, descer) e executar a operação correspondente em um dos elevadores.
Após cada ação, imprimir o andar atual e o número de pessoas presentes no elevador correspondente.
Observação: Por favor, faça o codigo de forma descente para que o elevador do meio pare de travar toda hora.
*/

//Primeiro criar a classe Elevador com os atributos privados. 
class Elevador {
    private: 
        //Atributos privados. 
        int andarAtual; //Andar atual do elevador.
        int totalAndares; //Total de andares do prédio.
        int capacidadeMax; //Capacidade máxima de pessoas no elevador. 
        int pessoasPresentes; //Número atual de pessoas no elevador. 

    //Atributos públicsos. 
    public: 
        //Construtor padrão. 
        Elevador() {
            //Usar os sets para inicializar os atributos, com valores que podem ser alterados depois.  
            setAndarAtual(0); //Iniciar no térreo.
            setTotalAndares(10); //Número padrão de andares.
            setCapacidadeMax(8); //Capacidade padrão de 8 pessoas.
            setPessoasPresentes(0); //Iniciar com 0 pessoas.
        }

        //Construtor com parâmetros para capacidade e total de andares.
        Elevador (int capacidade, int total_andares) {
            inicializa(capacidade, total_andares); //Chamar o método inicializa para inicializar os atributos.
        }

        //Procedimento para inicializar os dados do elevador. 
        void inicializa(int capacidade, int total_andares) {
            setCapacidadeMax(capacidade);
            setTotalAndares(total_andares);
            setAndarAtual(0); //Iniciar no térreo.
            setPessoasPresentes(0); //Iniciar com 0 pessoas.
        }

        //Procedimento para setar o andar atual do elevador. 
        void setAndarAtual (int andar_atual) {
            //Verificar se o andar atual é válido. 
            if (andar_atual >= 0 && andar_atual <= totalAndares) { //Se o andar atual for maio ou igual a 0 (andar inicial) e menor ou igual ao total de andares do prédio...
                andarAtual = andar_atual; //Atribuir o valor ao atributo andarAtual.
            }
            else {
                cout << "Andar invalido!" << endl; 
            }
        }

        int getAndarAtual() {
            return andarAtual; 
        }

        //Procedimento para setar o total de andares do prédio. 
        void setTotalAndares (int total_andares) {
            //Verificar se o total de andares é válido. 
            if (total_andares > 0) { //Se o total de andares for maior que 0...
                totalAndares = total_andares; //Atribuir o valor ao atributo totalAndares.
            }
            else {
                cout << "Total de andares invalido!" << endl; 
            }
        }

        int getTotalAndares() {
            return totalAndares; 
        }

        //Procedimento para setar a capacidade máxima do elevador. 
        void setCapacidadeMax (int capacidade_max) {
            //Verificar se a capacidade máxima é válido. 
            if (capacidade_max > 0) { //Se a capacidade máxima for maior que 0...
                capacidadeMax = capacidade_max; //Atribuir o valor ao atributo capacidadeMax.
            }
            else {
                cout << "Capacidade maxima invalida!" << endl; 
            }
        }

        int getCapacidade() {
            return capacidadeMax; 
        }

        //Procedimento para setar o número de pessoas presentes no elevador. 
        void setPessoasPresentes (int pessoas_presentes) {
            //Verificar se o número de pessoas presentes é válido. 
            if (pessoas_presentes >= 0 && pessoas_presentes <= capacidadeMax) { //Se o número de pessoas presentes for maior ou igual a 0 e menor ou igual a capacidade máxima...
                pessoasPresentes = pessoas_presentes; //Atribuir o valor ao atributo pessoasPresentes.
            }
            else {
                cout << "Numero de pessoas presente invalido!" << endl; 
            }
        }

        int getPessoasPresentes () {
            return pessoasPresentes; 
        }

        //Procedimento para simular a entrada de uma pessoa no elevador. 
        void entra() {
            //Verificar se há espaço no elevador. 
            if (pessoasPresentes < capacidadeMax) { //Se o número de pessoas presentes for menor que a capacidade máxima...
                pessoasPresentes++; //Adicionar uma pessoa ao elevador.
            }
            else {
                cout << "Elevador cheio! Nao e possivel entrar mais pessoas." << endl; 
            }
        }

        //Procedimento para simular a saída de uma pessoa do elevador. 
        void sai() {
            //Verificar se há pessoas no elevador. 
            if (pessoasPresentes > 0) { //Se o número de pessoas presentes for maior que 0...
                pessoasPresentes--; //Remover uma pessoa do elevador.
            }
            else {
                cout << "Elevador vazio! Nao ha pessoas para sair." << endl; 
            }
        }

        //Procedimento para simular o movimento do elevador para cima. 
        void sobe() {
            //Verificar se o elevador pode subir. 
            if (andarAtual < totalAndares) { //Se o andar atual for menor que o total de andares...
                andarAtual++; //Subir um andar.
                cout << "Elevador subiu para o andar " << andarAtual << "." << endl;
            }
            else {
                cout << "Elevador ja esta no ultimo andar!" << endl; 
            }
        }

        //Procedimento para simular o movimento do elevador para baixo. 
        void desce() {
            //Verificar se o elevador pode descer. 
            if (andarAtual > 0) { //Se o andar atual for maior que 0...
                andarAtual--; //Descer um andar.
                cout << "Elevador desceu para o andar " << andarAtual << "." << endl;
            }
            else {
                cout << "Elevador ja esta no terreo!" << endl; 
            }
        }

        //Procedimento para exibir as informações do elevador. 
        void exibe() {
            cout << "Andar Atual: " << andarAtual << endl;
            cout << "Pessoas presentes no elevador: " << pessoasPresentes << endl; 
        }
}; 

int main()
{
    //Criar dois objetos com vetor para Elevador. 
    Elevador elevadores[2]; 

    //Inicializar variáveis para receber os dados do elevador. 
    int capacidade, total_andares, num_acoes; //Capacidade, total de andares e número de ações. 
    string acao; //Correspondente á ação a ser realizada(entrar, sair, subir, descer). 

    //Solicitar ao usuário a capacidade do elevador e o total de andares do prédio.
    cout << "Digite a capacidade do elevador: "; 
    cin >> capacidade; 

    cout << "Digite o total de andares do predio: "; 
    cin >> total_andares; 

    //Inicializar os dois elevadores com as informações fornecidas. 
    for (int i = 0; i < 2; i++) {
        elevadores[i].inicializa(capacidade, total_andares); 
    }

    //Solicitar ao usuário a quantidade de ações a serem simuladas.
    cout << "Digite a quantidade de acoes a serem simuladas: ";
    cin >> num_acoes;

    //Para cada ação, solicitar ao usuário a operação desejada e executar a operação correspondente em um dos elevadores.
    for (int i = 0; i < num_acoes; i++) {
        int elevador_escolhido; //Variável para escolher o elevador. 

        cout << "Escolha o elevador (0 ou 1): "; 
        cin >> elevador_escolhido; 

        cout << "Digite a acao (entrar, sair, subir, descer): "; 
        cin >> acao; 

        //Executar a ação correspondente no elevador escolhido. 
        if (acao == "entrar") {
            elevadores[elevador_escolhido].entra(); //Seleciona o elevador escolhido e chama o método entra(). 
        }
        else if (acao == "sair") {
            elevadores[elevador_escolhido].sai(); //Seleciona o elevador escolhido e chama o método sai(). 
        }
        else if (acao == "subir") {
            elevadores[elevador_escolhido].sobe(); //Seleciona o elevador escolhido e chama o método sobe(). 
        }
        else if (acao == "descer") {
            elevadores[elevador_escolhido].desce(); //Seleciona o elevador escolhido e chama o método desce(). 
        }
        else {
            cout << "Acao invalida!" << endl; 
        }

        //Após cada ação, imprimir o andar atual e o número de pessoas presentes no elevador correspondente.
        cout << endl << "Estado atual do elevador " << elevador_escolhido << ":" << endl;
        elevadores[elevador_escolhido].exibe();
    }

    return 0; 
}