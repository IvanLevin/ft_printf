

NAME = libft.a
SRC = *.c
INC = *.h
OBJ = *.o
NORMA = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(NORMA) -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
