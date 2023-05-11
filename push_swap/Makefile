NAME	= push_swap

HEADER	= push_swap.h

SRCS 	= $(wildcard *c) $(wildcard idksomealgo/*c)

OBJS	= $(SRCS:c=o)

CC		= gcc

CFLAGS	= -fsanitize=address -g -ggdb
RM		= rm -f

LIBFT 	= libft/libft.a

LIBFT_DIR = libft

all: $(NAME) 

.SILENT: $(OBJS)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR) --silent
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(LIBFT_DIR) -lft

clean:
	@rm -f $(OBJS)
	@make -s clean -C $(LIBFT_DIR)

fclean: clean
	@rm -f $(NAME)
	@make -s fclean -C $(LIBFT_DIR)

re: fclean all

r:
	make re && make clean && clear && ./push_swap 1 2 3 4
.PHONY: all clean fclean re