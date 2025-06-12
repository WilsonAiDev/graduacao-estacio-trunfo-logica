# Especificação Técnica - Super Trunfo de Países

## 📋 Documento de Especificação

**Projeto:** Super Trunfo de Países  
**Autor:** Wilson Oliveira  
**Disciplina:** Introdução à Programação de Computadores - Estácio  
**Data:** Junho 2025  

---

## 🎯 Objetivo

Desenvolver um sistema de cadastro e gerenciamento de cartas para o jogo Super Trunfo com temática de países e cidades, utilizando conceitos fundamentais da linguagem C.

## 📊 Estrutura de Dados

### Carta (struct)
```c
typedef struct {
    char estado[3];               // Estado (2 letras + \0)
    char codigo[4];               // Código da carta (3 chars + \0)
    char nome[50];                // Nome da cidade
    int populacao;                // População da cidade
    float area;                   // Área em km²
    float pib;                    // PIB em bilhões
    int pontos_turisticos;        // Número de pontos turísticos
    float densidade_populacional; // Calculado: População / Área
    float pib_per_capita;        // Calculado: PIB / População
} Carta;
```

## 🔧 Funcionalidades

### 1. Cadastro de Cartas
- Entrada de dados via teclado
- Validação básica de entrada
- Cálculo automático de propriedades derivadas

### 2. Exibição de Cartas
- Formatação visual atrativa
- Exibição de todos os atributos
- Interface em modo texto

### 3. Comparação de Cartas
- Comparação por qualquer atributo
- Determinação de vencedor
- Suporte a empates

## 📁 Arquitetura do Sistema

```
src/
├── main.c     - Programa principal e interface
├── cartas.c   - Implementação das funções
└── cartas.h   - Definições e protótipos
```

## 🎮 Fluxo do Programa

1. **Inicialização**
   - Exibição do título
   - Inicialização de variáveis

2. **Menu Principal**
   - Cadastrar carta
   - Exibir carta
   - Comparar cartas
   - Sair

3. **Processamento**
   - Execução da opção escolhida
   - Retorno ao menu (exceto sair)

## 🧮 Cálculos Implementados

### Densidade Populacional
```
densidade = população / área
```

### PIB per Capita
```
pib_per_capita = (PIB * 1.000.000.000) / população
```

## 🎨 Interface do Usuário

- Menu textual com bordas ASCII
- Formatação de cartas em estilo visual
- Mensagens de feedback com emojis
- Tratamento de erros com mensagens claras

## 🔍 Conceitos de C Aplicados

### Tipos de Dados
- `int` - Para população e pontos turísticos
- `float` - Para área, PIB e cálculos
- `char[]` - Para strings (estado, código, nome)

### Estruturas de Controle
- `do-while` - Loop principal do menu
- `switch-case` - Seleção de opções
- `if-else` - Validações e comparações

### Funções
- Modularização do código
- Passagem por referência (ponteiros)
- Retorno de valores

### Arrays
- Armazenamento de múltiplas cartas
- Indexação para acesso aos dados

## 🚀 Compilação e Execução

### Opção 1: Usando Makefile
```bash
make          # Compila o projeto
make run      # Compila e executa
make clean    # Limpa arquivos compilados
```

### Opção 2: Compilação Direta
```bash
gcc -Wall -Wextra -std=c99 -o super_trunfo src/*.c
./super_trunfo
```

## 📈 Possíveis Expansões

1. **Persistência de Dados**
   - Salvar cartas em arquivo
   - Carregar cartas de arquivo

2. **Validações Avançadas**
   - Verificação de códigos únicos
   - Validação de faixas de valores

3. **Interface Melhorada**
   - Cores no terminal
   - Mais opções de formatação

4. **Funcionalidades de Jogo**
   - Sistema de batalha automática
   - Ranking de cartas
   - Estatísticas do jogo

## 🎓 Objetivos Pedagógicos Atendidos

- ✅ Uso de variáveis e tipos de dados
- ✅ Aplicação de operadores aritméticos
- ✅ Implementação de estruturas de controle
- ✅ Criação e uso de funções
- ✅ Manipulação de arrays
- ✅ Uso de estruturas (structs)
- ✅ Entrada e saída formatada
- ✅ Modularização de código
