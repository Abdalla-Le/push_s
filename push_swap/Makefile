# Nome do programa
NAME = push_swap

# Compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Diretórios
SRCDIR = src
OBJDIR = obj
PRINTFDIR = printf  # Diretório da printf
LIBFTDIR = $(PRINTFDIR)/libft  # Libft está dentro da printf

# Arquivos fontes do push_swap
SRCS = $(SRCDIR)/push_swap.c $(SRCDIR)/parser.c $(SRCDIR)/stack_utils.c \
       $(SRCDIR)/operations.c $(SRCDIR)/indexing.c $(SRCDIR)/radix_sort.c
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

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
# Nome do programa
NAME = push_swap

# Compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Diretórios
SRCDIR = src
OBJDIR = obj
PRINTFDIR = printf  # Diretório da printf
LIBFTDIR = $(PRINTFDIR)/libft  # Libft está dentro da printf

# Arquivos fontes do push_swap
SRCS = $(SRCDIR)/push_swap.c $(SRCDIR)/parser.c $(SRCDIR)/stack_utils.c \
       $(SRCDIR)/operations.c $(SRCDIR)/indexing.c $(SRCDIR)/radix_sort.c
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

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
