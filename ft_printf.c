/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breolson <breolson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:01:47 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/29 22:51:12 by breolson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *argv, ...)
{
	va_list	ap;
	t_lists *list;
	int 	len;

	va_start(ap, argv);
	if (!(list = (t_lists*)malloc(sizeof(t_lists))))
		return (-1);
	list->len = 0;
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
			 * данных, которые нужно вывести
			 * Тут также нужно обработать /n */

			write(1, argv, 1);
			list->len += 1;
			argv++;
		}

	}
	va_end(ap);
	len = list->len;
	free(list);
	return (len); // printf возвращает кол-во выведенных байт
}
