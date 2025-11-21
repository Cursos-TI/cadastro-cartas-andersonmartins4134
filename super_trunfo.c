#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Países
    // Nível: Novato
    // Objetivo: O programa deve ler os dados de duas cartas e exibir as informações na tela.
    
    // --- Declaração das Variáveis para a Carta 01 ---
    // As variáveis abaixo armazenam as informações da primeira carta
    char estado1;               // Armazena a letra do estado (A-H)
    char codigo1[20];           // Armazena o código da carta (ex: A01)
    char nomeCidade1[50];       // Armazena o nome da cidade
    int populacao1;             // Armazena a população
    float area1;                // Armazena a área em km²
    float pib1;                 // Armazena o PIB
    int pontosTuristicos1;      // Armazena a quantidade de pontos turísticos

    // --- Declaração das Variáveis para a Carta 02 ---
    // As variáveis abaixo armazenam as informações da segunda carta
    char estado2;
    char codigo2[20];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Entrada de Dados: Carta 01 ---
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1); // O espaço antes de %c serve para limpar o buffer do teclado

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade1); // Lê o nome da cidade (apenas uma palavra)

    printf("População: ");
    scanf("%d", &populacao1); // Lê um número inteiro

    printf("Área em km²: ");
    scanf("%f", &area1); // Lê um número decimal (float)

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrada de Dados: Carta 02 ---
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2); 

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Exibição dos Dados (Saída) ---
    // Imprime na tela os dados coletados de ambas as cartas
    
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f limita a 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}