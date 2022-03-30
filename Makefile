# -*- MakeFile -*-

NAME = push_swap
LIB		= ./libft

# -*- Compiler -*-
GCC = gcc
FLAGS = -Wall -Wextra -Werror -O0

# -*- Includes -*-
INCL =	push_swap.h \
		$(LIB)/libft.h \

# -*- Source Files -*-
SRC =	main.c \
		push_swap.c \
		pre_sort.c \
		small_sort.c \
		radix_sort.c \
		utils.c \
		list_operations.c \
		print_utils.c \
		ft_swap_push.c \
		ft_rotate_up.c \
		ft_rotate_down.c \

# -*- Objects -*-
OBJ=$(SRC:.c=.o)

.c.o: $(SRC) $(INCL)
	$(GCC) $(FLAGS) -c -o $@ $<

all: lib $(NAME)

lib:
	make bonus -C $(LIB)

$(NAME): $(OBJ) $(LIB)/libft.a
	$(GCC) $(FLAGS) $^ -o $(NAME)

clean:
	make clean -C $(LIB)
	rm -rf $(OBJ)

fclean: clean
	make fclean -C $(LIB)
	rm -f $(NAME)

re: clean fclean all

.PHONY:
	all clean fclean re 