#include <stdio.h>

int main(){
    //Variáveis Carta 1
    int populacao, pontost;
    char estado[20], codigo[20], cidade[20];
    float km, pib;

    //Variáveis Carta 2
    int populacao2, pontost2;
    char estado2[20], codigo2[20], cidade2[20];
    float km2, pib2;


    //Carta 1

    printf("Carta 1 :\n");

    printf("Estado : ");
    scanf("%s", estado);

    printf("Código : ");
    scanf("%s", codigo);

    printf("Nome da Cidade :");
    scanf("%s", cidade);

    printf("População :");
    scanf("%d", &populacao); 

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
    scanf("%d", &populacao2); 

    printf("Área :");
    scanf("%f", &km2);

    printf("PIB : ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos :");
    scanf("%d", &pontost2);

    //Exibir dados

    printf("\n-Dados da Carta 1 -\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", km);
    printf("PIB: %f bilhões de reias\n", pib);
    printf("Pontos Turísticos: %d\n", pontost);

    printf("\n-Dados da Carta 2 -\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", km2);
    printf("PIB: %.2f bilhões de reias\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);

    return 0;

}
