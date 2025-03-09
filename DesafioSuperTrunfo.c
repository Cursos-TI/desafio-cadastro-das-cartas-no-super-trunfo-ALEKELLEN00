#include <stdio.h>

int main (){

    printf ( "Desafio Supertrunfo!\n");
    printf ("Novo comit\n");
    
    //(População (int)
    //Área (float)
    //PIB (float)
    //Número de pontos turísticos (int)

    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;

    printf("Digite a população cidade 1:");
    scanf("%d", &populacao);
   
    printf("Digite a area da cidade 1:");
    scanf("%f", &area);
 
    printf("Digite o pib da cidade 1:");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade 1:");
    scanf("%d", &numero_pontos_turisticos);

    printf("valores informados carta 1:\n");
    
    printf("A população é de %d \n", populacao);
    printf("A area é de %f\n", area);
    printf("O pib é de %f\n", pib);
    printf("Numero de pontos turisticos é de %d\n", numero_pontos_turisticos);

    return 0;
    



}