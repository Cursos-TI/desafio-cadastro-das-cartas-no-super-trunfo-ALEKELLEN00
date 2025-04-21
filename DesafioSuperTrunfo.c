#include <stdio.h>

int main (){

    printf ("Desafio Supertrunfo!\n");
    printf("\n");

    // Declaração de variáveis da cidade 1
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;

    // Declaração de variáveis da cidade 2
    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;

    // Onde o usuário informa a população da cidade 1
    printf("Digite a população cidade 1: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%d", &populacao);

    // Onde o usuário informa a população da cidade 2
    printf("Digite a população cidade 2: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%d", &populacao2);

    // Onde o usuário informa a area da cidade 1
    printf("Digite a area da cidade 1: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%f", &area);

    // Onde o usuário informa a area da cidade 2
    printf("Digite a area da cidade 2: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%f", &area2);

    // Onde o usuário informa a pib da cidade 1
    printf("Digite o pib da cidade 1: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%f", &pib);

    // Onde o usuário informa a pib da cidade 2
    printf("Digite o pib da cidade 2: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%f", &pib2);

    // Onde o usuário informa os pontos turisticos da cidade 1
    printf("Digite o numero de pontos turisticos da cidade 1: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%d", &numero_pontos_turisticos);

    // Onde o usuário informa os pontos turisticos da cidade 2
    printf("Digite o numero de pontos turisticos da cidade 2: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%d", &numero_pontos_turisticos2);

    //Bloco de printfs que informa os valores da cidade 1
    printf("\n");
    printf("Valores informados cidade 1:\n");

    printf("A população é de %d \n", populacao);
    printf("A area é de %.2f \n", area);
    printf("O pib é de %.2f \n", pib);
    printf("Numero de pontos turisticos é de %d \n", numero_pontos_turisticos);
    printf ("Densidade populacional é de %.2f \n", populacao/area);
    printf ("Pib per capita é de %.2f \n", pib/populacao);
    
    //Bloco de printfs que informa os valores da cidade 2
    printf("\n");
    printf("Valores informados cidade 2:\n");

    printf("A população é de %d\n", populacao2);
    printf("A area é de %.2f\n", area2);
    printf("O pib é de %.2f\n", pib2);
    printf("Numero de pontos turisticos é de %d\n", numero_pontos_turisticos2);
    printf ("Densidade populacional é de %.2f \n", populacao2/area2);
    printf ("Pib per capita é de %.2f \n", pib2/populacao2);

return 0;
}