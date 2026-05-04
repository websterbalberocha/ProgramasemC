#include <stdio.h>

int main(){

    char estado,estado2 = 's';
    char codigo[10],codigo2[10];
    char nomecidade[100],nomecidade2[100] ;    
    int populacao,populacao2;
    float areakm2,areakm22;
    float pib,pib2;
    int numeropontosturisticos,numeropontosturisticos2;


    printf("Digite a inicial do Estado com uma letra  \n");
    scanf(" %c",&estado);

    printf("Digite o Codigo  \n");
    scanf("%s",codigo);

    printf("Digite o Nome da Cidade  \n");
    scanf(" %s",nomecidade);

    printf("Digite a Populacao  \n");
    scanf("%d",&populacao);

    printf("Digite a Area em Km2  \n");
    scanf("%f",&areakm2);
    
    printf("Digite o PIB  \n");
    scanf(" %f",&pib);    

    printf("Digite o Numero de Pontos Turisticos  \n");
    scanf(" %d",&numeropontosturisticos); 

    printf("Carta: 1 \n");
    printf("Estado: %c\n",estado);
    printf("Código %s\n",codigo);
    printf("Nome da Cidade: %s\n",nomecidade);
    printf("População: %d\n",populacao);
    printf("Área: %f\n",areakm2);
    printf("PIB: %f\n",pib);
    printf("Número de Pontos Turísticos: %d\n",numeropontosturisticos);

// Segundo Carta
    printf("Digite a inicial do Estado dois com uma letra  \n");
    scanf(" %c",&estado2);

    printf("Digite o Codigo  \n");
    scanf("%s",codigo2);

    printf("Digite o Nome da Cidade  \n");
    scanf(" %s",nomecidade2);

    printf("Digite a Populacao  \n");
    scanf("%d",&populacao2);

    printf("Digite a Area em Km2  \n");
    scanf("%f",&areakm22);
    
    printf("Digite o PIB  \n");
    scanf(" %f",&pib2);    

    printf("Digite o Numero de Pontos Turisticos  \n");
    scanf(" %d",&numeropontosturisticos2); 
// Imprimindo na tela os dados
    printf("Carta: 2 \n");
    printf("Estado: %c\n",estado2);
    printf("Código %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nomecidade2);
    printf("População: %d\n",populacao2);
    printf("Área: %f\n",areakm22);
    printf("PIB: %f\n",pib2);
    printf("Número de Pontos Turísticos: %d\n",numeropontosturisticos2);
    
    return 0;
}