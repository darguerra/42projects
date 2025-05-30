##### MAKEFILE #####

# Global Config
NAME = libftprintf.a
HEADER = libftprintf.h

SRC = ft_printf.c \
ft_selector.c \
ft_putchar.c \
ft_strlen.c \
ft_putnbr.c \

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) r $(NAME) $(OBJ)
	@echo "Compilation succesful"
	@echo "$(NAME) created"
$(OBJ): $(SRC)
	$(CC) -fPIC $(CFLAGS) -c $(SRC)
	gcc -shared -o libft.so $(OBJ)
so: 
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re