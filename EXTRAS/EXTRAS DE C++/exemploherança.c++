#include <iostream>
using namespace std;

//Primeiro criar uma classe chamada Aluno. 
class Aluno
{
    //Inicializar atributos privados onde vai ter os dados do aluno. 
    private:
        string nome;
        int idade;
        float altura;

    //Criar os dados públicos para manipular os atributos privados. 
    public:
        //Construtor padrão.
        Aluno () 
        {
            //Acionar valores padrão. Como está acionando o procedmento com valores, tem que colocar valores válidos.
            inicializaTudo("nenhum",6,1); //Vai acessar o procedimento para inicializar os dados do aluno. 
        }

        //Procedimento para alterar o nome do aluno.
        void setNome(string novo) { //Passando o novo nome do aluno como parâmetro. (String porque nome é uma string).
            //Validar o nome. "novo.length()" é a mesma coisa que strlen(novo), que basicamente conta quantos caracteres tem na string. 
            if (novo.length() > 2) { //Se o tamanho do nome for maior que 2 caracteres, pode alterar o nome.
                //Atualizar o nome. 
                nome = novo; //O nome passa a receber o novo nome que vai ser informado pelo usuário. 
            }

            else {
                //Imprimir mensagem de erro, caso o nome seja inválido, ou seja, menor ou igual a 2 caracteres.
                cout << "ERRO: Nome tem que ser acima de 2 caracteres" << endl; // cout é a mesma coisa que printf (Quando for cout a seta é sempre "<<"). 
                //endl é a mesma coisa que \n (quebra de linha), podendo ser "\n" (entre aspas) ou apenas endl.
            }
        }
        
        //FUnção para retornar o novo nome do aluno. 
        string getNome() 
        {
            return nome; //Depois de usar o set para alterar o nome, pode usar o get para retornar o nome atualizado.
        }

        //Procedimento para alterar a idade do aluno.
        void setIdade (int nova) {
            //Validar a idade.
            if (nova > 5) { //Se a nova idade for maior que 5 anos, pode alterar a idade.
                //Atualizar a idade.
                idade = nova;
            } 
            
            else {
                cout << "ERRO: Idade acima de 5 anos" << endl;
            }
        }

        //Função para retornar a idade do aluno.
        int getIdade() 
        {
            return idade;
        }

        //Procedimento para alterar a altura do aluno.
        void setAltura (float nova) {
            //Validar a altura.
            if (nova > 0) { //Se a nova altura for maior que 0, pode alterar a altura.
                //Atualizar a altura.
                altura = nova;
            } 
            
            else {
                cout << "ERRO: Altura invalida" << endl;
            }
        }

        //Função para retornar a altura do aluno.
        float getAltura()
        {
            return altura;
        }

        //Procedimento para inicializar os dados do aluno.
        void inicializaTudo(string nNome, int nIdade, float nAltura) { //n = novo. (Necessário passar os valores para inicializar os atributos).
            //Usar os sets para inicializar os atributos, pois já possuem validações.
            setNome(nNome); //Vai acessar o procedimento setNome para inicializar o nome.
            setIdade(nIdade); //Vai acessar o procedimento setIdade para inicializar a idade.
            setAltura(nAltura); //Vai acessar o procedimento setAltura para inicializar a altura.
        }

        //Procedimento para exibir os dados do aluno.
        void exibir() {
            cout << "Nome: " << getNome() << endl; //Como printf na hora de imprimir resultados: printf("Nome: %s\n", nome);
            cout << "Idade: " << getIdade() << endl; //Como printf na hora de imprimir resultados: printf("Idade: %d\n", idade);
            cout << "Altura: " << getAltura() << endl; //Como printf na hora de imprimir resultados: printf("Altura: %.2f\n", altura);
        }
}; //Não esquecer do ; no final da classe.

//Usar herança para criar uma nova classe chamada AlunoGrad, que herda da classe Aluno. 
class AlunoGrad : public Aluno {
    private: 
        string TCC; //Atributo específico apenas da classe AlunoGrad.

    public: 
        ALunoGrad () {
            setTCC("Vazio"); //Usar o set para inicializar o TCC.
        }

        //Procedimento para alterar o TCC.
        ALunoGrad(string nNome, int nIdade, float nAltura, string nTCC) : Aluno(nNome, nIdade, nAltura) {
            setTCC(nTCC); //Usar o set para inicializar o TCC.
            
        }

        //Procedimento para alterar o TCC.
        void setTCC(string novo) {
            //Verificar se o TCC é válido.
            if (novo.length() > 3) { //Se o tamanho do TCC for maior que 3 caracteres, pode alterar o TCC.
                TCC = novo; //Atualizar o TCC.
            }

            else {
                cout << "ERRO: TCC invalido" << endl;
            }
        }

        string getTCC() {
            return TCC;
        }

        //Exibir os dados do aluno graduando, incluindo o TCC.
        void exibir() {
            Aluno :: exibir(); //Chamar o exibir da classe base (Aluno) para exibir os dados comuns.
            cout << "Titulo do TCC: " << getTCC() << endl; //Exibir o TCC específico do AlunoGrad.
        }
};

//Criar outra classe para um aluno mestrado (herdando da classe aluno). 
class AlunoMestrado : public Aluno {
    private: 
        string Dissertacao; //Atributo específico apenas da classe AlunoMestrado. 

    public: 
        AlunoMestrado () {
            setDissertacao("Vazio"); //Usar o set para inicializar o Dissertacao.
        }

        //Procedimento para alterar o TCC.
        AlunoMestrado(string nNome, int nIdade, float nAltura, string nDissertacao) : Aluno(nNome, nIdade, nAltura) {
            setDissertacao(nDissertacao); //Usar o set para inicializar o Dissertacao.
            
        }

        //Procedimento para alterar a Dissertacao.
        void setDissertacao(string novo) {
            //Verificar se o TCC é válido.
            if (novo.length() > 3) { //Se o tamanho do TCC for maior que 3 caracteres, pode alterar o TCC.
                Dissertacao = novo; //Atualizar o TCC.
            }

            else {
                cout << "ERRO: Nome da dissertacao invalido" << endl;
            }
        }

        string getDissertacao() {
            return Dissertacao;
        }

        //Exibir os dados do aluno graduando, incluindo o TCC.
        void exibir() {
            Aluno :: exibir(); //Chamar o exibir da classe base (Aluno) para exibir os dados comuns.
            cout << "Titulo da Dissertacao: " << getDissertacao() << endl; //Exibir a Dissertacao específica do AlunoMestrado.
        }
};

int main()
{
    //Aluno = referencia a classe (construtor padrão). - Objeto = nome do objeto.
    AlunoMestrado objeto;
    AlunoMestrado turma[2]; //Criando um vetor de objetos da classe Aluno. 
    //Caso fosse com alocação dinâmica, seria: Aluno *turma = new Aluno[2];

    //Acionando o procedimento exibir para mostrar os dados padrão do alun
    objeto.exibir();

    //Inicializar novos dados para o aluno. 
    string novoNome;
    int novaIdade, novoTCC;
    float novaAltura;

    //Pedir informações ao usuário. 
    fflush(stdin); //Limpar o buffer do teclado antes de ler uma string com espaços. Equivale ao uso do "scanf(" %[^\n]", ...);" em C.
    cout << "Digite o nome: "; 
    getline(cin,novoNome); // scanf. Não usar apenas cin, porque o cin lê até o primeiro espaço em branco. getline é para ler a linha inteira, como scanf(" %[^\n]", novoNome);
    cout << "Digite a idade: ";
    cin >> novaIdade;  //Como é inteiro e float, pode usar cin, normalmente, porque equivale ao uso do scanf. 
    cout << "Digite a altura: "; 
    cin >> novaAltura; 
    fflush(stdin); //Limpar o buffer do teclado antes de ler uma string com espaços.
    //cout << "Digite o titulo do TCC: ";
    //getline(cin, novoTCC);
    fflush(stdin); //Limpar o buffer do teclado antes de ler uma string com espaços.
    cout << "Digite o titulo da Dissertacao: ";
    getline(cin, novoDissertacao);

    //Inicializar os dados dos alunos do vetor. Aqui vc vai estar alterando os dados do aluno. 
    objeto.inicializaTudo(novoNome, novaIdade, novaAltura); //Escrever dessa forma para não precisar usar os sets individualmente. Ex: objeto.setNome(novoNome);
    objeto.setDissertacao(novoDissertacao); //Usar o set para alterar o TCC.
    //Acionar o procedimento exibir para mostrar os novos dados do aluno.
    objeto.exibir();

     //Laço para exibir os dados padrão dos alunos do vetor. 
    for (int cont = 0; cont < 2; cont++) {
        cout << "Aluno: " << (cont + 1) << endl; //Imprimir o número do aluno (cont + 1, porque cont começa do 0).

        fflush(stdin); //Limpar o buffer do teclado antes de ler uma string com espaços.

        //Receber informações do usuário. 
        cout << "Digite o nome: ";
        getline(cin,novoNome);
        cout << "Digite a idade: ";
        cin >> novaIdade;
        cout << "Digite a altura: ";
        cin >> novaAltura;
        fflush(stdin); //Limpar o buffer do teclado antes de ler uma string com espaços.
        cout << "Digite o titulo da Dissertacao: ";
        getline(cin, novoDissertacao);

        //Receber nos dados dos alunos do vetor. 
        turma[cont].inicializaTudo(novoNome, novaIdade, novaAltura);
        turma[cont].setDissertacao(novoDissertacao);

        //Exibir os dados dos alunos do vetor.
        turma[cont].exibir();
    }

    return 0;
}
