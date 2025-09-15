
#include <stdio.h>
 int main(){

  int movimento;
  char opcao;
  int torre = 1;
 // exibindo as perças 
do
{
           printf("## TORRE ## \n");

 printf("Digite (T) para mover a TORRE.\n");
 scanf(" %c", &opcao);

  if(opcao == 'T' || opcao =='t')
    for (int cima = 1; cima <= 5; cima++)
    {
          printf("%d Cima. \n", cima);
    }
  else
  {
    printf("OPÇÃO INVALIDA ! \n");
  }
}
while(opcao != 'T' && opcao != 't');

printf("\n");

do
{
           printf("## BISPO ##\n");

         printf("digite (1) para movimentar na DIAGONAL Direita. \n");
         printf("digite (2) para movimentar na DIAGONAL Esquerda. \n");
         scanf("%d", &movimento);

        //movimento em DIAGONAL Direita.
    if(movimento == 1)
    {
     for (int cima = 1; cima <= 5; cima++)
     {   
        if (cima % 2 == 1)
        {
            printf("%d Move-se para cima. \n", cima);
        }
        else 
        {
            printf("%d Move-se par direita. \n", cima);
        }
     }
    }
    //movimento em DIAGONAL Equerda.
    else if(movimento == 2)
    {
      for (int cima = 1; cima <= 5; cima++)
     {   
        if (cima % 2 == 1)
        {
            printf("%d Move-se para cima. \n", cima);
        }
        else 
        {
            printf("%d Move-se para Esquerda. \n", cima);
        }
     }   
    }
    else
    {
        printf("OPÇÃO INVALIDA ! \n");
    }
}
while (movimento != 1 && movimento != 2);


printf("\n");

do{    
            printf("## RAINHA ## \n");
        printf("digite (1) para Direita.\n");
        printf("digite (2) para Esquerda.\n");
        printf("digite (3) para Cima.\n");
        printf("digite (4) para Baixo.\n");
        scanf("%d", &movimento);

      //move-se para direita
    if(movimento == 1)
    {
        for (int direita = 1; direita <= 8; direita++)
     {
        printf("%d direita. \n", direita);
     }
    } 
      //move-se para esquerda
    else if(movimento == 2)
    {
        for (int esquerda = 1; esquerda <= 8; esquerda++)
     {
        printf("%d Esquerda. \n", esquerda);
     }  
    }
      //move-se cima
    else if(movimento == 3)//
    {
        for (int cima = 1; cima <= 8; cima++)
     {
        printf("%d cima. \n", cima);
     }  
    }
      //move-se para baixo
    else if(movimento == 4)
    {
        for (int baixo = 1; baixo <= 8; baixo++)
     {
        printf("%d baixo. \n", baixo);
     }  
    }
    else
    {
        printf("OPÇÃO INVALIDA ! \n");
    }
}
while (movimento != 1 && movimento != 2 && movimento != 3 &movimento != 4);      
printf("\n");

do
{
           printf("## CAVALO ## \n");
        printf("digite (1) para movimento em L para Esquerda. \n");
        printf("Digite (2) para movimento em L para Direita. \n");
        scanf("%d", &movimento);
        //move-se cima/esquerda
    if(movimento == 1)
    {
     while (movimento == 1)
     {
        for(int passo = 1; passo <= 2; passo ++)
     {
        printf("%d cima. \n", passo);
     }
      printf("%d esquerda \n", movimento);
      movimento = 0;
     } 
    }
       
    // move-se para cima/direita.
    else if(movimento == 2)
    {
     while (movimento == 2)
      {
         for(int passo = 1; passo <= 2; passo ++)
         {
            printf("%d cima \n", passo);
         }
         printf("%d direita \n", movimento);
         movimento = 0;
      }
    }
    else
    {
      printf("OPÇÃO INVALIDA ! \n");
    }
}
while (movimento != 1 && movimento != 2);
printf("\n");

 return 0;
}