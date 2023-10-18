# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g -I../include
SRC_FILES = main.c ft_printf.c ft_printf_conv.c ft_printf_hex
OBJ_DIR = ../obj
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
OUTPUT = print

# Makefile targets
all: $(OUTPUT)

$(OUTPUT): $(OBJ_FILES)
	@echo "Creating executable: $(OUTPUT)"
	@$(CC) $(CFLAGS) -o $(OUTPUT) $(OBJ_FILES)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ_FILES)

fclean: clean
	@rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean fclean re

