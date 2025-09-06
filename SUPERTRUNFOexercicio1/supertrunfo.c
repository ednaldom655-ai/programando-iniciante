#include <stdio.h>

int main(){
   
    printf("#CARTA1 :\n");
   
    float PIB_1;
    char estado_1;
    char codigo_1[10];
    char cidade_1[30];
    unsigned long int populacao_1;
    float area_1;
    int p_turisticos_1;

    printf("primeira letra inicial do estado ?: \n");
    scanf(" %c", &estado_1);

    printf("qual o codigo deste estado ?: \n");
    scanf("%s", codigo_1);
    
    printf("qual o PIB do estado ?: \n");
    scanf("%f", &PIB_1);

    printf("qual o nome da cidade ?: \n");
    scanf("%s", cidade_1);

    printf("qual o numero da popuplacao ?: \n");
    scanf("%lu", &populacao_1);

    printf("qual o tamanho da area do estado ?: \n");
    scanf(" %f", &area_1);

    printf("quantos pontos turisticos existem no local ?: \n");
    scanf( "%d", &p_turisticos_1);
    

    printf("estado: %c\n", estado_1);
    printf("codigo: %s\n", codigo_1);
    printf("PIB: %.2f\n", PIB_1);
    printf("cidade: %s\n", cidade_1);
    printf("população: %lu\n", populacao_1);
    printf("Área: %.2f km \n", area_1);
    printf("pontos turisticos: %d\n", p_turisticos_1);
    
    
    int dencidade = populacao_1 / area_1;
    int per_capita = populacao_1 / PIB_1;
    unsigned long int Superpoder_1 = populacao_1 + area_1 + PIB_1 + p_turisticos_1 + per_capita;

    printf("Densidade populacional: %d\n", dencidade);
    printf("PIB per capita: %lu\n", per_capita);
    printf("SUPER PODER #C.1 %lu\n", Superpoder_1);



    printf("#CARTA 2:\n");

    char estado_2;
    char codigo_2[20];
    char cidade_2[30];
    unsigned long int populacao_2 ;
    float area_2 ;
    float PIB_2 ;
    int p_turisticos_2 ;

     printf("primeira letra inicial do estado ?:\n");
     scanf(" %c", &estado_2);

     printf("qual o código do estado ?:\n");
     scanf("%s", codigo_2);

     printf("qual o nome da cidade ?:\n");
     scanf(" %s", cidade_2);

     printf("qual o numero da poulação ?\n");
     scanf("%lu", &populacao_2);

     printf("qual o PIB ?:\n");
     scanf("%f", &PIB_2);

     printf("qual o tamanho da Área Km ?\n");
     scanf("%f", &area_2);

     printf("quantos pontos turísticos existem no local ?;\n");
     scanf("%d", &p_turisticos_2);

     printf("letra do estado: %c\n", estado_2);
     printf("o código: %s\n", codigo_2);
     printf("nome da cidade: %s\n", cidade_2);
     printf("população: %lu\n", populacao_2);
     printf("PIB: %.2f\n", PIB_2);
     printf("Área: %.2f\n", area_2);
     printf("pontos turísticos: %d\n", p_turisticos_2);

    
    int dencidade2 = populacao_2 / area_2;
    int per_capita2 = populacao_2 / PIB_2;
    unsigned long int SuperPoder_2 = populacao_2 +area_2 + PIB_2 + p_turisticos_2 + per_capita2; 

    printf("Densidade populacional: %d\n", dencidade2);
    printf("PIB per capita: %d\n", per_capita2);
    printf(" SUPER PODER #C.2: %lu\n", SuperPoder_2);

    // exibir os resultados finais

    printf("COMPARANDO AS CARTAS\n");


    printf("População: Carta venceu 1 (%lu)\n", populacao_1 > populacao_2);
    printf("Área: Carta 1 venceu (%d)\n", area_1 > area_2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB_1 > PIB_2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", p_turisticos_1 > p_turisticos_2);
    printf("Dencidade Populacional: Carta 1 venceu (%d)\n", dencidade < dencidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", per_capita > per_capita2);
    printf("Super Poder: Carta 1 venceu (%lu)\n", Superpoder_1 > SuperPoder_2);
    
    
    return 0;


}