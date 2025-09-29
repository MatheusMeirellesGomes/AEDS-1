//Implemente um programa em C que leia dois inteiros, armazenando-os em variáveis. O programa deve comparar os endereços das variáveis e exibir o maior deles.
int main()
{
    //Inicializar Variáveis.
    int n1, n2; 
    float *maior_endereco; //Como vai acessar a memória de n1 e n2, precisa-se declarar maior endereço como ponteiro, para acessar o conteúdo do maior endereço. 

    //Receber números inteiros.
    printf("Informe o primeiro numero: "); 
    scanf("%d", &n1); 

    printf("Informe o segundo numero: "); 
    scanf("%d", &n2);

    //Verificar o endereço de n1 e n2. 
    printf("\nEndereco de n1: %p\n", &n1); //Vai acessar o endereço de n1 na memória.
    printf("\nEndereco de n2: %p\n", &n2); //Vai acessar o endereço de n2 na memória.

    //Verificar qual é o maior endereço. 
    if (&n1 > &n2){ //Se o endereço de n1 for maior que o endereço de n2. 
        maior_endereco = &n1; //O maior endereço é o conteúdo do endereço de n1. 
    }
    else { 
        maior_endereco = &n2; //Se não o maior endereço é o conteúdo do endereço de n2. 
    }

    //Imprimir o maior endereço. 
    printf("\nMaior endereco: %p\n", maior_endereco); 

    return 0;
}