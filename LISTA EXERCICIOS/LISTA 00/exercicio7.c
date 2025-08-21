//Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo.
//Fórmula da Pg: an​=a1​⋅q(n−1). Como é o 5º termo, seria a5 ​= a1​ * razao (elevado a quatro)

int main()
{
    //Inicializar Variáveis.
    int a1, a5, razao; 

    //Receber informações necessárias.
    printf("Digite a razao: "); 
    scanf("%d", &razao); 

    printf("Digite o primeiro termo: "); 
    scanf("%d", &a1); 

    //Calcular para achar o quinto termo da PG. 
    a5 = a1 * pow(razao,4); //quinto termo = primeiro termo multiplicado pela quarta potência da razão. 

    //Imprimir resultado. 
    printf("Quinto termo da PG = %d", a5); 

    return 0;
}
