#include <stdio.h>

int main (){

    float temperatura, umidade;
    unsigned int estoque;

    printf("qual a temperatura ?: \n");
    scanf("%f", &temperatura);
    printf("qual é a umidasde ?: \n");
    scanf("%f", &umidade);
    printf("qual a quantidade do estoque?: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("esta calor \n");
    }else {
        printf("esta frio \n");
    }

    if(umidade > 50){
        printf("estar umido \n");
    }else{
        printf("umidade baixa \n");
    }

    if(estoque > 500){
        printf("estoque esta acima da media \n");
    }else{
        printf("estoque abaixo da media \n");
    }
    

    return 0;

}