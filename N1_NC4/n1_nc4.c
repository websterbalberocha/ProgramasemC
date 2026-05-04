#include <stdio.h>

int main(){
    int idade = 25; // valor inteiro
    int quantidade = 1;
    float altura = 1.75; // ponto flutuante para colocar virgula. valores menores
    double peso = 90.3; // double e valores maiores. ele aumenta a precisão consigo trabalhar com mais precisão.
    char opcao = 'S'; // armazenar caracteres 1 caractere
    char nome[20] = "Webster Balbe Rocha"; // strings definir array para trabalhar com caracteres.
    

    //pratica inicializar a variavel, porque geralmente tem lixo na posição de memoria.

    printf("A idade é: %d\n",idade); 
    printf("O nome é: %s\n",nome);
    printf("Altura é %.2f \n",altura);
    printf("A Opção é %c \n",opcao);
    return 0;

}