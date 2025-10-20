//implemente um programa que abra o arquivo texto (criado no exercício anterior) e conte a
//quantidade de caracteres ‘a’ que estão presentes nele. Imprima a quantidade na tela
int main()
{
    //Inicializar Variáveis. 
    FILE *arq = fopen("C:\\Users\\Matheus Gomes\\Desktop\\texto.txt", "r"); //o 'r' é para abrir o arquivo para leitura.
    char caracter;
    int quantidade = 0; //Variável para contar a quantidade de caracteres 'a'. 

    //Ler caracteres do arquivo até o final do arquivo.. 
    while (fscanf(arq, "%c", &caracter) != EOF) //Enquanto não chegar no final do arquivo. 
    {
        //Verificar se o caractere lido é igual a 'a'. 
        if (caracter == 'a'){
            quantidade++; //Incrementar a quantiidade de caracteres 'a'. 
        }

        //Como os dados estão sendo lidos do arquivo, usa-se fscanf para ler os caracteres, por isso não é necessário usar printf ou scanf aqui. 
    }

    //Imprimir a quantidade de caracteres 'a' encontrados. 
    printf("Quantidade de caracteres 'a' encontrados: %d\n", quantidade);

    //Fechar arquivo. 
    fclose(arq);

    return 0;
}