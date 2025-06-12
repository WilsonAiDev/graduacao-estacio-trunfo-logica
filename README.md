# 🃏 Super Trunfo de Países 

<div align="center">

![Super Trunfo](https://img.shields.io/badge/Super%20Trunfo-Países-blue?style=for-the-badge)
![C Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Decision Structures](https://img.shields.io/badge/Focus-Estruturas%20de%20Decisão-green?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completo-brightgreen?style=for-the-badge)

**Projeto Acadêmico - Disciplina: Introdução à Programação de Computadores**

*Super Trunfo em C: desenvolvendo a lógica do jogo com estruturas de decisão*

</div>

---

## 📝 Sobre o Projeto

Este projeto foi desenvolvido como parte da disciplina **Introdução à Programação de Computadores** da **Estácio**, com o objetivo de criar um **jogo Super Trunfo em C** que demonstra o uso de **estruturas de decisão** para implementar a lógica de comparação entre cartas.

O projeto evolui através de três níveis de complexidade, demonstrando progressivamente o domínio de diferentes estruturas condicionais em C, desde comparações simples com `if-else` até lógicas complexas com operadores ternários e estruturas aninhadas.

### 🎯 Cenário

A **TechNova**, empresa inovadora de desenvolvimento de jogos, decidiu modernizar o clássico Super Trunfo. A versão digital do jogo precisa de uma **lógica de comparação de cartas mais robusta** e de **menus interativos** que permitam ao jogador escolher os atributos para a comparação, tornando o jogo mais dinâmico e envolvente.

Você foi contratado para implementar essas melhorias utilizando a linguagem C e seus conhecimentos em **estruturas de decisão**, criando um jogo que reaja de forma diferente a diferentes situações, tornando-se mais interativo e inteligente.

---

## 🎯 Objetivos

### 🎮 Objetivo Principal
**Desenvolver um programa em C que simule o jogo Super Trunfo**, empregando estruturas de decisão para implementar a lógica de comparação entre as cartas e menus interativos.

### 📋 Objetivos Específicos

#### **🔸 Nível 1: Comparação Básica**
- ✅ Desenvolver um programa que compare dois atributos de cartas do Super Trunfo utilizando estruturas de decisão (`if` e `if-else`)
- ✅ Implementar comparação de cartas com base em um único atributo

#### **🔸 Nível 2: Menus Interativos e Múltiplos Atributos**  
- ✅ Desenvolver o programa com menus interativos usando estrutura `switch`
- ✅ Implementar comparações de cartas usando estruturas de decisão aninhadas e encadeadas (`if-else if`)
- ✅ Permitir comparação com múltiplos atributos usando operadores lógicos

#### **🔸 Nível 3: Funcionalidades Avançadas**
- ✅ Desenvolver o programa com funcionalidades avançadas, como a comparação de dois atributos simultaneamente
- ✅ Empregar operadores ternários para lógica condicional concisa
- ✅ Integrar todas as estruturas de decisão aprendidas para criar uma lógica mais complexa

---

## 📋 Especificação de Requisitos

### 🔧 Requisitos Funcionais

| ID | Descrição | Prioridade | Estrutura de Decisão |
|----|-----------|------------|---------------------|
| RF01 | O sistema deve permitir cadastrar cartas com informações das cidades | Alta | - |
| RF02 | Deve capturar: Estado, Código, Nome da cidade, População, PIB, Área, Pontos turísticos | Alta | - |
| RF03 | Deve implementar lógica de comparação entre duas cartas usando `if` e `if-else` | Alta | **if/if-else** |
| RF04 | Deve permitir escolha de atributos através de menus interativos usando `switch` | Alta | **switch** |
| RF05 | Deve implementar comparações com múltiplos atributos usando estruturas aninhadas | Média | **if-else if aninhado** |
| RF06 | Deve usar operadores lógicos (`&&`, `\|\|`, `!`) para comparações complexas | Média | **Operadores Lógicos** |
| RF07 | Deve implementar comparação de dois atributos simultaneamente | Média | **Lógica Combinada** |
| RF08 | Deve empregar operadores ternários para decisões concisas | Baixa | **Operador Ternário** |
| RF09 | Deve calcular automaticamente propriedades derivadas (densidade, PIB per capita) | Média | **Cálculos Condicionais** |

### ⚙️ Requisitos Não Funcionais

| ID | Descrição | Prioridade | Conceito Aplicado |
|----|-----------|------------|-------------------|
| RNF01 | O sistema deve ser desenvolvido em linguagem C | Alta | **Estruturas de Decisão em C** |
| RNF02 | Deve demonstrar uso progressivo de estruturas: `if` → `switch` → `ternário` | Alta | **Evolução Gradual** |
| RNF03 | Interface deve usar menus interativos para escolha de opções | Alta | **Menu com switch** |
| RNF04 | Lógica de comparação deve ser robusta e contemplar empates | Média | **Tratamento de Casos** |
| RNF05 | Código deve demonstrar aninhamento e encadeamento de decisões | Média | **Estruturas Complexas** |
| RNF06 | Deve ter tratamento de erros usando estruturas condicionais | Baixa | **Validação Condicional** |

---

## 🎓 Temas de Estudo: Estruturas de Decisão em C

### 🔄 Progressão do Aprendizado

#### **📍 Nível 1: Estruturas Básicas**
- **Estruturas Condicionais Simples**
  - `if` - execução condicional simples
  - `if-else` - execução condicional com alternativa
  - Operadores relacionais (`>`, `<`, `>=`, `<=`, `==`, `!=`)
  - Aplicação na comparação de atributos de cartas

#### **📍 Nível 2: Estruturas Múltiplas**
- **Estruturas de Decisão Múltipla**
  - `switch-case` - seleção entre múltiplas opções
  - `default` - caso padrão
  - `break` - controle de fluxo
  - Implementação de menus interativos

- **Estruturas Aninhadas e Encadeadas**
  - `if-else if-else` - decisões em cadeia
  - Estruturas `if` aninhadas - decisões dentro de decisões
  - Operadores lógicos (`&&`, `||`, `!`)
  - Comparações de múltiplos atributos

#### **📍 Nível 3: Estruturas Avançadas**
- **Operador Ternário**
  - Sintaxe: `condição ? valor_se_verdadeiro : valor_se_falso`
  - Uso para atribuições condicionais concisas
  - Aplicação em cálculos e validações

- **Lógica Combinada**
  - Combinação de diferentes estruturas de decisão
  - Aninhamento complexo de condições
  - Comparação simultânea de dois atributos
  - Tratamento de casos especiais e empates

### 🧮 Aplicação Prática no Super Trunfo

#### **🎯 Comparação de Cartas**
```c
// Nível 1: Comparação simples com if-else
if (carta1.populacao > carta2.populacao) {
    printf("Carta 1 vence!\n");
} else if (carta1.populacao < carta2.populacao) {
    printf("Carta 2 vence!\n");
} else {
    printf("Empate!\n");
}
```

#### **🎯 Menu Interativo**
```c
// Nível 2: Menu com switch
switch (opcao) {
    case 1: compararPopulacao(); break;
    case 2: compararArea(); break;
    case 3: compararPIB(); break;
    default: printf("Opção inválida!\n");
}
```

#### **🎯 Lógica Avançada**
```c
// Nível 3: Operador ternário e lógica combinada
char* resultado = (carta1.populacao > carta2.populacao && carta1.area > carta2.area) 
                 ? "Carta 1 domina!" 
                 : (carta1.populacao < carta2.populacao && carta1.area < carta2.area) 
                 ? "Carta 2 domina!" 
                 : "Vitória mista!";
```

### 📚 Conceitos Fundamentais Abordados

#### **🔸 Tomada de Decisão**
- Estruturas que permitem ao programa "escolher" diferentes caminhos
- Comparação de valores numéricos (atributos das cartas)
- Determinação de vencedores em comparações

#### **🔸 Fluxo de Controle**
- Direcionamento da execução do programa baseado em condições
- Implementação de menus que respondem à escolha do usuário
- Validação de entradas e tratamento de erros

#### **🔸 Lógica Booleana**
- Uso de operadores lógicos para combinar condições
- Avaliação de expressões verdadeiro/falso
- Implementação de regras complexas do jogo

#### **🔸 Otimização de Código**
- Uso do operador ternário para código mais conciso
- Estruturas de decisão eficientes
- Redução de redundância na lógica condicional

---

## 🚀 Como Executar

### 📋 Pré-requisitos
- **Compilador C**: GCC ou Clang (já incluído no macOS/Linux)
- **Terminal/Console**: Para compilação e execução

### 🔧 Opções de Compilação

#### **Opção 1: Usando Makefile (Recomendado)**
```bash
# Compilar o projeto
make simple

# Executar o programa
./super_trunfo

# Limpar arquivos compilados
make clean

# Compilar e executar em um comando
make simple && ./super_trunfo
```

#### **Opção 2: Compilação Manual**
```bash
# Navegar para o diretório do projeto
cd graduacao-estacio-super-trunfo

# Compilar manualmente
gcc -Wall -Wextra -std=c99 -o super_trunfo src/main.c src/cartas.c

# Executar
./super_trunfo
```

#### **Opção 3: Compilação com Debug**
```bash
# Compilar com informações de debug
gcc -Wall -Wextra -std=c99 -g -o super_trunfo src/main.c src/cartas.c

# Executar
./super_trunfo
```

### 🎮 Como Usar o Programa

1. **Execute o programa** usando um dos métodos acima
2. **Menu Principal** será exibido com 4 opções:
   - `1` - Cadastrar nova carta
   - `2` - Exibir carta existente  
   - `3` - Comparar duas cartas
   - `4` - Sair do programa

3. **Cadastrando uma carta** (Opção 1):
   - Digite o estado (2 letras): `SP`
   - Digite o código da carta: `A01`
   - Digite o nome da cidade: `São Paulo`
   - Digite a população: `12000000`
   - Digite a área em km²: `1521.11`
   - Digite o PIB em bilhões: `687.5`
   - Digite número de pontos turísticos: `25`

4. **Comparando cartas** (Opção 3):
   - Escolha duas cartas pelo índice (0, 1, 2...)
   - Selecione o atributo para comparação
   - Veja o resultado da batalha!

### 💡 Exemplo de Uso
```bash
# 1. Compilar
make simple

# 2. Executar
./super_trunfo

# 3. No programa:
# - Cadastre pelo menos 2 cartas (opção 1)
# - Compare as cartas (opção 3)
# - Veja qual cidade vence!
```

---

## 🧪 Testes Automatizados

O projeto inclui arquivos de teste que permitem executar o programa automaticamente com dados pré-definidos, facilitando a validação das funcionalidades.

### 📋 Arquivos de Teste Disponíveis

| Arquivo | Descrição | Funcionalidades Testadas |
|---------|-----------|---------------------------|
| `teste_simples.txt` | Teste básico com 1 carta | Cadastro e exibição |
| `teste_completo.txt` | Teste completo com 2 cartas | Cadastro, exibição e comparação |
| `teste_debug.txt` | Teste para debug | Múltiplas operações |

### 🚀 Como Executar os Testes

#### **Teste Simples (1 carta)**
```bash
# Compilar e executar teste básico
make simple && ./super_trunfo < teste_simples.txt
```

#### **Teste Completo (2 cartas + comparação)**
```bash
# Compilar e executar teste completo
make simple && ./super_trunfo < teste_completo.txt
```
---

### 🐛 Problemas Comuns e Soluções

| Problema | Causa Provável | Solução |
|----------|----------------|---------|
| Programa não compila | Erro de sintaxe | `make clean && make debug` |
| Menu trava | Buffer de entrada | Pressione Enter algumas vezes |
| Cálculos errados | Dados de entrada inválidos | Verifique se números são positivos |
| Não encontra carta | Índice fora do intervalo | Use números de 0 a (total-1) |

---
## 📁 Estrutura do Projeto

```
graduacao-estacio-super-trunfo/
├── README.md
├── .gitignore
├── src/
│   ├── main.c
│   ├── cartas.c
│   └── cartas.h
└── docs/
    └── especificacao.md
```

---

## 🤝 Contribuição

Este é um projeto acadêmico individual, mas feedbacks e sugestões são sempre bem-vindos!

---

## 📜 Licença

Este projeto é desenvolvido para fins educacionais como parte do curso de graduação da Estácio.

---

<div align="center">

**Desenvolvido com ❤️ por Wilson Oliveira**

*Faculdade Estácio de Sá - Introdução à Programação de Computadores*

</div>
