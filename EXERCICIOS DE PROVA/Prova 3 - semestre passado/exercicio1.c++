/*#include <iostream>
#include <vector>

using namespace std;

class Produto {
private:
    string nome;
    float preco;

public:
    Produto(string n, float p) {
        nome = n;
        preco = p;
    }

    void aplicarDesconto(float percentual) {
        preco -= preco * (percentual / 100);
    }

    void exibir() {
        cout << nome << ": R$ " << preco << endl;
    }
};
*/

/*Letra a: Implemente os métodos acessdores set e get públicos para cada atributo, considerando as seguintes restrições: O nome deve ter mais de 2 caracteres
e o preço deve ser maior que zero.
Letra B: Implemente o método público preencher que altera o conteúdo de todos os atributos, sendo que a assinatura dele é indicada a seguir e ele deve
acionar os set de cada atributo: void preencher(string novoNome, float novoPreco);

Letra C: Crie no programa principal um vetor de 15 produtos, cujos dados devem ser preenchidos a partir do teclado. Solicite também se existe algum
produto com desconto pelo teclado e, em caso afirmativo, o número do produto e o percentual de desconto. Considere que mais de um produto pode ter o
desconto informado. No final, exiba os dados atualizados dos produtos.
*/

//Respota Letra A, B e C:
#include <iostream>
#include <vector>

using namespace std;

//Primeiro criar uma classe Produto, com atributos privados e públicos.
class Produto {
private:
    string nome;
    float preco;

public:
    //Construtor padrão.
    Produto() {
        nome = "Produto Desconhecido";
        preco = 0.0;
    }

    //Construtor com parâmetros que vai receber o nome e o preço do produto.
    Produto(string n, float p) {
        nome = n;
        preco = p;
    }

    //Letra A: Set e get com restrições.
    //Definir o nome do produto.
    void setNome (string novoNome) {
        if (novoNome.length() > 2) {
            nome = novoNome;
        }
        else {
            cout << "Nome invalido." << endl;
        }
    }

    string getNome() {
        return nome;
    }

    //Letra A: Set e get com restrições.
    //Definir o preço do produto.
    void setPreco (float novoPreco) {
        if (novoPreco > 0) {
            preco = novoPreco;
        }
        else {
            cout << "Preco invalido." << endl;
        }
    }

    float getPreco() {
        return preco;
    }

    //Letra B: Preencher que usa os sets para alterar os atributos.
    //Esse procedimento serve para alterar o nome e o preço do produto usando os sets.
    void preencher(string novoNome, float novoPreco) {
        setNome(novoNome);
        setPreco(novoPreco);
    }

    //Procedimento para aplicar desconto no preço do produto.
    void aplicarDesconto(float percentual) {
        preco -= preco * (percentual / 100); //Percentual será informado na main pelo usuário.
    }

    //Procedimento para exibir os dados do produto.
    void exibir() {
        cout << "Tabela dos Produtos Cadastrados:" << endl;
        cout << endl << nome << endl;
        cout << "RS " << preco << endl; //Preço já com o desconto aplicado. 
    }
};

//Letra C.
//Programa principal.
int main()
{
    //Criar objeto vetor com 15 produtos da classe Produto.
    Produto produto[15];

    //Inicializar Variáveis para receber os dados do produto.
    string nome;
    float preco, percentual;
    char desconto;

    cout << "Produtos abaixo:" << endl;
    //Preencher os dados dos produtos.
    for (int cont = 0; cont < 15; cont++) {
        //Receber os dados.
        cout << endl << "Produto " << cont + 1 << ":" << endl;

        fflush(stdin); //Limpar o buffer do teclado.
        cout << "Nome do produto: "; //Recebendo nome do produto.
        getline(cin, nome);

        cout << "Preco do Produto: "; //Recebendo preço do produto.
        cin >> preco;

        //Preencher os dados do produto usando o preencher.
        produto[cont].preencher(nome, preco);  //Acionar o procedimento preencher para setar os dados de cada produto.

        cout << "Produto tem desconto? (S / N): "; //Perguntando se o produto tem desconto.
        cin >> desconto;

        //Verificar se o produto tem desconto.
        if (desconto == 'S' || desconto == 's') { //Caso o usuário informe que o produto tem desconto...
            cout << "Informe o percentual de desconto: "; //Vai informal o percentual de desconto.
            cin >> percentual;
            produto[cont].aplicarDesconto(percentual); //Acionar o procedimento para aplicar o desconto.
        }
        else {
            percentual = 0; //Sem desconto.
        }
    }

    //Depois de receber os dados dos produtos e perguntar se tem desconto, exibir os dados de cada produto individualmente.
    for (int cont = 0; cont < 15; cont++) {
        cout << "Produto " << cont + 1 << ":" << endl;
        produto[cont].exibir(); //Acionar o procedimento exibir para mostrar os dados do produto.
    }

    return 0;
}