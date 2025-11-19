#include <iostream>
using namespace std;

class Aluno
{
    private:
        string nome;
        int idade;
        float altura;
    public:
        Aluno ()
        {
            /*
            setNome("nenhum");
            setIdade(6);
            setAltura(1.00);
            */

            inicializaTudo("nenhum",6,1);
        }


        void inicializaTudo(string nNome, int nIdade, float nAltura)
        {
            setNome(nNome);
            setIdade(nIdade);
            setAltura(nAltura);
        }


        void setNome(string novo)
        {
            if (novo.length() > 2) //Mesma coisa que strlen(novo), que basicamente conta quantos caracteres tem na string. 
                nome = novo;
            else cout << "ERRO - Nome tem que ser acima de 2 caracteres" << endl;
        }
        string getNome()
        {
            return nome;
        }
        void setIdade (int nova)
        {
            if (nova > 5) idade = nova;
            else cout << "ERRO - Idade acima de 5 anos" << endl;
        }
        int getIdade()
        {
            return idade;
        }
        void setAltura (float nova)
        {
            if (nova > 0) altura = nova;
            else cout << "ERRO - Altura invalida" << endl;
        }
        float getAltura()
        {
            return altura;
        }
        void exibir()
        {
            cout << "Nome: " << nome << endl << "Idade: " << idade
                 << " anos" << endl << "Altura: " << altura << "m" << endl; //endl é a mesma coisa que \n, caso queira usar \n, tem que usar "\n" (entre parênteses); 
        }
};

int main()
{
    Aluno objeto;

    objeto.exibir();

    string novoNome;
    int novaIdade;
    float novaAltura;

    cout << "Digite o nome: "; //printf 
    getline(cin,novoNome); // scanf. Não usar apenas cin, porque o cin lê até o primeiro espaço em branco. 
    cout << "Digite a idade e a altura: ";
    cin >> novaIdade >> novaAltura; //Como é inteiro e float, pode usar cin, normalmente, porque equivale ao uso do scanf. 

    objeto.inicializaTudo(novoNome,novaIdade,novaAltura);

    cout << "Digitou " << endl;
    objeto.exibir();

    return 0;
}
