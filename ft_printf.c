/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:01:47 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/27 20:49:13 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *argv, ...)
{
	va_list	ap;
	t_lists *list;
	int		i;

	i = 0;
	va_start(ap, argv);
	list = (t_lists*)malloc(sizeof(t_lists));
	while (argv[i])
	{
		if (argv[i] == '%')
		{
			parsing((char *)argv, ap, list);
			i++;
		}
		else
			printf("%c", argv[i]);
			/* какая - то фукнция для обработки обычных
			 * данных, которые нужно вывести */
		i++;
	}
	va_end(ap);
	return (0);
}
