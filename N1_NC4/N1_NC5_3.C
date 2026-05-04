#include <stdio.h>

int main(){
    int idade ; 
    float altura; 
    double peso; 
    char opcao; 
    char nome[20]; 
    
    printf("Digite a sua idade \n");
    scanf("%d", &idade);
    printf("A Idade é : %d \n",idade);

    printf("Digite a Sua Altura:");
    scanf("%f",&altura);
    printf("A Altura é: %f\n",altura);

    printf("Digite Seu Nome: ");
    scanf("%s", nome);
    printf("O nome é %s ",nome);

    printf("Digite a opção: \n");
    scanf(" %c", &opcao);
    printf("A opção é: %c ",opcao);


    return 0;

}