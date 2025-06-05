# Global Config
NAME = libftprintf.a
HEADER = ft_printf.h

SRC = ft_printf.c \
ft_selector.c \
ft_putchar.c \
ft_strlen.c \
ft_putnbr.c \
ft_putstring.c \
ft_puthxd.c \
ft_putpointer.c \
ft_putunsignedint.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "Compilation successful"
	@echo "$(NAME) created"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re