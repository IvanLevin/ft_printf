/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 16:03:03 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/29 15:39:20 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    search_flag(char *argv, int len, t_lists *list)
{
    int     j;

    j = 0;
    if (argv)
        if((list->flag[j] = ft_len_strchr(argv, PLUS, len)))
            j++;
    if((list->flag[j] = ft_len_strchr(argv, MINUS, len)))
        j++;
    if((list->flag[j] = ft_len_strchr(argv, SPACE, len)))
        j++;
    if((list->flag[j] = ft_len_strchr(argv, LATTICE, len)))
        j++;
    if((list->flag[j] = ft_len_strchr(argv, ZERO, len)))
        j++;
}

char    *ft_flag(char *argv, t_lists *list)
{
    int     i;
    int     len;

    i = 0;
    len = 0;
    while (argv[i] == '-' || argv[i] == '+' || argv[i] == ' ' || \
			argv[i] == '#' || argv[i] == '0')
    {
        len++;
        i++;
    }
    search_flag(argv, len, list);
    while (*argv == '-' || *argv == '+' || *argv == ' ' || \
			*argv == '#' || *argv == '0')
        argv++;
    return (argv);
}

char	*ft_width(char *argv, va_list ap, t_lists *list)
{
    size_t len;
    if (*argv == '*')
    {
        list->width = va_arg(ap, int);
        argv++;
        return (argv);
    }
    else if (*argv >= '0' && *argv <= '9')
    {
        len = ft_strlen(argv);
        list->width = ft_atoi(ft_strncpy(ft_strnew(len), argv, len));
        while (*argv >= '0' && *argv <= '9')
            argv++;
        return (argv);
    }
    return (argv);
}
//
//char	*ft_accuracy(char *argv, va_list ap)
//{
//
//}
