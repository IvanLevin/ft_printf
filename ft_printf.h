/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:02:44 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/27 17:19:31 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/includes/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

define struct	t_lists
{
	char		*arr;
	char		*flag;
	int 		width;
}				s_lists

int		ft_printf(const char *argv, ...);
int		parsing(char *argv, va_list ap);
char	*ft_flag(char **argv);
char	*ft_width(char **argv, va_list ap);
char	*ft_accuracy(char **argv, va_list ap);

#endif
