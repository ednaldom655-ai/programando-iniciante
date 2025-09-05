#include <stdio.h>

int main(){
    
    char produtoA[30] = "produtoA";
    char produtoB[30] = "produtoB";
    
    unsigned int estoqueA = 7000;
    unsigned int estoqueB = 300;

    float valorA = 17.30;
    float valorB = 10.50;
    
    unsigned int estoque_minimoA = 200;
    unsigned int estoque_minimoB = 400;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;


    printf("%s tem estoque %u, valor unitario %.2f\n", produtoA, estoqueA, valorA);
    printf("%s tem estoque %u, valor unitario %.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoque_minimoA;
    resultadoB = estoqueB > estoque_minimoB;

    printf("o %s  tem estoque minimo de %d\n", produtoA, resultadoA);
    printf("o %s  tem estoque minimo de %d\n", produtoB, resultadoB);

    printf("o valor total de A R$ %.2f\n", estoqueA * valorA);
    printf("o valor total de b R$ %.2f\n", estoqueB * valorB);
    printf("o produtoB e maior que produtoA ?: %d\n",estoqueB * valorB > estoqueA * valorA);

    
   return 0;


}