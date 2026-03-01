#include <stdio.h>
#include <string.h> // Necessário para usar strcpy

int main() { // dados relacionais para o jogo de Super Trunfo, onde cada carta representa uma cidade brasileira com suas características específicas.
    
    // --- PRIMEIRA CARTA ---
    char carta[10] = "Rara"; // raridade da carta
    char estado[50] = "Minas Gerais"; // estado onde a cidade está localizada
    char codigo[20] = "A01"; // código de identificação da carta
    char cidade[20] = "Belo Horizonte"; // nome da cidade representada na carta
    
    float populacao = 80.000; // em milhares de habitantes 
    int pontos_turisticos = 20; // número de pontos turísticos
    float area = 259.000; // em Km²
    float pib = 400.000000; // em milhões de reais
    float densidade_populacional = (float) populacao / area; // habitantes por Km²
    float pib_per_capita = (float) pib *10000 / populacao; // PIB per capita em reais

    printf("--- CARTA 1 ---\n");
    printf("Carta: %s\n Estado: %s\n Código: %s\n Cidade: %s\n População: %.3f\n Pontos turísticos: %d\n Área: %.3f\nPIB: %.3f\n Densidade populacional: %.2f\n PIB per capita: %.2f\n\n", 
            carta, estado, codigo, cidade, populacao, pontos_turisticos, area, pib, densidade_populacional, pib_per_capita);

    // --- SEGUNDA CARTA --- 
    // informações equivalentes para a segunda carta, representando outra cidade brasileira, permitindo comparações entre as duas cartas durante o jogo.
    strcpy(carta, "Lendária"); 
    strcpy(estado, "São Paulo");
    strcpy(codigo, "B01");
    strcpy(cidade, "Guarulhos");
    
    populacao = 200.000;
    pontos_turisticos = 89;
    area = 128.000; // em Km²
    pib = 800.0000000; // em milhões de reais
    densidade_populacional = (float) populacao / area; // habitantes por Km²
    pib_per_capita = (float) pib *10000 / populacao; // PIB per capita em reais

    printf("--- CARTA 2 ---\n");
    printf("Carta: %s\n Estado: %s\n Código: %s\n Cidade: %s\n População: %.3f\n Pontos turísticos: %d\n Área: %.3f\n PIB: %.3f\n Densidade populacional: %.2f\n PIB per capita: %.2f\n", 
            carta, estado, codigo, cidade, populacao, pontos_turisticos, area, pib, densidade_populacional, pib_per_capita);

    return 0;
}