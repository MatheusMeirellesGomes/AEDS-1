//Um trabalhador recebeu seu salário e depositou no banco. Emitiu dois cheques, e agora deseja saber seu saldo atual.
// Cada operação bancária paga CPMF de 0,38% e o saldo inicial da conta esta zerado. 
int main()
{
    //Inicializar o programa com os dados do enunciado 
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
    
    //Receber os dados do usuario, nos quais serão salario, valor do primeiro e segundo cheque
    printf("Valor do salario: R$ "); 
    scanf("%f", &salario); 
    printf("Valor do primeiro cheque: R$ ");
    scanf("%f", &cheque1); 
    printf("Valor do segundo cheque: R$ ");
    scanf("%f", &cheque2); 

    //Calcular o CPMF de cada cheque, que é 0,38% do valor do cheque 
    cpmf1 = cheque1 * 0.38 / 100; // Podendo ser cheque1 * 0.0038. 
    cpmf2 = cheque2 * 0.38 / 100; // Podendo ser cheque2 * 0.0038. 
    saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2; //O saldo é nada mais que o salario menos os cheques e o cpmf de cada cheque. 

    //Imprimir o saldo atual depois de todas as operações
    printf("Saldo atual = R$ %.2f", saldo);

    return 0;
}