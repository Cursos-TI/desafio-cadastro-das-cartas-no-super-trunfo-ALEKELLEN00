#include <stdio.h>

int main (){

    printf ("Desafio Supertrunfo!\n");
    printf("\n");

    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;

    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;

    printf("Digite a população cidade 1: ");
    scanf("%d", &populacao);

    printf("Digite a população cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 1: ");
    scanf("%f", &area);

    printf("Digite a area da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o pib da cidade 1: ");
    scanf("%f", &pib);

    printf("Digite o pib da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &numero_pontos_turisticos);

    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &numero_pontos_turisticos2);

    printf("\n");
    printf("Valores informados carta 1:\n");

    printf("A população é de %d \n", populacao);
    printf("A area é de %.2f \n", area);
    printf("O pib é de %.2f \n", pib);
    printf("Numero de pontos turisticos é de %d \n", numero_pontos_turisticos);

    printf("\n");
    printf("Valores informados carta 2:\n");

    printf("A população é de %d\n", populacao2);
    printf("A area é de %.2f\n", area2);
    printf("O pib é de %.2f\n", pib2);
    printf("Numero de pontos turisticos é de %d\n", numero_pontos_turisticos2);

return 0;
}