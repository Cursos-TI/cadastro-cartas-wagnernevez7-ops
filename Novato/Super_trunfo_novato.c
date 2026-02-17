#include <stdio.h>
#include <string.h> // Necessário para usar strcpy

int main() {
    // --- PRIMEIRA CARTA ---
    char carta[10] = "Rara";
    char estado[50] = "Minas Gerais";
    char codigo[20] = "A01";
    char cidade[20] = "Belo Horizonte";
    
    int populacao = 100000; 
    int pontos_turisticos = 20;
    float area = 259.000; // em Km²
    float pib = 400.000; // em bilhões de reais

    printf("--- CARTA 1 ---\n");
    printf("Carta: %s\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nPontos turísticos: %d\nÁrea: %.3f\nPIB: %.3f\n\n", 
            carta, estado, codigo, cidade, populacao, pontos_turisticos, area, pib);

    // --- SEGUNDA CARTA ---
    strcpy(carta, "Lendária"); 
    strcpy(estado, "São Paulo");
    strcpy(codigo, "B01");
    strcpy(cidade, "Guarulhos");
    
    populacao = 1000000;
    pontos_turisticos = 89;
    area = 128.000; // em Km²
    pib = 950.000; // em bilhões de reais

    printf("--- CARTA 2 ---\n");
    printf("Carta: %s\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nPontos turísticos: %d\nÁrea: %.3f\nPIB: %.3f\n", 
            carta, estado, codigo, cidade, populacao, pontos_turisticos, area, pib);

    return 0;
}