#include <stdio.h>
#include <string.h> // Necessário para strcpy

int main() {
    // --- VARIÁVEIS CARTA 1 ---
    char carta1_raridade[10] = "Rara";
    char estado1[50] = "Minas Gerais";
    char codigo1[20] = "A01";
    char cidade1[20] = "Belo Horizonte";
    unsigned long populacao1 = 80000;
    unsigned int pontos1 = 20;
    float area1 = 259.00;
    float pib1 = 400.00; // Milhões
    
    float densidade1 = (float)populacao1 / area1;
    float pib_capita1 = (pib1 * 1000000) / populacao1;

    // --- VARIÁVEIS CARTA 2 ---
    char carta2_raridade[10] = "Lendária";
    char estado2[50] = "Sao Paulo";
    char codigo2[20] = "B01";
    char cidade2[20] = "Guarulhos";
    unsigned long populacao2 = 200000;
    unsigned int pontos2 = 89;
    float area2 = 128.00;
    float pib2 = 800.00; // Milhões

    float densidade2 = (float)populacao2 / area2;
    float pib_capita2 = (pib2 * 1000000) / populacao2;

    // --- EXIBIÇÃO ---
    printf("--- CARTA 1: %s ---\n", cidade1);
    printf("Raridade: %s | Populacao: %lu | Area: %.2f | Densidade: %.2f\n\n", carta1_raridade, populacao1, area1, densidade1);

    printf("--- CARTA 2: %s ---\n", cidade2);
    printf("Raridade: %s | Populacao: %lu | Area: %.2f | Densidade: %.2f\n\n", carta2_raridade, populacao2, area2, densidade2);

    // --- COMPARAÇÕES ---
    printf("--- RESULTADOS DA COMPARACAO ---\n");
    printf("Populacao (1 > 2): %d\n", populacao1 > populacao2);
    printf("Pontos Turisticos (1 > 2): %d\n", pontos1 > pontos2);
    printf("Area (1 > 2): %d\n", area1 > area2);
    printf("PIB (1 > 2): %d\n", pib1 > pib2);
    
    // Na densidade, o menor valor vence!
    printf("Densidade (Menor vence - 1 vence?): %d\n", densidade1 < densidade2);
    printf("PIB per Capita (1 > 2): %d\n", pib_capita1 > pib_capita2);

    // Super Poder (Soma de todos os atributos)
    double super1 = (double)populacao1 + area1 + pib1 + pontos1 + pib_capita1 + (1.0 / densidade1);
    double super2 = (double)populacao2 + area2 + pib2 + pontos2 + pib_capita2 + (1.0 / densidade2);

    printf("\nSuper Poder Carta 1: %.2f\n", super1);
    printf("Super Poder Carta 2: %.2f\n", super2);
    printf("Vencedor Final (Carta 1 vence?): %d\n", super1 > super2);

    return 0;
}