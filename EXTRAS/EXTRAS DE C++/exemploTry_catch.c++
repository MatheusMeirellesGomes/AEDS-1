#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Ponto
{
    private:
        float x, y;
    public:
        Ponto()
        {
            inicializa(0,0);
        }
        Ponto(float nX, float nY)
        {
            inicializa(nX,nY);
        }
        void inicializa(float novoX, float novoY)
        {
            setX(novoX);
            setY(novoY);
        }
        void setX(float val){x = val;}
        float getX () { return x; }
        void setY(float val){y = val;}
        float getY () { return y; }
        void exibir()
        {
            cout << "Coordenadas (" << getX() << ","
            << getY() << ")" << endl;
        }
};

class Figura
{
    private:
        int lado;
    public:
        Figura()
        {
            try {
                setLado(1);
            } catch (const invalid_argument obj1) {
                cout << obj1.what() << endl; //Nome do objeto, com 'o que' deu erro. (what = o que). 
            }
        }
        Figura (int novo)
        {
            try {
                setLado(novo);
            } catch (const invalid_argument obj1) {
                cout << obj1.what() << endl; //Nome do objeto, com 'o que' deu erro. (what = o que). 
            }
        }
        void setLado (int val)
        {
            if (val > 0) lado = val;
            else 
                throw new invalid_argument("ERRO - Lado tem que ser positivo"); //Mesma coisa que cout, mas usando exceção.

                
        }
        int getLado() { return lado; }
        void exibir()
        {
            cout << "Lado: " << getLado() << endl;
        }
        virtual int calculaPerimetro() = 0;  // Método abstrato
        virtual float calculaArea() = 0;      // Método abstrato
};

class Quadrado : public Figura
{
    private:
        Ponto vertices[4];
    public:
        Quadrado() // play Figura()
        {
        }
        Quadrado (int val, Ponto lista[4])
        {
            try {
                setLado(val);
            } catch (const invalid_argument obj1) {
                cout << obj1.what() << endl; //Nome do objeto, com 'o que' deu erro. (what = o que). 
            }
            setVertices(lista);
        }
        int calculaPerimetro() override
        {
            return 4*getLado();
        }
        float calculaArea() override
        {
            return getLado()*getLado();
        }
        Ponto* getVertices() { return vertices; }
        void setVertices (Ponto lista[4])
        {
            for (int pto=0; pto < 4; pto++)
                vertices[pto] = lista[pto];
        }
        void exibir()
        {
            Figura::exibir();
            for (int pto=0; pto < 4; pto++)
                vertices[pto].exibir();
        }
};

class Triangulo : public Figura
{
    private:
        float altura;
        Ponto vertices[3];  // Array de 3 vértices
        
    public:
        Triangulo() // play Figura()
        {
            setAltura();
        }
        
        Triangulo(int nLado) : Figura(nLado)
        {
            setAltura();
        }
        
        // Construtor com vértices
        Triangulo(int val, Ponto lista[3])
        {
            setLado(val);
            setVertices(lista);
            setAltura();
        }
        
        float getAltura() { return altura; }
        
        // Getter para vértices
        Ponto* getVertices() { return vertices; }
        
        // Setter para vértices
        void setVertices(Ponto lista[3])
        {
            for (int pto = 0; pto < 3; pto++)
                vertices[pto] = lista[pto];
        }
        
        void exibir()
        {
            Figura::exibir();
            cout << fixed << setprecision(2) <<
             "Altura: " << getAltura() << endl;
            
            // Exibir os 3 vértices
            for (int pto = 0; pto < 3; pto++)
                vertices[pto].exibir();
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
    // Criar lista de vértices para o quadrado
    Ponto* listaQuadrado = new Ponto[4];
    for(int i = 0; i < 4; i++)
        listaQuadrado[i].inicializa(i, 2*i);
    
    // Criar lista de vértices para o triângulo
    Ponto* listaTriangulo = new Ponto[3];
    for(int i = 0; i < 3; i++)
        listaTriangulo[i].inicializa(i, i+1);
    
    // Criar objetos
    Quadrado q1, q2(5, listaQuadrado);
    Triangulo t1, t2(5), t3(6, listaTriangulo);
    
    // Apenas exibir
    q1.exibir();
    q2.exibir();
    t1.exibir();
    t2.exibir();
    t3.exibir();
    
    // Liberar memória
    delete[] listaQuadrado;
    delete[] listaTriangulo;

    return 0;
}