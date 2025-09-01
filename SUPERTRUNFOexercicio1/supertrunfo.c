#include <stdio.h>

int main(){
   
    printf("CARTA1 :\n");
   
    float PIB = 20.00000;
    char estado;
    char codigo[10];
    char cidade[30];
    int populacao = 12345;
    float area = 23.456;
    int p_turisticos = 100;

    printf("primeira letra inicial do estado ?: \n");
    scanf(" %c", &estado);

    printf("qual o codigo deste estado ?: \n");
    scanf("%s", codigo);
    
    printf("qual o PIB do estado ?: \n");
    scanf("%f", &PIB);

    printf("qual o nome da cidade ?: \n");
    scanf("%s", cidade);

    printf("qual o numero da popuplacao ?: \n");
    scanf("%d", &populacao);

    printf("qual o tamanho da area do estado ?: \n");
    scanf(" %f", &area);

    printf("quantos pontos turisticos existem no local ?: \n");
    scanf( "%d", &p_turisticos);
    

    printf("estado: %c\n", estado);
    printf("codigo: %s\n", codigo);
    printf("PIB: %.2f\n", PIB);
    printf("cidade: %s\n", cidade);
    printf("população: %d\n", populacao);
    printf("Área: %.2f km \n", area);
    printf("pontos turisticos: %d\n", p_turisticos);



    printf("CARTA 2:\n");

    char estado_2;
    char codigo_2[20];
    char cidade_2[30];
    int populacao_2 = 12345;
    float area_2 = 90.0000;
    float PIB_2 = 80.0000;
    int p_turisticos_2 = 200;

     printf("primeira letra inicial do estado ?:\n");
     scanf(" %c", &estado_2);

     printf("qual o código do estado ?:\n");
     scanf("%s", codigo_2);

     printf("qual o nome da cidade ?:\n");
     scanf(" %s", cidade_2);

     printf("qual o numero da poulação ?\n");
     scanf("%d", &populacao_2);

     printf("qual o PIB ?:\n");
     scanf("%f", &PIB_2);

     printf("qual o tamanho da Área Km ?\n");
     scanf("%f", &area_2);

     printf("quantos pontos turísticos existem no local ?;\n");
     scanf("%d", &p_turisticos_2);

     printf("letra do estado: %c\n", estado_2);
     printf("o código: %s\n", codigo_2);
     printf("nome da cidade: %s\n", cidade_2);
     printf("população: %d\n", populacao_2);
     printf("PIB: %.2f\n", PIB_2);
     printf("Área: %.2f\n", area_2);
     printf("pontos turísticos: %d\n", p_turisticos_2);



    return 0;


}