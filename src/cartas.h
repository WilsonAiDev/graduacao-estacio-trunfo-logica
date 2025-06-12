#ifndef CARTAS_H
#define CARTAS_H

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[3];        // Ex: "SP", "RJ"
    char codigo[4];        // Ex: "A01", "B05"
    char nome[50];         // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área em km²
    float pib;             // PIB em bilhões
    int pontos_turisticos; // Número de pontos turísticos
    
    // Propriedades calculadas
    float densidade_populacional;  // População / Área
    float pib_per_capita;         // PIB / População
} Carta;

// Protótipos das funções
void cadastrarCarta(Carta *carta);
void exibirCarta(const Carta *carta);
void calcularPropriedades(Carta *carta);
int compararCartas(const Carta *carta1, const Carta *carta2, int atributo);
int compararCartasDoisAtributos(const Carta *carta1, const Carta *carta2, int atributo1, int atributo2);
void exibirMenu();
int carregarCartasCSV(Carta cartas[], int maxCartas, const char *nomeArquivo); // Protótipo adicionado anteriormente
void salvarCartasCSV(Carta cartas[], int numCartas, const char *nomeArquivo);

// Constantes para comparação
#define ATRIBUTO_POPULACAO 1
#define ATRIBUTO_AREA 2
#define ATRIBUTO_PIB 3
#define ATRIBUTO_PONTOS_TURISTICOS 4
#define ATRIBUTO_DENSIDADE 5
#define ATRIBUTO_PIB_PER_CAPITA 6

#endif // CARTAS_H
