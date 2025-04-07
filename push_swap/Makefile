# Nome do programa
NAME = push_swap

# Compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

# Diretórios
PRINTFDIR = Printf
LIBFTDIR = $(PRINTFDIR)/libft  # Libft está dentro da printf

# Arquivos fontes do push_swap
SRCS = push_swap.c parser.c stack_utils.c stack_utils2.c indexing.c utils.c operations.c operations2.c radix_sort.c mini_radix.c
OBJS = $(SRCS:.c=.o)

# Arquivo da printf (que já inclui a libft)
PRINTF = $(PRINTFDIR)/libftprintf.a

# Flags de include e biblioteca
INCLUDES = -I$(PRINTFDIR) -I$(LIBFTDIR)  # <- Removido espaço depois do `-I`
LIBS = -L$(PRINTFDIR) -lftprintf

# Regra principal
all: $(PRINTF) $(NAME)
	@echo "✅ Build completa!"

# Compilar a printf (que já compila a libft)
$(PRINTF):
	@echo "🛠️  Compilando a printf..."
	@make -C $(PRINTFDIR)

# Compilar o push_swap
$(NAME): $(OBJS) $(PRINTF)
	@echo "🔧 Compilando $(NAME)..."
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

# Regra para compilar os arquivos .c em .o
%.o: %.c
	@echo "🎯 Compilando $<..."
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Limpar arquivos objetos e binários
clean:
	@echo "🧹 Limpando arquivos .o..."
	@rm -f $(OBJS)
	@make -C $(PRINTFDIR) clean

fclean: clean
	@echo "🚮 Removendo $(NAME)..."
	@rm -f $(NAME)
	@make -C $(PRINTFDIR) fclean

re: fclean all

.PHONY: all clean fclean re
