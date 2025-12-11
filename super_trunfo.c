#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Nível Mestre
    // Cadastro, Calculos Avancados e Comparacao de Cartas

    // Variaveis da Carta 1
    char estado1;
    char codigo1[20];
    char nomeCidade1[50];
    unsigned long int populacao1; // unsigned long int para populacoes muito grandes
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1; 

    // Variaveis da Carta 2
    char estado2;
    char codigo2[20];
    char nomeCidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // --- Cadastro Carta 1 ---
    printf("--- Digite os dados da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1); // Especificador %lu
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculos Carta 1
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;
    // Super Poder: Soma de tudo + inverso da densidade
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);


    // --- Cadastro Carta 2 ---
    printf("\n--- Digite os dados da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2); // Especificador %lu
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos Carta 2
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;
    // Super Poder Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);


    // --- Comparacao de Cartas ---
    printf("\nCOMPARACAO DE CARTAS:\n");
    printf("Carta 1: %s (Super Poder: %.2f)\n", nomeCidade1, superPoder1);
    printf("Carta 2: %s (Super Poder: %.2f)\n", nomeCidade2, superPoder2);

    // A saida deve ser 1 (Carta 1 vence) ou 0 (Carta 2 vence)
    printf("\nPopulacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // Densidade Populacional (MENOR valor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}