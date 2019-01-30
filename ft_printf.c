/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breolson <breolson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:01:47 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/30 11:57:32 by gkshleri         ###   ########.fr       */
/*   Updated: 2019/01/30 08:00:34 by breolson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	initialize(t_lists *list) // если не занулить, каждому полю присваивается 
//рандомное значение и все идет по пизде
{
	list->spec = 0;
	list->len = 0;
	list->minus = 0;
	list->zero = 0;
	list->width = 0;
	list->accouracy = 0;
}

int		ft_printf(const char *argv, ...)
{
	va_list	ap;
	t_lists *list;
	int 	len;

	va_start(ap, argv);
	if (!(list = (t_lists*)malloc(sizeof(t_lists))))
		return (-1);
	list->len = 0;

	// !!! структуру надо занулять при каждой инициализации!
	while (*argv)
	{
		if (*argv == '%')
		{
			initialize(list);
			argv = parsing((char *)argv, ap, list);
			// функция пропускающая проценты и их содержание
		}
		else
		{
			/* какая - то фукнция для обработки обычных
			 * данных, которые нужно вывести */

			write(1, argv, 1); // вот она
			list->len += 1;
			argv++;
		}

	}
	va_end(ap);
	len = list->len;
	free(list);
	return (len); // printf возвращает кол-во выведенных байт
}
