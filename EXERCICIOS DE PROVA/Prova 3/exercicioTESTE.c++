#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

//Criar uma classe Produto com atributos privadoos e públicos. 
class Produto {
    private: 
        //Atributos privados.
        string nome; 
        float preco; 
    
    //Atributos públicos.
    public: 
        //Construtor padrão sem parâmetros. 
        Produto() {
            //Inicializar os atributos com os valores padrão. 
            setNome("Produto padrao"); 
            setPreco(0.0); 
        }

        //Construtor com parâmetros para nome e preço. 
        Produto (string nome_produto, float preco_produto) {
            //Inicializar os atributos com os valores fornecidos. 
            setNome(nome_produto); 
            setPreco(preco_produto); 
        }

        //Procedimento para preencher os dados do produto.
        void preencher (string nome_produto, float preco_produto) {
            //Usar os sets para inicializar os atributos com os valores fornecidos. 
            setNome(nome_produto); 
            setPreco(preco_produto); 
        }

        //Procedimento para setar o nome do produto. 
        void setNome (string nome_produto) {
            try {
                //Verificar se o nome do produto tem mais de 2 caracteres. 
                if (nome_produto.length() >= 2) {
                    nome = nome_produto;
                }
                catch (exception &exc) { 
                    //Usar cerr para exibir a mensagem de erro. 
                    cerr << "Erro: " << exc.what() << endl; 
                }
            }
        }

        string getNome() {
            return nome; 
        }

        //Procedimento para setar o preço do produto.
        void setPreco (float preco_produto) {
            try {
                //Verificar se o preço é maior que 0. 
                if (preco_produto > 0) {
                    preco = preco_produto;
                }
            }
            catch (exception &exc) { 
                //Usar cerr para exibir a mensagem de erro. 
                cerr << "Erro: " << exc.what() << endl; 
            }
        }

        float getPreco() {
            return preco; 
        }

        //Procedimento para calcular o desconto do produto. 
        float aplicarDesconto (float percentual) {
            //Calcular o valor do desconto. 
            preco -= (preco * (percentual / 100));
        }

        //Procedimento para exibir as informações do produto. 
        void exibir() {
            cout << "Nome do Produto: " << nome << endl; 
            cout << "Preco do Produto: R$ " << preco << endl; 
        }
};

//Criar uma classe que Perecivel que herda da classe Produto com data de validade, peso como atributos. Usando construtor padrão e com parâmetros. 
class Perecivel : public Produto {
    private: 
        //Atributos privados. 
        string dataValidade; 
        float peso; 

    public: 
        //Construtor padrão.
        Perecivel() : Produto() { 
            //Inicializar os atributos com valores padrão. 
            setDataValidade("01/01/2024"); 
            setPeso(0.0);
        }

        //Construtor com parâmetros para nome, preço, data de validade e peso. 
        //Necessário inicializar produto e preço também, porque são atributos da classe base. 
        Perecivel (string nProduto, float nPreco, string dataVal, float novoPeso) : Produto(nProduto, nPreco) {
            //Inicializar os atributos com os valores fornecidos, apenas os atributos desta classe Perecivel.
            try {
                setDataValidade(dataVal); 
                setPeso(novoPeso);
            }
            catch (invalid_argument &exc1) {
                cerr << "Erro: " << exc1.what() << endl;
            }
            catch (logic_error &exc2) {
                cerr << "Erro: " << exc2.what() << endl;
            }
        }   

        //Procedimento para setar a data de validade. 
        void setDataValidade (string dataVal) {
            //Verificar se a data de validade tem mais de 10 caracteres. 
            if (dataVal.length() >= 10) {
                dataValidade = dataVal; 
            }
            else {
                throw invalid_argument("Data de validade invalida! Deve ter pelo menos 10 caracteres.");
            }
        }

        string getDataValidade() {
            return dataValidade; 
        }

        //Procedimento para setar o peso. 
        void setPeso (float novoPeso) {
            //Verificar se o peso é maior que 0. 
            if (novoPeso > 0) {
                peso = novoPeso; 
            }
            else {
                throw logic_error("Peso invalido! Deve ser maior que 0.");
            }
        }

        float getPeso() {
            return peso; 
        }

        //Procedimento para preencher os dados do produto perecível. 
        void preencher() {
            //Inicializar variáveis para receber os dados do produto perecível. 
            string nome_produto, data_validade; 
            float preco_produto, peso_produto; 

            //Solicitar ao usuário o nome do produto. 
            cin.ignore(); //Limpar o buffer do teclado.
            cout << "Digite o nome do produto perecivel: "; 
            getline(cin, nome_produto); 

            //Solicitar ao usuário o preço do produto. 
            cout << "Digite o preco do produto perecivel: R$ "; 
            cin >> preco_produto;

            //Chamar o procedimento preencher da classe base Produto para inicializar nome e preço.
            Produto :: preencher(nome_produto, preco_produto);  //Vai conferir de acordo com o que tem em cada set da classe Produto.

            //Solicitar ao usuário a data de validade do produto. 
            cin.ignore(); //Limpar o buffer do teclado.
            cout << "Digite a data de validade do produto: ";
            getline(cin, data_validade); 

            //Solicitar ao usuário o peso do produto. 
            cout << "Digite o peso do produto: ";
            cin >> peso_produto;

            //Inicializar os sets desta classe Perecivel.
            setDataValidade(data_validade); 
            setPeso(peso_produto);
        }

        //Procedimento para exibir as informações do produto perecível. 
        void exibir() {
            //Chamar o procedimento exibir da classe base Produto para exibir nome e preço.
            Produto :: exibir(); 

            //Exibir os atributos desta classe Perecivel.
            cout << "Data de Validade: " << dataValidade << endl; 
            cout << "Peso: " << peso << " kg" << endl;
        }
 };

 //Função principal.
 int main() 
 {
    //Criar um vetor com 15 objetos da classe Perecivel que herda da classe Produto.
    Perecivel produtos[15]; 

    //Para cada objeto no vetor, chamar o procedimento preencher para receber os dados do produto perecível. 
    for (int i = 0; i < 15; i++) {
        cout << "Preenchendo dados do produto perecivel " << (i + 1) << ":" << endl; 
        //Neste caso vai acionar o preencher da classe Perecivel e dentro dele chama o preencher da classe Produto.
        produtos[i].preencher(); 
        cout << endl; 
    }

    //Para cada objeto no vetor, chamar o procedimento exibir para mostrar os dados do produto perecível. 
    for (int i = 0; i < 15; i++) {
        cout << "Dados do produto perecivel " << (i + 1) << ":" << endl; 
        produtos[i].exibir(); 
        cout << endl; 
    }

    return 0;
 }
