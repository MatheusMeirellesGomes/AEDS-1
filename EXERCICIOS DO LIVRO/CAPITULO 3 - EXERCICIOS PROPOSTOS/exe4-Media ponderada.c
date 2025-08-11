//Recebe duas notas, calcular e mostrar a média ponderada, considere peso 2 para a 
//primeira nota e peso 3 para a segunda nota.
//Media ponderada = (nota * peso + nota * peso) / (peso + peso)
int main ()
{
    //Inicializar com os dados do enunciado
    float nota1, nota2, media;
    int peso1 = 2, peso2 = 3; 
    
    //Receber as duas notas
    printf("Digite a primeira nota: "); 
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: "); 
    scanf("%f", &nota2);
    
    //Fazer o calculo da media ponderada
    //Media ponderada é sempre a soma das notas multplicadas pelos seus pesos, divido pela soma dos pesos. 
    media = (nota1* 2 + nota2* 3) / (2 + 3); 
    
    //Imprimir a media ponderada
    printf("Media ponderada = %.2f", media);
    
    return 0; 
}