#include <stdio.h>

 int main(){
     
     char vertical[10] = {'A','B','C','D','E','F','G','H','I','J'};
     int horizontal[10][10] = {0};
     
     horizontal[5][4] = 5;
     horizontal[5][5] = 5;
     horizontal[5][6] = 5;
     
     printf("* BATALHA NAVAL. * \n \n");
     printf("   ");

     for(int h = 0; h < 10; h ++){
        printf("%2d ", h);
     }
       printf("\n");

     for (int v = 0; v < 10; v++) {
        printf("%2c ", vertical[v]);
        
        for(int h = 0; h < 10; h++) {
            printf("%2d ", horizontal[v][h]);
        }
        printf(" \n");
     }
  return 0;
 }