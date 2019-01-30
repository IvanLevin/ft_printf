/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breolson <breolson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 01:26:55 by breolson          #+#    #+#             */
/*   Updated: 2019/01/30 17:27:25 by gkshleri         ###   ########.fr       */
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
	int 	len;	//длина пришедшей строки

	int		output;	//длина выходной строки
	// если ширина из list->width меньше длины строки, просто печатаем
	// если ширина больше
	// пихаем либо слева либо справа, оставшееся место заполняем  '0' или ' '
	// 
	char	*tmp;
	int		tmp_i; // индекс для сохранения позиции на выводе
	int		space; // кол - во пробелов(либо нулей)
	int		zero;

	//printf("\033[1;31mFLAG minus: %d\nFLAG zero: %d\n",list->minus, list->zero);
	//printf("\033[1;31mWIDTH: %d\n",list->width);
	tmp_i = 0;
	len = ft_strlen(str) ;
	// ************************
	if (!str)
		return ; // неправильно, надо кидать нули или пробелы
	//				если есть флаг 0 и/или '-' + модификатор ширины,  
	//		например		printf(""%010s"");

	// len = (list->accouracy > len) ? list->accouracy : len;
	output = list->width > len ? list->width : len;
	tmp = ft_strnew(output);
	space = space_amount(list, len);
	if (list->minus == 0 && space > 0)
	{
		tmp_i += fill_space(space, tmp, tmp_i, list);
		//printf("\nIIII: %d\n", i);
		// printf("!%s!", tmp);
	}
	while (*str)
		tmp[tmp_i++] = *str++;
	// printf("!!%s !!\n", tmp);
	if (list->minus && space > 0)
		tmp_i += fill_space(space, tmp, tmp_i, list);
	ft_print_free(&tmp, list, tmp_i);
}
