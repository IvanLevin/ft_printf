/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breolson <breolson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 05:32:58 by breolson          #+#    #+#             */
/*   Updated: 2019/01/30 17:28:39 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// печатает строку, фришит память + запоминает сколько байт вывел

void		ft_print_free(char **str, t_lists *list, int max)
{
	char	*tmp;
	int 	i;

	i = 0;
	if (!str || !*str)
		return ;
	tmp = *str;
	while (max)
	{
		write(1, tmp++, 1);
		max--;
		i++;
	}
	free(*str);
	*str = NULL;
	list->len += i;
}
