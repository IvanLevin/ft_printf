NAME = FT_PRINTF
LNAME = libft
SRCS = *.c
LINCLUDES = libft
OBJ = *.o
NORMA = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@make -C libft fclean && make -C libft
	@gcc -I $(LINCLUDES)  $(NORMA) -c $(SRCS)
	@gcc -L libft -lft -I $(LNAME) $(NORMA) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@rm -f libft/$(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re: fclean all