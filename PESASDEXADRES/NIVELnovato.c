
#include <stdio.h>
 int main(){
//    char movimento;
  
 //as exibindo as perças 
           printf("## TORRE ## \n");
    for (int cima = 1; cima <= 5; cima++){
         printf("%d Mover para Cima \n", cima);
    }
    printf("\n");

           printf("## BISPO ##\n");
    for (int cima = 1; cima <= 5; cima++)
    {   
        if (cima % 2 == 1)
        {
            printf("%d Move para cima. \n", cima);
        }
        else 
        {
            printf("%d Move para direita. \n", cima);
        }
    }
    printf("\n");
    
            printf("## RAINHA ## \n");
    for (int cima = 1; cima <= 8; cima++)
    {
        if (cima % 2 == 1)
        {
            printf("%d Mover para cima \n", cima);
        }
        else
        {
            printf("%d mover para esquerda. \n", cima);
        }
    }
  
       

    
    
}