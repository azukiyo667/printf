NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

HEADER = ft_printf.h

SRC = ft_printf.c handle_str.c handle_decimal.c handle_hexa.c handle_udecimal.c \
		ft_parser.c handle_char.c handle_percent.c

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re