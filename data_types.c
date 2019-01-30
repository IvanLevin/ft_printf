/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_types.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:56:10 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/30 17:19:37 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     data_types(char *argv, va_list ap, t_lists *list)
{
    if (*argv == 's')
    {
        ft_printf_s(va_arg(ap, char *), list);
        return (1);
    }
    if (*argv == 'c')
    {
        ft_printf_c(list, ap);
        return (1);
    }
    if (*argv == 'd')
    {
        ft_printf_d(list, va_arg(ap, int));
        return (1);
    }
    return (0);
}