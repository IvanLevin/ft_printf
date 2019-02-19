# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleonett <gleonett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/28 16:05:16 by gleonett          #+#    #+#              #
#    Updated: 2019/02/19 16:07:00 by gkshleri         ###   ########.fr        #
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
