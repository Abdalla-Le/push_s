
NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

PRINTFDIR = Printf
LIBFTDIR = $(PRINTFDIR)/libft 

SRCS = push_swap.c parser.c stack_utils.c stack_utils2.c indexing.c utils.c operations.c operations2.c radix_sort.c mini_radix.c

OBJS = $(SRCS:.c=.o)

PRINTF = $(PRINTFDIR)/libftprintf.a

INCLUDES = -I$(PRINTFDIR) -I$(LIBFTDIR)  
LIBS = -L$(PRINTFDIR) -lftprintf

all: $(PRINTF) $(OBJS) $(NAME)

$(PRINTF):
	@make -C $(PRINTFDIR)

$(NAME): $(OBJS) $(PRINTF)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

.c.o:
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make -C $(PRINTFDIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(PRINTFDIR) fclean

re: fclean all

.PHONY: all clean fclean re
