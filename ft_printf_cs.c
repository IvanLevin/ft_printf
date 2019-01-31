/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breolson <breolson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 01:26:55 by breolson          #+#    #+#             */
/*   Updated: 2019/01/31 12:24:03 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			fill_space(int space, char *tmp, int tmp_i, t_lists *list)
{
	int		i;

	i = 0;
	while (space > 0)
	{
		if (list->zero == 0)
			tmp[tmp_i++] = ' ';
		else if (list->zero == 1)
			tmp[tmp_i++] = '0';
		space--;
		i++;
	}
	return (i);
}

int			space_amount(t_lists *list, int len)
{
	if (len > 0 && list->width > len)
		return (list->width - len);
	else if (!len && list->width)
		return (list->width);
	return (0);
}

void		ft_printf_s(char *str, t_lists *list)
{
	size_t	len;	//длина пришедшей строки
	size_t	output;	//длина выходной строки
	char	*tmp;
	int		tmp_i; // индекс для сохранения позиции на выводе
	int		space; // кол - во пробелов(либо нулей)

    list->spec = 's';
	tmp_i = 0;
	len = ft_strlen(str) ;
	if (!str)
		return ; // неправильно, надо кидать нули или пробелы
	output = list->width > (int)len ? list->width : len;
	tmp = ft_strnew(output);
	space = space_amount(list, (int)len);
	if (list->minus == 0 && space > 0)
		tmp_i += fill_space(space, tmp, tmp_i, list);
	while (*str)
		tmp[tmp_i++] = *str++;
	if (list->minus == 1 && space > 0)
		tmp_i += fill_space(space, tmp, tmp_i, list);
	ft_print_free(tmp, list, tmp_i);
}
