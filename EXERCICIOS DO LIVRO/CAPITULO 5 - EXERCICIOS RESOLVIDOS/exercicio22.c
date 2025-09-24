#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inicializar Variáveis.
    int idade, qntd_candF = 0, qntd_candM = 0, qntd_homens45 = 0, existe_mulher_exp = 0;
    int qntd_mulheres21 = 0, menor_idadeF, somaidadeH = 0, qntd_homensS = 0;
    float media_homens, porcentagem;
    char sexo, experiencia;

    //Informar o nome da empresa.
    printf("EMPRESA DO MATHEUS:\n");

    //Receber primeira idade do candidato para verificação.
    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    //Receber informações dos candidatos enquanto a idade não for zero.
    do
    {
        //Verificar se a primeira idade é menor ou igual a zero.
        if (idade <= 0){
            printf("\nPROGRAMA ENCERRADO!\n");
        }
        else {
            //Receber sexo e experiêcncia do candidato
            printf("Informe seu sexo [M / F]: ");
            scanf(" %c", &sexo);

            printf("Tem experiencia no servico [S- sim / N- nao]: ");
            scanf(" %c", &experiencia);

            //Verificar número de candidatos do sexo feminino.
            if (sexo == 'F' || sexo == 'f'){
                qntd_candF++;
            }

            //Verificar número de candidatos do sexo masculino.
            if (sexo == 'M' || sexo == 'm'){
                qntd_candM++;
            }

            //Verificar idade média dos homens que ja tem experiência no serviço.
            if ((sexo == 'M' || sexo == 'm') && (experiencia == 'S' || experiencia == 's')){
                somaidadeH += idade; //Vai somar todas as idades que tiverem esse requisito.
                qntd_homensS++;
            }

            //Verificar porcentagem dos homens com mais de 45 anos.
            if ((sexo == 'M' || sexo == 'm') && idade > 45){
                qntd_homens45++;
            }

            //Verificar o número de mulheres com idade inferior a 21 anos e com experiência no serviço.
            if ((sexo == 'F' || sexo == 'f') && idade < 21 && (experiencia == 'S' || experiencia == 's')){
                qntd_mulheres21++;
            }

            //Verificar a menor idade das mulheres que já tem experiência no serviço.
            if ((sexo == 'F' || sexo == 'f') && (experiencia == 'S' || experiencia == 's')){
                if (existe_mulher_exp == 0) {
                    menor_idadeF = idade;//A menor idade vai ser a primeira idade com esses requisitos a ser informada.
                    existe_mulher_exp = 1; //Usar uma flag para indicar que a primeira mulher com esses requisitos foi encontrada.
                }
                else if (idade < menor_idadeF){ //Se a próxima idade for menor que a próxima idade informada.
                    menor_idadeF = idade; //Ela passa a ser a menor.
                }

            }

            //Receber a idade do próximo candidato caso ela seja maior que zero.
            printf("\nInforme sua idade: ");
            scanf("%d", &idade);
        }
    } while (idade > 0);

    //Imprimir quantidade de candidatos femininos.
    if (qntd_candF > 0){
        printf("\nQuantidade de candidatos femininos: %d\n", qntd_candF);
    }
    else {
        printf("\nNAO TEM CANDIDATAS MULHERES.\n");
    }

    //Imprimir quantidade de candidatos masculinos.
    if (qntd_candM > 0){
        printf("Quantidade de candidatos masculinos: %d\n", qntd_candM);
    }
    else {
        printf("\nNAO EXISTEM CANDIDATOS MASCULINOS.\n");
    }

    //Calcular e imprimir média dos homens que já tem experiência no serviço.
    if (qntd_homensS > 0){
        media_homens = (float)somaidadeH / qntd_homensS; //Transformar em float pq na hora de imprimir vai ser em float. 
        printf("Media de homens que ja tem experiencia no servico: %.2f\n", media_homens);
    }
    else {
        printf("\nNAO EXISTEM HOMENS COM ESSES REQUISITOS.\n");
    }
    
    //Calcular a porcentagem de homens com mais de 45. 
    if (qntd_homens45 > 0){
        porcentagem = (qntd_homens45 * 100.0) / qntd_candM; 
        printf("Porcentagem de homens com mais de 45 anos: %.2f%%\n", porcentagem);
    }
    else {
        printf("\nNAO EXISTEM HOMENS COM MAIS DE 45 ANOS.\n"); 
    }

    //Imprimir o número de mulheres com idade menor que 21 e com experiência no serviço.
    if (qntd_mulheres21 > 0){
        printf("Qunatidade de mulheres com menos de 21 anos e experiencia no servico: %d\n", qntd_mulheres21);
    }
    else {
        printf("\nNAO EXISTEM MULHERES COM ESSES REQUISITOS.\n");
    }

    //Imprimir a menor idade entre as mulheres que jé tem experiência no serviço.
    if (existe_mulher_exp == 1){
        printf("Menor idade das mulheres que ja tem experiencia no servico: %d\n", menor_idadeF);
    }
    else {
        printf("\nNAO TEM MULHERES COM EXPERIENCIA.\n");
    }
    return 0;
}
