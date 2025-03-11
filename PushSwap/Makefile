
NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror


LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a


SRC_DIR = ./src
OBJ_DIR = ./obj
SRC = $(SRC_DIR)/main.c $(SRC_DIR)/utils.c $(SRC_DIR)/push_swap.c
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/utils.o $(OBJ_DIR)/push_swap.o


all: $(NAME)


$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(LIBFT_DIR) -c $< -o $@


$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)


clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f $(OBJ)


fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME)


re: fclean all
