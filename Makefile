NAME = libftprintf.a
SRCS = *.c libft/*.c
INCLUDES = libft
OBJ = *.o
NORMA = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(NORMA) -c $(SRCS)
	ar rc $(NAME) $(OBJ)
#	@make -C libft fclean && make -C libft
#	@gcc -I $(INCLUDES)  $(NORMA) -c $(SRCS)
#	@gcc -L libft -lft -I $(NAME) $(NORMA) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@rm -f libft/$(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re: fclean all

