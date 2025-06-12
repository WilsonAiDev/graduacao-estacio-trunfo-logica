#include <stdio.h>
#include <stdlib.h>
#include "cartas.h"

/**
 * Programa principal do Super Trunfo de Países
 * Desenvolvido para a disciplina Introdução à Programação de Computadores - Estácio
 * 
 * @author Wilson Oliveira
 * @version 1.0
 * @date 2025
 */

int main() {
    // Array para armazenar as cartas (máximo 10 cartas para este exemplo)
    Carta cartas[10];
    int numCartas = 0;
    int opcao, indice, atributo, resultado;
    int carta1, carta2;
    
    printf("╔════════════════════════════════════════════╗\n");
    printf("║     BEM-VINDO AO SUPER TRUNFO DE PAÍSES!   ║\n");
    printf("║                                            ║\n");
    printf("║  Projeto Acadêmico - Estácio               ║\n");
    printf("║  Disciplina: Introdução à Programação      ║\n");
    printf("║  Desenvolvido por: Wilson Oliveira         ║\n");
    printf("╚════════════════════════════════════════════╝\n");
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: // Cadastrar nova carta
                if (numCartas < 10) {
                    cadastrarCarta(&cartas[numCartas]);
                    numCartas++;
                } else {
                    printf("\n❌ Limite máximo de cartas atingido (10 cartas)!\n");
                }
                break;
                
            case 2: // Exibir carta
                if (numCartas == 0) {
                    printf("\n❌ Nenhuma carta cadastrada ainda!\n");
                } else {
                    printf("\n%d carta(s) cadastrada(s). Escolha qual exibir:\n", numCartas);
                    for (int i = 0; i < numCartas; i++) {
                        printf("  [%d] %s - %s\n", i, cartas[i].codigo, cartas[i].nome);
                    }
                    printf("\nDigite o número da carta: ");
                    scanf("%d", &indice);
                    
                    if (indice >= 0 && indice < numCartas) {
                        exibirCarta(&cartas[indice]);
                    } else {
                        printf("\n❌ Índice inválido!\n");
                    }
                }
                break;
                
            case 3: // Comparar cartas
                if (numCartas < 2) {
                    printf("\n❌ É necessário ter pelo menos 2 cartas para comparar!\n");
                } else {
                    printf("\nCartas disponíveis para comparação:\n");
                    for (int i = 0; i < numCartas; i++) {
                        printf("  [%d] %s - %s\n", i, cartas[i].codigo, cartas[i].nome);
                    }
                    
                    printf("\nEscolha a primeira carta: ");
                    scanf("%d", &carta1);
                    
                    printf("Escolha a segunda carta: ");
                    scanf("%d", &carta2);
                    
                    if (carta1 >= 0 && carta1 < numCartas && carta2 >= 0 && carta2 < numCartas && carta1 != carta2) {
                        int tipoComparacao;
                        printf("\nEscolha o TIPO de comparação:\n");
                        printf("1. Comparar por UM atributo\n");
                        printf("2. Comparar por DOIS atributos\n");
                        printf("Opção: ");
                        scanf("%d", &tipoComparacao);

                        if (tipoComparacao == 1) {
                            printf("\nEscolha o atributo para comparação:\n");
                            printf("1. População\n");
                            printf("2. Área\n");
                            printf("3. PIB\n");
                            printf("4. Pontos Turísticos\n");
                            printf("5. Densidade Populacional\n");
                            printf("6. PIB per capita\n");
                            printf("Opção: ");
                            scanf("%d", &atributo);
                            
                            if (atributo >= 1 && atributo <= 6) {
                                resultado = compararCartas(&cartas[carta1], &cartas[carta2], atributo);
                                
                                printf("\n🆚 RESULTADO DA COMPARAÇÃO 🆚\n");
                                printf("Carta 1: %s (%s)\n", cartas[carta1].nome, cartas[carta1].codigo);
                                printf("Carta 2: %s (%s)\n", cartas[carta2].nome, cartas[carta2].codigo);
                                
                                if (resultado > 0) {
                                    printf("🏆 Vencedor: %s!\n", cartas[carta1].nome);
                                } else if (resultado < 0) {
                                    printf("🏆 Vencedor: %s!\n", cartas[carta2].nome);
                                } else {
                                    printf("🤝 Empate!\n");
                                }
                            } else {
                                printf("\n❌ Atributo inválido!\n");
                            }
                        } else if (tipoComparacao == 2) {
                            int atributoEscolhido1, atributoEscolhido2;
                            printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
                            printf("1. População\n");
                            printf("2. Área\n");
                            printf("3. PIB\n");
                            printf("4. Pontos Turísticos\n");
                            printf("5. Densidade Populacional\n");
                            printf("6. PIB per capita\n");
                            printf("Opção: ");
                            scanf("%d", &atributoEscolhido1);

                            printf("\nEscolha o SEGUNDO atributo para comparação (diferente do primeiro):\n");
                            printf("1. População\n");
                            printf("2. Área\n");
                            printf("3. PIB\n");
                            printf("4. Pontos Turísticos\n");
                            printf("5. Densidade Populacional\n");
                            printf("6. PIB per capita\n");
                            printf("Opção: ");
                            scanf("%d", &atributoEscolhido2);

                            if (atributoEscolhido1 >= 1 && atributoEscolhido1 <= 6 &&
                                atributoEscolhido2 >= 1 && atributoEscolhido2 <= 6 &&
                                atributoEscolhido1 != atributoEscolhido2) {
                                
                                resultado = compararCartasDoisAtributos(&cartas[carta1], &cartas[carta2], atributoEscolhido1, atributoEscolhido2);
                                
                                printf("\n🆚 RESULTADO DA COMPARAÇÃO POR DOIS ATRIBUTOS 🆚\n");
                                printf("Carta 1: %s (%s)\n", cartas[carta1].nome, cartas[carta1].codigo);
                                printf("Carta 2: %s (%s)\n", cartas[carta2].nome, cartas[carta2].codigo);
                                // Exibir os nomes dos atributos pode ser uma melhoria futura
                                printf("Atributos comparados.\n"); 

                                if (resultado > 0) {
                                    printf("🏆 Vencedor: %s!\n", cartas[carta1].nome);
                                } else if (resultado < 0) {
                                    printf("🏆 Vencedor: %s!\n", cartas[carta2].nome);
                                } else {
                                    printf("🤝 Empate na comparação por dois atributos!\n");
                                }

                            } else {
                                printf("\n❌ Escolha de atributos inválida (devem ser entre 1 e 6 e diferentes entre si)!\n");
                            }
                        } else {
                            printf("\n❌ Tipo de comparação inválido!\n");
                        }
                    } else {
                        printf("\n❌ Índices inválidos ou iguais!\n");
                    }
                }
                break;
                
            case 4: // Sair
                salvarCartasCSV(cartas, numCartas, "cartas.csv"); // Salva as cartas antes de sair
                printf("\n👋 Obrigado por jogar Super Trunfo de Países!\n");
                printf("Projeto desenvolvido por Wilson Oliveira\n");
                break;
                
            default:
                printf("\n❌ Opção inválida! Tente novamente.\n");
                break;
        }
        
        // Pausa para o usuário ver o resultado (simplificada para testes)
        if (opcao != 4) {
            printf("\nPressione Enter para continuar...");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
        
    } while (opcao != 4);
    
    return 0;
}
