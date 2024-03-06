# Compiler to use
CC = gcc

# Flags to pass to the compiler
CFLAGS = -Wall -Wextra -std=c11

# Directories
SRCDIR = src
BUILDDIR = build

# Source files
SRC = $(wildcard $(SRCDIR)/*.c)

# Object files
OBJ = $(SRC:$(SRCDIR)/%.c=$(BUILDDIR)/%.o)

# Target executable
TARGET = $(BUILDDIR)/main

# Default rule
all: $(TARGET)

# Rule to compile source files into object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link object files into the final executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)
