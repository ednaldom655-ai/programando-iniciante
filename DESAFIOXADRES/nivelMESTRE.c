#include <stdio.h>
// declarando as logica
// -----TORRE------
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
void movimentocimaesquerda(int casa1)
{
    if(casa1 > 0)
   {
    printf("%d Cima/Esquerda. \n", casa1);
    movimentocimaesquerda(casa1 - 1);//condição para terminar o loop
   }
}
void movimentocimadireita(int casa2)
{
    if(casa2 > 0)
    {
    printf("%d Cima/Direita. \n", casa2);
    movimentocimadireita(casa2 - 1);//condição para terminar o loop
   }
}
//  declarando os comandos do jogo
int main(){
int movimentos;

    printf("** JOGO DE XADRES ***\n");
    
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
int casa = 5;
       printf("## BISPO ## \n");
printf("Escolha o movimento do bispo.\n");
printf("(1) Move-se cima/Direita.\n");
printf("(2) Move-se cima/Equerda.\n");
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
  
    
    return 0;
}