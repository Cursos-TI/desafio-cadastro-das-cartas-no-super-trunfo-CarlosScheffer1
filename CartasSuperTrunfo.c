#include <stdio.h>
#include <string.h>

//Definindo as cartas 
#define TAM_CODIGO 4
#define TAM_NOME 50

int main(){
    //Variaveis da primeira carta 

    char estado1 [3];
    char codigo_da_carta1[TAM_CODIGO];
    char nome_da_cidade1 [TAM_NOME];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int Pontos_turisticos1;
    float Densidade_populacional1,PIB_per_capta1,SuperPoder1;

    //Variaveis da segunda carta
    char estado2 [3];
    char codigo_da_carta2[TAM_CODIGO];
    char nome_da_cidade2 [TAM_NOME];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int Pontos_turisticos2;
    float Densidade_populacional2,PIB_per_capta2,SuperPoder2;

    //Leitura dos dados da cidade 1

    printf("\n -- dados da primeira carta --\n");
    printf("Digite uma letra de A a H: \n");
    scanf("%c", estado1);

    printf("Digite o codigo da carta (exemplo A01): \n");
    scanf("%s", codigo_da_carta1);

    getchar();

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade1);

    printf("populaçao: \n");
    scanf("%lu", &populacao1);

    printf("area (em km²): \n");
    scanf("%f", &area1);


    printf("Digite o PIB (Bilhoes): \n");
    scanf("%f", &PIB1);


    printf("Pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos1);

    //medias PIB per capta e densidade populacional
    Densidade_populacional1 = populacao1 / area1;
    PIB_per_capta1 = PIB1 *1e9 / populacao1;

    //leituras do super poder carta 1

    SuperPoder1 =(float)populacao1 + area1 + (PIB1 * 1e9) + (float)Pontos_turisticos1 + (PIB_per_capta1) + (1.0f / Densidade_populacional1);

    
    //Leitura da carta 2
    printf("\n -- Digite os dados da segunda cidade -- \n");
    printf("Digite a letra da cidade de A a H : \n");
    scanf(" %c", estado2);

    printf("Digite o codigo da cidade (exemplo A01) \n");
    scanf("%s", codigo_da_carta2);

    getchar();

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Populaçao: \n");
    scanf("%lu", &populacao2);

    printf("Area (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Bilhoes): \n");
    scanf("%f", &PIB2);

    printf("total de pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos2);

    //medias PIB per capta e densidade populacional
    Densidade_populacional2 = populacao2 / area2;
    PIB_per_capta2 = PIB2 *1e9/ populacao2;

    //leituras do super poder carta 2

    SuperPoder2 = (float)populacao2 + area2 + (PIB2 * 1e9) + (float)Pontos_turisticos2 + PIB_per_capta2 + (1.0f / Densidade_populacional2);


    
    //Leitura dos dados da cidade 1

    printf("\n--- Dados da cidade ---\n");
    printf("estado: %s \n",estado1);
    printf("Codigo da carta: %s \n", codigo_da_carta1);
    printf("Nome da cidade: %s \n", nome_da_cidade1);
    printf("População: %lu \n", populacao1);
    printf("area: %2.f km²\n",area1);
    printf("PIB: %2.f bilhoes\n",PIB1);
    printf("Total de pontos turisticos: %d \n", Pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade_populacional1);
    printf("PIB per capta: %.2f \n", PIB_per_capta1);
    printf("Super Poder da carta 1: %.2f \n",SuperPoder1);

    //Leitura dos dados da cidade 2
    printf("\n--- Dados da cidade 2 ---\n");
    printf("estado: %s \n",estado2);
    printf("Codigo da carta: %s \n", codigo_da_carta2);
    printf("Nome da cidade: %s \n", nome_da_cidade2);
    printf("População: %lu \n", populacao2);
    printf("area: %2.f km²\n",area2);
    printf("PIB: %2.f bilhoes\n",PIB2);
    printf("Total de pontos turisticos: %d \n", Pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km² \n",Densidade_populacional2);
    printf("PIB per capta: %.2f\n", PIB_per_capta2);
    printf("Super Poder da carta 2: %.2f \n", SuperPoder2);

    // comparaçoes
    printf("\n=== Comparação de cartas ===\n");
    
    printf("População: %d \n", populacao1 >= populacao2);
    printf("Area: %d \n", area1 >= area2);
    printf("PIB: %d \n", PIB1 >= PIB2);
    printf("Pontos turisticos: %d \n", Pontos_turisticos1 >= Pontos_turisticos2);
    printf("Densidade populacional: %d \n", Densidade_populacional1 <= Densidade_populacional2);
    printf("PIB per capta: %d \n", PIB_per_capta1 >= PIB_per_capta2);
    printf("Super poder: %d \n", SuperPoder1 >= SuperPoder2);

    //carta vencedora
    printf("\n -- Resultado -- \n");
    if (SuperPoder1 > SuperPoder2){
       printf("Carta 1 é a vencedora do Super poder!\n");
    } else if (SuperPoder2 > SuperPoder1) {
      printf("Carta 2 é a vencedora no Super poder!\n");
    } else{
      printf("empate no Super Poder!\n");
    }


    return 0;
}