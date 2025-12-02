#include <iostream>
using namespace std;
//Você está desenvolvendo um sistema de biblioteca. Crie duas classes: Autor e Livro. A classe Autor deve armazenar o nome do autor, e a classe 
//Livro deve conter informações sobre o título ano de publicação e um ponteiro para um objeto da classe Autor. Escreva um programa principal (main) 
//que solicita ao usuário informações sobre um autor e um ivro. Em seguida, imprima os detalhes do livro, incluindo o título, ano de publicação e nome do autor.

//Criar primeira classe Autor. 
class Autor {
    private: 
        string nome; 

    public: 
        //Constutor com nome padrão. 
        Autor() {
            nome = "Autor Desconhecido"; 
        }
        //Setar o nome do autor. 
        void setNome (string nNome) {
            //Verificar se o nome têm mais de 3 caracteres. 
            if (nNome.length() > 3) {
                nome = nNome; 
            }
            else {
                cout << "Nome inválido! Deve conter mais de 3 caracteres." << endl;
            }
        }

        //Getter
        string getNome() {
            return nome; 
        } 
}; 

//Criar segunda classe Livro, com um ponteiro para a classe Autor. 
class Livro {
    //Atributos privados.
    private: 
        string titulo; 
        int anoPublicacao; 
        Autor *autor; //Ponteiro para o objeto Autor(Necessário para associação entre as classes). 

    //Atributos públicos.
    public: 
        //Construtor padrão com inicialização dos atributos. 
        Livro() {
            Inicializa("Titulo Desconhecido", 2000, nullptr); //Inicializando o ponteiro como nulo. 
        }

        //Procedimento para inicializar os dados do livro. 
        void inicializa(string nTitulo, int anoPubli, Autor *nAutor) {
            //Usar os sets para inicializar os atributos. 
            setTitulo(nTitulo);
            setAnoPublicacao(anoPubli);
            autor = nAutor; //Atribuir o ponteiro do autor.
        }

        //Procedimento para setar o título do Livro. 
        void setTitulo (string nTitulo) {
            //Verificar se o título têm mais de 3 caracteres.
            if (nTitulo.length() > 3) {
                titulo = nTitulo; 
            }
            else {
                cout << "Título inválido! Deve conter mais de 3 caracteres." << endl;
            }
        }

        string getTitulo() {
            return titulo; 
        }

        //Procedimento para setar o ano de publicação do Livro. 
        void setAnoPublicacao (int nAnoPubli) {
            //Verificar se o ano de publicação é válido 
            if (nAnoPubli > 1500) { //Ano que descobriu o Brasil. 
                anoPublicacao = nAnoPubli; 
            }
            else {
                cout << "Ano de publicação inválido! Deve ser maior que 1500." << endl;
            }
        }

        int getAnoPublicacao() {
            return anoPublicacao; 
        }

        //Procedimento para exibir certinho as informações do livro e passando o ponteiro para receber informações do nome do autor. 
        void exibe(){
            cout << "Detalhes do Livro:" << endl;
            cout << "Titulo: " << titulo << endl;
            cout << "Ano de Publicacao: " << anoPublicacao << endl;
            cout << "Nome do Autor: " << autor->getNome() << endl; //Usando o ponteiro para acessar o método getNome da classe Autor. 
            //Nesse caso autor->getNome(), ele está acessando o retorno do getNome() da classe Autor. 
        }
};

int main() 
{
    //Criar objeto da classe Autor e Livro dinâmicamente para armazenar as informações do autor. 
    Autor *autor = new Autor();
    Livro *livro = new Livro();

    //Inicializar variáveis para receber os dados do autor. 
    string nomeAutor; 
    int anoPubli; 
    string tituloLivro; 

    //Usar fflush para limpar o buffer do teclado.
    fflush (stdin);

    //Perguntar ao usuário as informações do autor. 
    cout << "Informe o nome do autor: "; 
    getline(cin, nomeAutor); //Como é string usa o getLine. 

    cout << "Informe o titulo do Livro: "; 
    getline (cin, tituloLivro); //Usar getline para receber o título.

    cout << "Informe o ano de publicacao do Livro: "; 
    cin >> anoPubli; 

    //Setar o nome do autor usando o setNome da classe Autor. 
    autor->setNome(nomeAutor);

    //Inicializar o livro com os dados usando o procedimento inicializa da classe Livro.
    livro->inicializa(tituloLivro, anoPubli, autor);

    //Exibir os detalhes do livro usando o exibe da classe Livro. 
    livro->exibe();

    //Liberar a memória alocada dinamicamente.
    delete autor;
    delete livro;

    return 0; 
}   