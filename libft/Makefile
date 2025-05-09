###### MAMAMAKEFILE ######

# Global Config
NAME = libft.a
HEADER = libft.h

SRC = ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_strlen.c ft_isalnum.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) r $(NAME) -o $(OBJ)
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