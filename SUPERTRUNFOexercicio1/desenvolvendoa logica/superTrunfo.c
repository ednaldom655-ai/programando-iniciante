#include <stdio.h>

int main(){
    
    //declarando as variaveis

    //printf("#CARTA 1:\n");

    char estado[10] = "sp";
    char codigo[10] = "p09";
    char cidade[30] = "sao paulo";
    unsigned int populacao = 500000;
    float area = 3000.50;
    float PIB = 9080.80;
    int p_turisticos = 60;

    //operadores matematicos simoles
    float densidade = populacao / area;
    float per_capita = PIB / populacao;
    float superPode = populacao + area + PIB + p_turisticos;


    //printf("#CARTA 2:\n");
    
    char estado_2[10] = "rj";
    char codigo_2[10] = "S08";
    char cidade_2[30] = "rio de janeiro";
    unsigned int populacao_2 = 600000;
    float area_2 = 5000.50;
    float PIB_2 = 8070.80;
    int p_turisticos_2 = 79;

    //operadores matematicos simoles
    float densidade_2 = populacao_2 / area_2;
    float per_capita_2 = PIB_2 / populacao_2;
    float superPode_2 = populacao_2 + area_2 + PIB_2 + p_turisticos_2;

    //comparação entre as duas cartas
    printf("COMPARAÇÃO ENTRE AS CARTAS:\n");

    printf("# Atributo População: \n");
    printf("carta 1 - São paulo(SP): %u\n", populacao);
    printf("carta 2 - Rio de Janeiro(RJ): %u\n", populacao_2);

    if(populacao > populacao_2){
        printf("resumo: carta 1 (sao paoulo) venceu! \n");
    }else{
        printf("resumo: carta 2 (rio de janeiro) venceu! \n");
    }

    printf("# Atributo Dencidade Populacional: \n");
    printf("Carta 1 - São Paulo(SP): %f \n", densidade);
    printf("Carta 2 - Rio de Janeiro(RJ): %f \n", densidade_2);

    if(densidade < densidade_2){
        printf("resultado:Carta 1 (São Paulo) Venceu! \n");
    }else{
        printf("Resumo: Carta 2 (Rio de Janeiro) Venceu! \n");
    }

    printf("# Atributo Super Poder: \n");
    printf("Carta 1 - São Paulo(SP): %f \n", superPode);
    printf("Carta 2 - Rio de Janeiro(RJ): %f \n", superPode_2);
    
        if(superPode > superPode_2){
        printf("resultado:Carta 1 (São Paulo) Venceu! \n");
    }else{
        printf("Resumo: Carta 2 (Rio de Janeiro) Venceu! \n");
    }

    
    return 0;

}