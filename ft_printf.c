/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:01:47 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/29 17:32:26 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *argv, ...)
{
	va_list	ap;
	t_lists *list;

	va_start(ap, argv);
	list = (t_lists*)malloc(sizeof(t_lists));
	while (*argv)
	{
		if (*argv == '%')
		{
			argv = parsing((char *)argv, ap, list);
			// функция пропускающая проценты и их содержание
		}
		else
		{
			/* какая - то фукнция для обработки обычных
			 * данных, которые нужно вывести */

			printf("%c", *argv);
			argv++;
		}

	}
	va_end(ap);
	return (0);
}
