#include <stdio.h>

int main(){

    int idade,matricula =0;
    float altura = 0;
    char nome[50] ;

    printf("Digite sua idade:\n");
    scanf("%d",&idade);

    printf("Digite sua Altura: \n");
    scanf("%f", &altura);    

    printf("Digite o Nome : \n");
    scanf("%s",&nome);

    printf("Digite sua Matricula:  \n");
    scanf("%d",&matricula); 

    printf("Nome do Aluno: %s - Matricula: %d \n",nome,matricula);
    printf("Idade: %d - Altura: %.2f",idade,altura);


    return 0;
}