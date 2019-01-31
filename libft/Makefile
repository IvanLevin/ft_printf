# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 15:34:29 by gkshleri          #+#    #+#              #
#    Updated: 2019/01/31 14:54:47 by gkshleri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# **************************************************************************** #

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
