#include <stdio.h>

int main(){
    int idade = 24;
    int sala = 1234;
    float altura;
    char nome[25];
    
    printf("qual seu nome : \n");
    scanf("%s", nome);

    printf("qual sua idade: \n");
    scanf("%d", &idade);

    printf("qual o numero de sua sala: \n");
    scanf("%d", &sala);

    printf("qual sua altura : \n");
    scanf("%f", &altura);

  

    printf("nome do aluno: %s - sala: %d\n", nome, sala);
    printf("idade : %d - altura: %.2f\n", idade, altura);

    return 0;




}