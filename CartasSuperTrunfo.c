#include <stdio.h>

int main(){
    //Variáveis Carta 1
    int pontost;
    char estado[20], codigo[20], cidade[20];
    float km, pib, den, per, populacao;

    //Variáveis Carta 2
    int pontost2;
    char estado2[20], codigo2[20], cidade2[20];
    float km2, pib2, den2, per2,populacao2;

    //Carta 1

    printf("Carta 1 :\n");

    printf("Estado : ");
    scanf("%s", estado);

    printf("Código : ");
    scanf("%s", codigo);

    printf("Nome da Cidade :");
    scanf("%s", cidade);

    printf("População :");
    scanf("%f", &populacao); 

    printf("Área : ");
    scanf("%f", &km);

    printf("PIB : ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos : ");
    scanf("%d", &pontost);

    //Carta 2

    printf("Carta 2 : \n");

    printf("Estado :");
    scanf("%s", estado2);

    printf("Código :");
    scanf("%s", codigo2);

    printf("Nome da Cidade :");
    scanf("%s", cidade2);

    printf("População :");
    scanf("%f", &populacao2); 

    printf("Área :");
    scanf("%f", &km2);

    printf("PIB : ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos :");
    scanf("%d", &pontost2);

    //Calculos Carta 1
    
    den = (populacao * 1000) / km; 
    per = (pib * 1000000000) / populacao;

    //Calculos Carta 2

    den2 = (populacao2 *1000) / km2;
    per2 = (pib2 * 1000000000)/ populacao2;

    //Exibir dados

    printf("\n-Dados da Carta 1 -\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %f km²\n", km);
    printf("PIB: %f bilhões de reias\n", pib);
    printf("Pontos Turísticos: %d\n", pontost);
    printf("Densidade Populacional: %.2f\n",den);
    printf("PIB per Capita: %.2f\n", per);

    printf("\n-Dados da Carta 2 -\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %.2f km²\n", km2);
    printf("PIB: %f bilhões de reias\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f\n",den2);
    printf("PIB per Capita: %.2f\n", per2);

    return 0;

}