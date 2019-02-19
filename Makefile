# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/19 10:24:11 by gkshleri          #+#    #+#              #
#    Updated: 2019/02/19 11:17:55 by gkshleri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = *.c libft/*.c
INCLUDES = libft
OBJ = *.o
NORMA = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(NORMA) -c $(SRCS)
	ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@rm -f libft/$(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re: fclean all
