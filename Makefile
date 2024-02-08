NAME = push_swap

SRC =	main.c \
		is_error.c \
		get_elem.c \
		fill_pile.c \
		analyze_pile.c \
		numbers_in_order.c \
		sort_three.c \
		turkish_algo.c \
		put_on_top.c \
		determine_target_under.c \
		determine_target_above.c \
		determine_max.c \
		determine_min.c \
		determine_cheapest.c \
		upd_costs.c \
		upd_is_min.c \
		upd_is_max.c \
		upd_indexes.c \
		upd_above_med.c \
		upd_main_properties.c \
		i_swap.c \
		i_rotate.c \
		i_reverse_rotate.c \
		i_push.c \
		utils/free_tab.c \
		utils/find_smallest_cost.c \
		utils/find_biggest_cost.c \
		utils/lstnew.c \
		utils/lstadd_back.c \
		utils/lstlast.c \
		utils/lstsize.c \
		utils/clear_pile.c \
		utils/get_min.c \
		utils/get_max.c \
		utils/print_pile.c \
		utils/print_piles.c \

OBJ = ${SRC:.c=.o}

INCLUDES = push_swap.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./Libft

CHECKER_PATH = ./Checker

LIBFT_NAME = libft.a

CHECKER_NAME = checker

%.o: %.c ${INCLUDES}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJ} ${LIBFT_PATH}/${LIBFT_NAME}
	${CC} ${CFLAGS} -o ${NAME} ${SRC} -L${LIBFT_PATH} -lft

all: ${NAME}

${LIBFT_PATH}/${LIBFT_NAME}:
	make -C ${LIBFT_PATH}

${CHECKER_PATH}/${CHECKER_NAME}:
	make -C ${CHECKER_PATH}

bonus: all ${CHECKER_PATH}/${CHECKER_NAME}

clean:
	rm -f ${OBJ}
	make clean -C ${LIBFT_PATH}
	make clean -C ${CHECKER_PATH}

fclean: clean
	rm -rf ${NAME}
	rm -rf ${LIBFT_PATH}/${LIBFT_NAME}
	rm -rf ${CHECKER_NAME}

re: fclean all

.PHONY: all re fclean clean bonus
