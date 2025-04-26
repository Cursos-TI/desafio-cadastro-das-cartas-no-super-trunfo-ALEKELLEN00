#include <stdio.h>

int main (){

    printf ("Desafio Supertrunfo!\n");
    printf("\n");

    // Declaração de variáveis da cidade 1
    unsigned long int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
    float densidade_populacional;
    float pib_percapita;
    float super_poder;

    // Declaração de variáveis da cidade 2
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float pib_percapita2;
    float super_poder2;

    // Onde o usuário informa a população da cidade 1
    printf("Digite a população cidade 1: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%lu", &populacao);

    // Onde o usuário informa a população da cidade 2
    printf("Digite a população cidade 2: ");
    // Onde o programa está anexando o valor inserido pelo usuário em sua respectiva variavel
    scanf("%lu", &populacao2);

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

    //Onde esta armazenando os valores de densidade, pib per capita e super poder cidade 1.
    densidade_populacional = populacao/area;
    pib_percapita = pib/populacao;
    super_poder = 1/densidade_populacional + (populacao + area + pib + numero_pontos_turisticos + pib_percapita);



    //Onde esta armazenando os valores de densidade, pib per capita e super poder cidade 2.
    densidade_populacional2 = populacao2/area2;
    pib_percapita2 = pib2/populacao2;
    super_poder2 = 1/densidade_populacional2 + (populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_percapita2);
    



    //Bloco de printfs que informa os valores da cidade 1
    printf("\n");
    printf("Valores informados cidade 1:\n");

    printf("A população é de %lu \n", populacao);
    printf("A area é de %.2f \n", area);
    printf("O pib é de %.2f \n", pib);
    printf("Numero de pontos turisticos é de %d \n", numero_pontos_turisticos);
    printf ("Densidade populacional é de %.2f \n", densidade_populacional);
    printf ("Pib per capita é de %.2f \n", pib_percapita);


    
    //Bloco de printfs que informa os valores da cidade 2
    printf("\n");
    printf("Valores informados cidade 2:\n");

    printf("A população é de %lu\n", populacao2);
    printf("A area é de %.2f\n", area2);
    printf("O pib é de %.2f\n", pib2);
    printf("Numero de pontos turisticos é de %d\n", numero_pontos_turisticos2);
    printf ("Densidade populacional é de %.2f \n", densidade_populacional2);
    printf ("Pib per capita é de %.2f \n", pib_percapita2);

    //Comparaçao entre as cidades
    printf("\n");
    unsigned long int compPop = populacao > populacao2;
    printf("Cidade 1 tem mais população? %lu\n", compPop);
    
    float compA = area > area2;
    printf("Cidade 1 tem área maior? %.0f\n", compA);
    
    float comP = pib > pib2;
    printf("Cidade 1 tem PIB maior? %.0f\n", comP);
    
    int comNum = numero_pontos_turisticos > numero_pontos_turisticos2;
    printf("Cidade 1 tem mais pontos turísticos? %d\n", comNum);
    
    float comDen = densidade_populacional > densidade_populacional2;
    printf("Cidade 1 tem densidade maior? %.0f\n", comDen);
    
    float comPip = pib_percapita > pib_percapita2;
    printf("Cidade 1 tem PIB per capita maior? %.0f\n", comPip);
    
    float comSup = super_poder > super_poder2;
    printf("Cidade 1 tem super poder maior? %.0f\n", comSup);    
    

return 0;
}