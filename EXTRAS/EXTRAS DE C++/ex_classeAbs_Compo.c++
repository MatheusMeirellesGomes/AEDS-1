#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Exemplo de exercício que vai usar classe abstrata e composição em c++.

//Primeiro criar uma classe abstrata chamada Figura.
class Figura {
    private:
        int lado;

    public:
        Figura () {
            setLado(1);
        }

        //Construtor com parâmetro.
        Figura (int novo) {
            //Usar o setter para validar o valor do lado.
            setLado(novo);
        }

        //Procedimento para definir o valor do lado.
        void setLado (int val) {
            if (val > 0) { //Se o valor do lado for maior que 0, pode definir.
                lado = val;
            }
            else {
                cout << "ERRO: Valor do lado invalido" << endl;
            }
        }

        int getLado() {
            return lado;
        }

        void exibir () {
            cout << "Lado: " << lado << endl; //Informar o valor do lado.
        }

        //Forma abstrata para calcular a área.
        virtual int calculaPerimetro(){};
        virtual float calculaArea(){};
};

//Agora criar a classe Quadrado que herda da classe Figura.
class Quadrado : public Figura {
    public:
        //Construtor padrão.
        Quadrado () {

        }

        //Construtor com parâmetro.
        Quadrado (int val) {
            setLado (val);
        }

        //Implementar a forma abstrata para calcular a área.
        int calculaPerimetro() override {
            return 4 * getLado(); //O perímetro é 4 vezes os valores de cada lado retornado pelo getter.
        }

        float calculaArea() override {
            return getLado() * getLado(); //A área é o lado vezes lado, retornado pelo getter.
        }

};

//Criar classe Triangulo que herda da classe Figura.
class Triangulo : public Figura {
    //Atributo novo para armazenar a altura do triângulo.
    private:
        float altura;

    //Atributos públicos.
    public:
        //Construtor padrão.
        Triangulo() {
            setAltura(sqrt(3) / 2);
        }

        //Construtor com parâmetro.
        Triangulo (int nLado, float nAltura) : Figura (nLado) { //O lado vai ser "setado", pela classe base Figura.
            //Como é um atributo novo, definir a altura aqui.
            setAltura(nAltura);
        }

        //Procedimento para definir a altura.
        void setAltura (float val) {
            if (val > 0) { //Se o valor da altura for maior que 0, pode definir.
                altura = val;
            }
            else {
                cout << "ERRO: Valor da altura invalido" << endl;
            }
        }

        float getAltura() {
            return altura;
        }

        //Implementar a forma abstrata para calcular a área.
        float calculaArea() override {
            return (getLado() * altura) / 2; //A área é (base * altura) / 2, onde a base é o lado retornado pelo getter.
        }

        //Implementar a forma abstrata para calcular o perímetro.
        int calculaPerimetro() override {
            return 3 * getLado(); //O perímetro é 3 vezes os valores de cada lado retornado pelo getter.
        }

        //Exibir os dados do triângulo.
        void exibir() {
           Figura :: exibir(); //Chamar o método exibir da classe base Figura.

           cout << fixed << setprecision(2); //Definir a precisão para 2 casas decimais.
           cout << "Altura: " << altura << endl; //Informar o valor da altura.
        }
};

int main()
{
    //Inicializar um objeto da classe Quadrado.
    Quadrado q1, q2(5);

    //Inicializar um objeto da classe Triangulo.
    Triangulo t1, t2(5, 4.33);

    //Exibir os dados do quadrado.
    q1.exibir();
    q2.exibir();

    //Exibir os dados do triângulo.
    t1.exibir();
    t2.exibir();

    return 0;
}