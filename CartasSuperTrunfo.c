#include <stdio.h>

//Definindo as cartas 
#define TAM_CODIGO 4
#define TAM_NOME 50

int main(){
    //Variaveis da primeira carta 

    char estado1 [3];
    char codigo_da_carta1[TAM_CODIGO];
    char nome_da_cidade1 [TAM_NOME];
    int populacao1;
    float area1;
    float PIB1;
    int Pontos_turisticos1;

    //Variaveis da segunda carta
    char estado2 [3];
    char codigo_da_carta2[TAM_CODIGO];
    char nome_da_cidade2 [TAM_NOME];
    int populacao2;
    float area2;
    float PIB2;
    int Pontos_turisticos2;

    //Leitura dos dados da cidade 1

    printf("\n -- Dados da primeira carta --\n");
    printf("Digite uma letra de A a H: \n");
    scanf("%c", estado1);

    printf("Digite o codigo da carta (exemplo A01): \n");
    scanf("%s", codigo_da_carta1);

    getchar();

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade1);

    printf("populaçao: \n");
    scanf("%d", &populacao1);

    printf("area: \n");
    scanf("%f", &area1);


    printf("PIB: \n");
    scanf("%f", &PIB1);


    printf("Pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos1);

    //Leitura da carta 2
    printf("\n -- Dados da segunda carta -- \n");
    printf("Digite a letra da cidade de A a H : \n");
    scanf(" %c", estado2);

    printf("Digite o codigo da cidade (exemplo A01) \n");
    scanf("%s", codigo_da_carta2);

    getchar();

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Populaçao: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("total de pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos2);

    //Leitura dos dados da cidade 1

    printf("\n--- Dados da cidade ---\n");
    printf("estado: %s \n",estado1);
    printf("Codigo da carta: %s \n", codigo_da_carta1);
    printf("Nome da cidade: %s \n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("area: %2.f km²\n",area1);
    printf("PIB: %2.f bilhoes\n",PIB1);
    printf("Total de pontos turisticos: %d \n", Pontos_turisticos1);

    //Leitura dos dados da cidade 2
    printf("\n--- Dados da cidade2 ---\n");
    printf("estado: %s \n",estado2);
    printf("Codigo da carta: %s \n", codigo_da_carta2);
    printf("Nome da cidade: %s \n", nome_da_cidade2);
    printf("População: %d \n", populacao2);
    printf("area: %2.f km²\n",area2);
    printf("PIB: %2.f bilhoes\n",PIB2);
    printf("Total de pontos turisticos: %d \n", Pontos_turisticos2);


    return 0;
}
