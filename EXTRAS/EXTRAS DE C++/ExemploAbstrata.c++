#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Criar uma classe abstrata chamada Figura.
class Figura
{
    //Atributo privado. 
    private:
        int lado;

    //Atributos públicos. 
    public:
        Figura()
        {
            setLado(1);
        }
        Figura (int novo)
        {
            setLado(novo);
        }
        void setLado (int val)
        {
            if (val > 0) lado = val;
            else
                cout << "ERRO - Lado tem que ser positivo" << endl;
        }
        int getLado() { return lado; }
        void exibir()
        {
            cout << "Lado: " << getLado() << endl;
        }
        virtual int calculaPerimetro(){}
        virtual float calculaArea(){}
};

class Quadrado : public Figura
{
    public:
        Quadrado() // play Figura()
        {
        }
        Quadrado (int val)
        {
            setLado(val);
        }
        int calculaPerimetro() override
        {
            return 4*getLado();
        }
        float calculaArea() override
        {
            return getLado()*getLado();
        }
};

class Triangulo : public Figura
{
    private:
        float altura;
    public:
        Triangulo() // play Figura()
        {
            setAltura();
        }
        Triangulo(int nLado) : Figura(nLado)
        {
            setAltura();
        }
        float getAltura() { return altura; }
        void exibir()
        {
            Figura::exibir();
            cout << fixed << setprecision(2) <<
             "Altura: " << getAltura() << endl;
        }
        int calculaPerimetro() override
        {
            return 3*getLado();
        }
        float calculaArea() override
        {
            return getLado()*getAltura()/2;
        }
    private:
        void setAltura()
        {
            altura = getLado()*sqrt(3)/2;
        }
};

int main()
{
    Quadrado q1, q2(5);
    Triangulo t1, t2(5);

    q1.exibir();
    q2.exibir();
    t1.exibir();
    t2.exibir();

    return 0;
}
