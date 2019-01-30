/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:16:22 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/30 17:06:31 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_printf_c(t_lists *list, va_list ap)
{
    size_t len;
    size_t	output;
    int     first;
    char    *second;
    int		tmp_i;
    int		space;

    tmp_i = 0;
    list->spec = 'c';
    first = va_arg(ap, int);
    len = ft_strlen(first);
    output = list->width > len ? list->width : len;
    second = ft_strnew(output);
    space = space_amount(list, (int)len);
    if (list->minus == 0 && space > 0)
        tmp_i += fill_space(space, second, tmp_i, list);
    while (*first)
        second[tmp_i++] = *first++;
    if (list->minus && space > 0)
        tmp_i += fill_space(space, second, tmp_i, list);
    ft_print_free(&second, list, tmp_i);
}