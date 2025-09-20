#include <stdio.h>
// declarando as logica
// -----TORRE/RAINHA------
void movimentocima(int casa1)
{
    if(casa1 > 0)
    {
      movimentocima(casa1 - 1);//declarando o fim do loop
      printf("%d cima.\n", casa1);
    }
}
void movimentobaixo(int casa2)
{
    if(casa2 > 0)
    {
      movimentobaixo(casa2 - 1);//declarando o fim do loop
      printf("%d Baixo.\n", casa2);
    }
}
void movimentoesquerda(int casa3)
{
    if(casa3 > 0)
    {
      movimentoesquerda(casa3 - 1);//declarando o fim do loop
      printf("%d Esquerda.\n", casa3);
    }
}
void movimentodireita(int casa4)
{
    if(casa4> 0)
    {
      movimentodireita(casa4 - 1);//declarando o fim do loop
      printf("%d Direita \n", casa4);
    }
}
// -----BISPO-----
void movimentocimadireita(int casa1)
{
  if (casa1 <= 0) return; //condição de parada do codigo
  for(int direita = 0; direita <= 1; direita ++)
  {
    if (direita % 2 == 1)
    {
      printf("%d Cima. \n", casa1);
    }
    else
    {
      printf("%d Direita. \n", casa1);
    }
  }
  movimentocimadireita(casa1 - 1);
}

void movimentocimaesquerda(int casa2)
{
  if (casa2 <= 0) return;//condição de parada
  for(int esquerda = 0; esquerda <= 1; esquerda ++)
 {
   if (esquerda % 2 == 1){
    printf("%d Cima. \n", casa2);}
   else{
    printf("%d Esquerda. \n", casa2);}
 }
 movimentocimaesquerda(casa2 - 1);
}


int main(){
  
 int movimentos;

    printf("** JOGO DE XADREZ ***\n");
    
// -- TORRE --
do{
  int casa = 5;
       printf("## TORRE ##\n");
    printf("escolha um numero que reprezente seu movimento. \n");
    printf("Cima(8). \n");
    printf("Baixo(2). \n");
    printf("Esquerda(4). \n");
    printf("Direita(6). \n");
    scanf("%d", &movimentos);
    printf("Torre move-se. \n");
    
  if(movimentos == 8){
    movimentocima(casa);}
    
  else if(movimentos == 2){
    movimentobaixo(casa);}

  else if(movimentos == 4){
    movimentoesquerda(casa);}

  else if(movimentos == 6){
    movimentodireita(casa);}

  else{
      printf("OPÇÃO INVALIDA! \n");
      }
}while(movimentos != 8 && movimentos != 2 && movimentos != 4 &&movimentos != 6);
printf("\n");

// -- BISPO --
do{
int casa = 3;
       printf("## BISPO ## \n");
     printf("Escolha o movimento do bispo.\n");
     printf("(1) Move-se cima/Direita.\n");
     printf("(2) Move-se cima/Esquerda.\n");
     scanf("%d", &movimentos);

  if(movimentos == 1){
    movimentocimadireita(casa);}
  else if(movimentos == 2){
    movimentocimaesquerda(casa);}

  else
   {
    printf("OPÇÃO INVALIDA ! \n");
   }
 }while(movimentos != 1 && movimentos != 2);
printf("\n");

//  --RAINHA--
do {
  int casa = 8;
      printf("## RAINHA ## \n");
    printf("Escolha um numero que represente o seu movimento. \n");
    printf("Cima(8). \n");
    printf("Baixo(2). \n");
    printf("Esquerda(4). \n");
    printf("Direita(6). \n");
    scanf("%d", &movimentos);
    printf("rainha move-se. \n");

  if(movimentos == 8){
    movimentocima(casa);
  }
  else if(movimentos == 2){
    movimentobaixo(casa);
  }
  else if(movimentos == 4){
    movimentoesquerda(casa);
  }
  else if(movimentos == 6){
    movimentodireita(casa);
  }
  else{
    printf("MOVIMENTO INVALIDO ! \n");
  }
}while (movimentos != 8 && movimentos != 2 && movimentos != 4 && movimentos != 6);
printf("\n");

// --CAVALO--
do
{ 
    printf("## CAVALO ## \n");
  printf("Escolha o numero que represente seu movimento. \n");
  printf("(1)Cima/Direita. \n");
  printf("(2)Cima/Esquerda. \n");
  scanf("%d", &movimentos);
  if(movimentos == 1)
  {
    for(int Direita = 0; Direita < 1; Direita ++)
    {
      for(int cima = 0; cima < 2; cima ++){
        printf("%d Cima. \n", movimentos); 
      }
      printf("%d Direita. \n", movimentos);
    }
  }
  else if(movimentos == 2)
  {
    for(int Esquerda = 0; Esquerda < 1; Esquerda ++)
    {
      for(int Cima = 0; Cima < 2; Cima ++){
        printf("%d cima. \n", movimentos);
      }
      printf("%d Esquerda. \n", movimentos);
    }
  }
  else
  {
    printf("OPÇÃO INVALIDA !\n");
  }
} while(movimentos != 1 && movimentos != 2);
 
 return 0;
}