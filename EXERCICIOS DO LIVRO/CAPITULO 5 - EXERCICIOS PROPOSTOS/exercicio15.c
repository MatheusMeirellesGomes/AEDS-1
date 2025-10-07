#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    char sexo, resposta; 
    int qntd_sim = 0, qntd_nao = 0, qntd_homem = 0, total_homem = 0; 
    float porcentagem; 
    
    printf("MERCADO.\n"); 
    
    //Receber informações de 10 pessoas.
    for (int cont = 1; cont <= 10; cont++)
    {
        //Receber sexo da pessoa.
        printf("Informe o sexo [M- masculino / F- feminino]: "); 
        scanf(" %c", &sexo); 
        
        printf("Informe se a pessoa gostou ou nao do produto [S- sim / N- nao]: "); 
        scanf(" %c", &resposta); 
        
        //Verificar quantidade de pessoas que responderam sim. 
        if (resposta == 'S' || resposta == 's'){
            qntd_sim++; 
        }
        
        //Verificar quantidade de pessoas que responderam não. 
        if (resposta == 'N' || resposta == 'n'){
            qntd_nao++;
        }
        
        //Verificar porcentagem de homens quer responderam nao, entre todos os homens analisados. 
        if ((sexo == 'M' || sexo == 'm') && (resposta == 'N' || resposta == 'n')){
            qntd_homem++;
        }
        
        //Contar quantidade de homens dentro todos as pessoas. 
        if (sexo == 'M' || sexo == 'm'){
            total_homem++;
        }
    }
    
    //Calcular porcentagem de homens.
    if (total_homem > 0){
        porcentagem = (qntd_homem * 100.0) / total_homem;
    }
    else {
        printf("\nNao foram entrevistados homens.\n");
    }
    
    //Imprimir resultados.
    printf("\nQuantidade de pessoas que responderam sim: %d\n", qntd_sim);
    printf("Quantidade de pessoas que responderam nao: %d\n", qntd_nao); 
    printf("Porcentagem de homens que responderam nao: %.2f%%\n", porcentagem);
    
    return 0;
}