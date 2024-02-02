NAME = libft.a

SRC = ft_atoi.c \
      ft_atoi_base.c \
      ft_atol.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_check_base.c \
      ft_convert_base.c \
      ft_countwords.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_ischarset.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_isspace.c \
      ft_itoa.c \
      ft_itoa_base.c \
      ft_lstadd_back.c \
      ft_lstadd_front.c \
      ft_lstclear.c \
      ft_lstdelone.c \
      ft_lstlast.c \
      ft_lstmap.c \
      ft_lstnew.c \
      ft_lstsize.c \
      ft_lstiter.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_numlen.c \
      ft_numlen_base.c \
      ft_printf.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_split.c \
      ft_strchr.c \
      ft_strdup.c \
      ft_striteri.c \
      ft_strjoin.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strmapi.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strtrim.c \
      ft_substr.c \
      ft_tolower.c \
      ft_toupper.c \
      pf_checkcase.c \
      pf_eval_format.c \
      pf_itoa_base.c \
      pf_print_char.c \
      pf_print_colored_str.c \
      pf_print_hexal.c \
      pf_print_hexau.c \
      pf_print_int.c \
      pf_print_pointer.c \
      pf_print_str.c \
      pf_print_uint.c \
      pf_unbrlen.c \

INCLUDES = libft.h

OBJ = ${SRC:.c=.o}

CC = cc

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

%.o: %.c ${INCLUDES}
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY : all clean fclean re
