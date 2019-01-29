/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:02:44 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/29 17:05:49 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define PLUS '+'
# define MINUS '-'
# define SPACE ' '
# define LATTICE '#'
# define ZERO '0'

#include "libft/includes/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct	s_lists
{
	char		flag[5];
	int 		width;
	int         accouracy;
}				t_lists;

int     ft_printf(const char *argv, ...);
char    *parsing(char *argv, va_list ap, t_lists *list);
char	*ft_flag(char *argv, t_lists *list);
void    search_flag(char *argv, int len, t_lists *list);
char	*ft_width(char *argv, va_list ap, t_lists *list);
char	*ft_accuracy(char *argv, va_list ap, t_lists *list);

#endif
