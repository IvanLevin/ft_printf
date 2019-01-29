/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:19:30 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/29 13:56:11 by gkshleri         ###   ########.fr       */
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
		printf("Address after flag: %c\n", *argv);
	}
	if (*argv == '*' || (*argv >= '0' && *argv <= '9'))
	{
		argv = ft_width(argv, ap, list);
		printf("Address after width: %c\n", *argv);
	}
//	if (argv[i] == '.' && (argv[i + 1] == '*' || \
//				(argv[i + 1] >= '0' && argv[i + 1] <= '9')))
//	{
//		argv = ft_accuracy(argv, ap);
//	}
	return (argv);
}
