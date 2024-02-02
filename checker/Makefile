NAME = checker

SRC =	main.c \
		is_error.c \
		fill_pile.c \
		get_elem.c \
		upd_all.c \
		upd_above_med.c \
		upd_indexes.c \
		upd_is_max.c \
		upd_is_min.c \
		launch_checker.c \
		utils/clear_pile.c \
		utils/free_tab.c \
		utils/lstadd_back.c \
		utils/lstlast.c \
		utils/lstnew.c \
		utils/lstsize.c \
		utils/get_max.c \
		utils/get_min.c \

OBJ = ${SRC:.c=.o}

INCLUDES = checker.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./Libft

LIBFT_NAME = libft.a

%.o: %.c ${INCLUDES}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJ} ${LIBFT_PATH}/${LIBFT_NAME}
	${CC} ${CFLAGS} -o ${NAME} ${SRC} -L${LIBFT_PATH} -lft

all: ${NAME}

${LIBFT_PATH}/${LIBFT_NAME}:
	make -C ${LIBFT_PATH}

clean:
	rm -f ${OBJ}
	make clean -C ${LIBFT_PATH}

fclean: clean
	rm -rf ${NAME}
	make fclean -C ${LIBFT_PATH}

re: fclean all

.PHONY: all re fclean clean
