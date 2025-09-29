#include <stdio.h>

#define horizontal 10
#define vertical 10

 int main(){
 
   

   //  char vertical[10] = {'A','B','C','D','E','F','G','H','I','J'};
   //  int horizontal[10][10] = {0};
    int soma = 0; 
    int matriz [horizontal][vertical]; 
   //   horizontal[4][4] = 5;
   //   horizontal[5][5] = 5;
   //   horizontal[6][6] = 5;
     
     printf("* BATALHA NAVAL. * \n \n");
     
     printf("   ");
     for(int h = 1; h <= horizontal; h ++){
        printf("%2d ", h);
     }

       printf("       \n");

     for (int v = 0; v < vertical; v++) {
      char letra = 'A' + v;      
        printf("%2c ", letra);
        for(int h = 0; h < horizontal; h++) {
         matriz[v][h] = soma;
           printf("%2d ", matriz[v][h]);
        }
        printf(" \n");
     }
  return 0;
 }