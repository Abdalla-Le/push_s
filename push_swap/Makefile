# Nome do programa
NAME = push_swap

# Compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Diretórios

PRINTFDIR = Printf  # Diretório da printf
LIBFTDIR = $(PRINTFDIR)/libft  # Libft está dentro da printf

# Arquivos fontes do push_swap
SRCS = push_swap.c parser.c stack_utils.c indexing.c
OBJS = $(SRCS:%.c=%.o)

# Arquivo da printf (que já inclui a libft)
PRINTF = $(PRINTFDIR)/libftprintf.a

# Flags de include e biblioteca
INCLUDES = -I $(PRINTFDIR) -I $(LIBFTDIR)
LIBS = -L $(PRINTFDIR) -lftprintf

# Regras
all: $(PRINTF) $(NAME)

# Compilar a printf (que já compila a libft)
$(PRINTF):
	make -C $(PRINTFDIR)

# Compilar o push_swap
$(NAME): $(OBJS) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

# Criar pasta de objetos
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Limpar arquivos objetos e binários
clean:
	rm -rf $(OBJDIR)
	make -C $(PRINTFDIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(PRINTFDIR) fclean

re: fclean all

.PHONY: all clean fclean re
