# -*- MakeFile -*-

NAME 		= push_swap
LIB			= ./42_libft
OBJ_PATH	= obj
SRC_PATH	= src
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
OBJS		= $(addprefix $(OBJ_PATH)/,$(SRC:.c=.o))


$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(GCC) $(FLAGS) -c -o $@ $<

.PHONY:
	all clean fclean re 

all: lib tmp $(NAME)

lib:
	make bonus -C $(LIB)

tmp:
	@mkdir -p obj

$(NAME): $(OBJS) $(LIB)/libft.a
	$(GCC) $(FLAGS) $^ -o $(NAME)

clean:
	make clean -C $(LIB)
	rm -rf $(OBJ_PATH)

fclean: clean
	make fclean -C $(LIB)
	rm -f $(NAME)

re: clean fclean all
