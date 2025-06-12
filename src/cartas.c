#include <stdio.h>
#include <string.h>
#include "cartas.h"

/**
 * Função para cadastrar uma nova carta
 * Recebe os dados do usuário e calcula as propriedades derivadas
 */
void cadastrarCarta(Carta *carta) {
    printf("\n=== CADASTRO DE CARTA ===\n");
    
    // Entrada de dados básicos
    printf("Digite o estado (2 letras): ");
    scanf("%2s", carta->estado);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", carta->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", carta->nome);  // Lê até 49 caracteres incluindo espaços
    
    printf("Digite a população: ");
    scanf("%d", &carta->populacao);
    
    printf("Digite a área (km²): ");
    scanf("%f", &carta->area);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    
    // Calcular propriedades derivadas
    calcularPropriedades(carta);
    
    printf("\n✅ Carta cadastrada com sucesso!\n");
}

/**
 * Função para calcular propriedades derivadas da carta
 */
void calcularPropriedades(Carta *carta) {
    if (carta->area > 0) {
        carta->densidade_populacional = (float)carta->populacao / carta->area;
    } else {
        carta->densidade_populacional = 0;
    }
    
    if (carta->populacao > 0) {
        carta->pib_per_capita = (carta->pib * 1000000000) / carta->populacao; // PIB em reais
    } else {
        carta->pib_per_capita = 0;
    }
}

/**
 * Função para exibir os dados de uma carta
 */
void exibirCarta(const Carta *carta) {
    printf("\n┌─────────────────────────────────────────┐\n");
    printf("│           CARTA SUPER TRUNFO            │\n");
    printf("├─────────────────────────────────────────┤\n");
    printf("│ Estado: %-31s │\n", carta->estado);
    printf("│ Código: %-31s │\n", carta->codigo);
    printf("│ Cidade: %-31s │\n", carta->nome);
    printf("├─────────────────────────────────────────┤\n");
    printf("│ População: %28d │\n", carta->populacao);
    printf("│ Área: %30.2f km²│\n", carta->area);
    printf("│ PIB: %27.2f bilhões│\n", carta->pib);
    printf("│ Pontos Turísticos: %17d    │\n", carta->pontos_turisticos);
    printf("├─────────────────────────────────────────┤\n");
    printf("│ Densidade Pop.: %16.2f hab/km²│\n", carta->densidade_populacional);
    printf("│ PIB per capita: %16.2f R$    │\n", carta->pib_per_capita);
    printf("└─────────────────────────────────────────┘\n");
}

/**
 * Função para comparar duas cartas por um atributo específico
 * Retorna: 1 se carta1 > carta2, -1 se carta1 < carta2, 0 se iguais
 */
int compararCartas(const Carta *carta1, const Carta *carta2, int atributo) {
    switch (atributo) {
        case ATRIBUTO_POPULACAO:
            if (carta1->populacao > carta2->populacao) return 1;
            if (carta1->populacao < carta2->populacao) return -1;
            return 0;
            
        case ATRIBUTO_AREA:
            if (carta1->area > carta2->area) return 1;
            if (carta1->area < carta2->area) return -1;
            return 0;
            
        case ATRIBUTO_PIB:
            if (carta1->pib > carta2->pib) return 1;
            if (carta1->pib < carta2->pib) return -1;
            return 0;
            
        case ATRIBUTO_PONTOS_TURISTICOS:
            if (carta1->pontos_turisticos > carta2->pontos_turisticos) return 1;
            if (carta1->pontos_turisticos < carta2->pontos_turisticos) return -1;
            return 0;
            
        case ATRIBUTO_DENSIDADE:
            if (carta1->densidade_populacional > carta2->densidade_populacional) return 1;
            if (carta1->densidade_populacional < carta2->densidade_populacional) return -1;
            return 0;
            
        case ATRIBUTO_PIB_PER_CAPITA:
            if (carta1->pib_per_capita > carta2->pib_per_capita) return 1;
            if (carta1->pib_per_capita < carta2->pib_per_capita) return -1;
            return 0;
            
        default:
            return 0;
    }
}

/**
 * Função para exibir o menu principal
 */
void exibirMenu() {
    printf("\n╔════════════════════════════════════════════╗\n");
    printf("║          SUPER TRUNFO DE PAÍSES            ║\n");
    printf("╠════════════════════════════════════════════╣\n");
    printf("║  1. Cadastrar nova carta                   ║\n");
    printf("║  2. Exibir carta                           ║\n");
    printf("║  3. Comparar cartas                        ║\n");
    printf("║  4. Sair                                   ║\n");
    printf("╚════════════════════════════════════════════╝\n");
    printf("Escolha uma opção: ");
}
