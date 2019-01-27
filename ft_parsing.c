/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:19:30 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/27 16:16:02 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		parsing(char *argv, va_list ap)
{
	int		i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+' || argv[i] == ' ' || \
			argv[i] == '#' || argv[i] == '0')
	{
		argv = ft_flag(argv);
	}
	if (argv[i] == '*' || (argv[i] >= '0' && argv[i] <= '9'))
	{
		argv = ft_width(argv, ap);

	}
	if (argv[i] == '.' && (argv[i + 1] == '*' || \
				(argv[i + 1] >= '0' && argv[i + 1] <= '9')))
	{
		argv = ft_accuracy(argv, ap);
	}
	return (1);
}
