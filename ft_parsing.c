/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:19:30 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/31 15:02:23 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*parsing(char *argv, va_list ap, t_lists *list)
{
	argv++;
	if (*argv == '-' || *argv == '+' || *argv == ' ' || \
			*argv == '#' || *argv == '0')
	{
		argv = ft_flag(argv, list);
	}
	if (*argv == '*' || (*argv >= '0' && *argv <= '9'))
	{
		argv = ft_width(argv, ap, list);
	}
	if (*argv == '.' && (*(argv+1) == '*' || \
				(*(argv+1) >= '0' && *(argv+1) <= '9')))
	{
		argv = ft_accuracy(argv, ap, list);
	}
	if(data_types(argv, ap, list))
	{
	    argv++;
		// free_our_list(list); - будем подчищать этой функцией;
	}
	return (argv);
}
