#include <iostream>
using namespace std;
//Você está desenvolvendo um programa para armazenar e exibir dados pessoais. Cada pessoa é representada por um objeto da classe Pessoa, que possui atributos 
//como nome, idade e altura. Seu programa deve ser capaz de receber um número inteiro N e, em seguida, ler os dados de N pessoas. 
//Após a leitura, deve imprimir os dados de cada pessoa.

//Primeiro criar um classe chamada pessoa. 
class Pessoa {
    //Definir atrbutos privados (informaçõees da pessoa). 
    private: 
        string nome; 
        int idade; 
        float altura; 
    
    //Definir métodos públicos (funções e procedimentos para manipular os atributos). 
    public: 
        //Procedimento para alterar o nome da pessoa. 
        void setNome(string novo_Nome) {
            //Verificar se o nome tem mais de 2 caracteres. 
            if (novo_Nome.length() > 2) {
                nome = novo_Nome; //O nome (dado privado) recebe o novo nome (parâmetro do procedimento, informado pelo usuário). 
            }

            else {
                cout << "ERRO: Nome tem que ser acima de 2 caracteres" << endl;
            }
        }

        //Função para retornar o nome da pessoa. 
        string getNome () {
            return nome; //Retornar o nome (dado privado). 
        }

        //Procedimento para alterar a idade da pessoa. 
        void setIdade (int nova_Idade) {
            //Verificar se a idade é maior que 0. 
            if (nova_Idade > 0) {
                idade = nova_Idade; //Se a nova idade informada for maior que 0, atualizar a idade (dado privado).
            }

            else {
                cout << "ERRO: Idade invalida" << endl;
            }
        }

        //Função para retornar a idade da pessoa. 
        int getIdade () { 
            return idade; //Retornar a idade (dado privado).
        }

        //Procedimento para alterar a altura da pessoa. 
        void setAltura (float nova_Altura) {
            //Verificar se a altura é maior que 0. 
            if (nova_Altura > 0) {
                altura = nova_Altura; //Se a nova altura informada for maior que 0, atualizar a altura (dado privado).
            }

            else {
                cout << "ERRO: Altura invalida" << endl;
            }
        }

        //Função para retornar a altura da pessoa.
        float getAltura() {
            return altura; //Retornar a altura (dado privado).
        }

        //Procedimento para inicializar os dados da pessoa. 
        void inicializa (string nNome, int nIdade, float nAltura) {
            //Inicializar os atributos usando os sets para validar os dados retornados. 
            setNome(nNome); //Vai acionar o procedimento setNome para inicializar o nome com o novo nome informado.
            setIdade(nIdade); //Vai acionar o procedimento setIdade para inicializar a idade com a nova idade informada.
            setAltura(nAltura); //Vai acionar o procedimento setAltura para inicializar a altura com a nova altura informada. 
        }

        void exibir() {
            //Imprimir os dados da pessoa. 
            cout << "Nome: " << getNome() <<endl; 
            cout << "Idade: " <<getIdade() << endl; 
            cout << "Altura: " << getAltura() << endl;
        }
};

//Função principal do programa para receber e exibir os dados das pessoas.
int main () 
{
    //Inicializar variável para receber o número de pessoas. 
    int N; 

    //Acionar classe pessoa para criar objetos.
    Pessoa pessoas; 

    //Receber o número de pessoas. 
    printf("Informe o numero de pessoas: "); 
    scanf("%d", &N); 

    //Alocar dinamicamente um vetor de objetos da classe Pessoa com N posições.
    Pessoa *pessoas = new Pessoa[N]; //Forma de alocação dinâmica em c++, mesma coisa que malloc em c. 

    //Variáveis para receber os dados das pessoas. 
    string novoNome; 
    int novaIdade; 
    float novaAltura; 

    //Laço para receber os dados das N pessoas. 
    for (int cont = 0; cont < N; cont++) {
        //Limpar o buffer do teclado antes de ler uma string com espaços.
        fflush(stdin); //Apenas antes de ler uma string com espaços.

        //Receber as informações do usuário. 
        cout << Pessoa (cont + 1) << endl; //Imprimir o número da pessoa (cont + 1, porque cont começa do 0).
        cout << "Digite seu nome completo: "; 
        getline (cin, novoNome); //Usar getline para ler strings com espaços.

        cout << "Digite sua idade: "; 
        cin >> novaIdade; 

        cout << "Digite sua altura: "; 
        cin >> novaAAltura;

        //Inicializar os dados das pessoas do vetor. 
        (pessoas + cont)->inicializa(novoNome, novaIdade, novaAltura); //Necessário inicializar dessa forma para cada posição do vetor dinâmico. 
        //Mesma coisa que: pessoas[cont].inicializa(novoNome, novaIdade, novaAltura);
    }

    //Laço para exibir os dados das N pessoas.
    for (int cont = 0; cont < N; cont++) {
        cout << "Pessoa " << (cont + 1) << endl; //Imprimir o número da pessoa (cont + 1, porque cont começa do 0).
        (pessoas + cont)->exibir(); //Acionar o procedimento exibir para cada posição do vetor dinâmico. 
        //Mesma coisa que: pessoas[cont].exibir();
    }

    //Liberar a memória alocada dinamicamente.
    delete[] pessoas; //Forma de liberar memória em c++ equivalente ao free() em c.


    return 0; 
}