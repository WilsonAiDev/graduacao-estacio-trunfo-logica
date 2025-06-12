# Makefile para o projeto Super Trunfo de Países
# Autor: Wilson Oliveira
# Data: 2025

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -std=c99 -g

# Diretórios
SRCDIR = src
OBJDIR = obj

# Nome do executável
TARGET = super_trunfo

# Arquivos fonte
SOURCES = $(wildcard $(SRCDIR)/*.c)

# Arquivos objeto
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Regra principal
all: $(TARGET)

# Criar o executável
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)
	@echo "🎉 Compilação concluída! Execute com: ./$(TARGET)"

# Compilar arquivos objeto
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Criar diretório de objetos
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Limpeza
clean:
	rm -rf $(OBJDIR) $(TARGET)
	@echo "🧹 Arquivos limpos!"

# Compilação simples (sem Makefile)
simple:
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)
	@echo "🎉 Compilação simples concluída!"

# Executar o programa
run: $(TARGET)
	./$(TARGET)

# Debugging
debug: CFLAGS += -DDEBUG -g
debug: $(TARGET)

# Verificar vazamentos de memória (se disponível)
valgrind: $(TARGET)
	valgrind --leak-check=full ./$(TARGET)

# Ajuda
help:
	@echo "Comandos disponíveis:"
	@echo "  make         - Compila o projeto"
	@echo "  make simple  - Compilação simples"
	@echo "  make run     - Compila e executa"
	@echo "  make clean   - Remove arquivos compilados"
	@echo "  make debug   - Compila com informações de debug"
	@echo "  make help    - Exibe esta ajuda"

.PHONY: all clean simple run debug help valgrind
