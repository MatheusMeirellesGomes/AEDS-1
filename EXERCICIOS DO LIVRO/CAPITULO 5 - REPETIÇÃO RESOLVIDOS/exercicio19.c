int main()
{
    //Inicializar Variáveis.
    int M, N, soma = 0; //Apenas valores inteiros e positivos.

    //Receber valores.
    printf("Informe o M: "); 
    scanf("%d", &M); 

    printf("Informe o N: "); 
    scanf("%d", &N); 

    //Executar o programa enquanto M for menor ou igual a N.
    do
    
    {
        if (M >= N){
            printf("\nPrograma Invalido.\n");
            else {            
                //Verificar até quando vão somar os números entre eles. 
                for (int cont = M; cont <= N; cont++)
                {
                    //Somar os números que estão entre os dois números. 
                    soma += cont; 

                    //Imprimir soma. 
                    printf("\nSoma = %d\n", soma); 

                    //Receber valores novamentes para entrar na repetição. 
                    printf("\nInforme M: "); 
                    scanf("%d", &M); 
                    
                    printf("Informe N: "); 
                    scanf("%d", &N); 
                }
            }
    } while (M <= N);
}