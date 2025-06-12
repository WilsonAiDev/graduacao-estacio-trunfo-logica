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
    printf("│ PIB per capita: %16.2f R$     │\n", carta->pib_per_capita);
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
 * Função para comparar duas cartas por dois atributos específicos
 * Retorna: 1 se carta1 tiver mais atributos vencedores, -1 se carta2 tiver mais, 0 se empate.
 */
int compararCartasDoisAtributos(const Carta *carta1, const Carta *carta2, int atributo1, int atributo2) {
    int vitorias_carta1 = 0;
    int vitorias_carta2 = 0;

    // Compara o primeiro atributo
    int resultado_atributo1 = compararCartas(carta1, carta2, atributo1);
    if (resultado_atributo1 > 0) {
        vitorias_carta1++;
    } else if (resultado_atributo1 < 0) {
        vitorias_carta2++;
    }

    // Compara o segundo atributo
    int resultado_atributo2 = compararCartas(carta1, carta2, atributo2);
    if (resultado_atributo2 > 0) {
        vitorias_carta1++;
    } else if (resultado_atributo2 < 0) {
        vitorias_carta2++;
    }

    // Determina o vencedor com base no número de atributos ganhos
    // Operador ternário para determinar o resultado final
    return (vitorias_carta1 > vitorias_carta2) ? 1 :
           (vitorias_carta2 > vitorias_carta1) ? -1 :
           0; // Empate se o número de vitórias for igual
}


/**
 * Função para exibir o menu principal
 */
void exibirMenu() {
    printf("\n");
    printf("╔════════════════════════════════════════════╗\n");
    printf("║          SUPER TRUNFO DE PAÍSES            ║\n");
    printf("╠════════════════════════════════════════════╣\n");
    printf("║  1. Cadastrar nova carta                   ║\n");
    printf("║  2. Exibir carta                           ║\n");
    printf("║  3. Comparar cartas                        ║\n");
    printf("║  4. Sair                                   ║\n");
    printf("╚════════════════════════════════════════════╝\n");
    printf("Escolha uma opção: ");
}

/**
 * Função para carregar cartas de um arquivo CSV.
 * Retorna o número de cartas carregadas.
 */
int carregarCartasCSV(Carta cartas[], int maxCartas, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    int numCartasCarregadas = 0; // Declarar no início da função
    char linha[256]; // Buffer para ler cada linha

    if (arquivo == NULL) {
        // perror("Info: Não foi possível abrir o arquivo CSV para leitura. Iniciando com 0 cartas.");
        printf("\nℹ️ Arquivo %s não encontrado ou não pôde ser aberto. Nenhuma carta carregada do CSV.\n", nomeArquivo); // Corrigido: removido \ antes de "
        return 0; // Retorna 0 se o arquivo não puder ser aberto
    }

    while (fgets(linha, sizeof(linha), arquivo) && numCartasCarregadas < maxCartas) {
        // Tenta parsear a linha usando sscanf
        // Formato: estado,codigo,nome,populacao,area,pib,pontos_turisticos
        int camposLidos = sscanf(linha, "%2[^,],%3[^,],%49[^,],%d,%f,%f,%d",
                                 cartas[numCartasCarregadas].estado,
                                 cartas[numCartasCarregadas].codigo,
                                 cartas[numCartasCarregadas].nome,
                                 &cartas[numCartasCarregadas].populacao,
                                 &cartas[numCartasCarregadas].area,
                                 &cartas[numCartasCarregadas].pib,
                                 &cartas[numCartasCarregadas].pontos_turisticos);

        if (camposLidos == 7) { // Verifica se todos os 7 campos foram lidos corretamente
            // Remove o newline do nome, se houver (fgets pode capturá-lo)
            cartas[numCartasCarregadas].nome[strcspn(cartas[numCartasCarregadas].nome, "\n")] = 0; // Corrigido: removido \ antes de "
            
            calcularPropriedades(&cartas[numCartasCarregadas]);
            numCartasCarregadas++;
        } else {
            // Poderia adicionar um log de erro para linhas mal formatadas
            // printf("Aviso: Linha mal formatada no CSV ignorada: %s", linha);
        }
    } // Fechamento do while

    fclose(arquivo);
    if (numCartasCarregadas > 0) {
        printf("\n✅ %d carta(s) carregada(s) com sucesso do arquivo %s!\n", numCartasCarregadas, nomeArquivo); // Corrigido: removido \ antes de "
    }
    return numCartasCarregadas;
} // Fechamento da função carregarCartasCSV


/**
 * Função para salvar as cartas atuais no arquivo CSV.
 * Sobrescreve o arquivo existente.
 */
void salvarCartasCSV(Carta cartas[], int numCartas, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w"); // Abre em modo de escrita (sobrescreve)
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo CSV para escrita");
        return;
    }

    for (int i = 0; i < numCartas; i++) {
        fprintf(arquivo, "%s,%s,%s,%d,%.2f,%.2f,%d\n",
                cartas[i].estado,
                cartas[i].codigo,
                cartas[i].nome,
                cartas[i].populacao,
                cartas[i].area,
                cartas[i].pib,
                cartas[i].pontos_turisticos);
    }

    fclose(arquivo);
    printf("\n💾 Cartas salvas com sucesso em %s!\n", nomeArquivo);
}
