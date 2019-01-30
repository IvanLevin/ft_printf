/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breolson <breolson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:19:30 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/30 17:27:25 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*parsing(char *argv, va_list ap, t_lists *list)
{
	argv++;
	if (*argv == '-' || *argv == '+' || *argv == ' ' || \
			*argv == '#' || *argv == '0')
	{
		argv = ft_flag(argv, list);
		//printf("Address after flag: %s\n", argv);
	}
	if (*argv == '*' || (*argv >= '0' && *argv <= '9'))
	{
		argv = ft_width(argv, ap, list);
		//printf("Address after width: %s\n", argv);
	}
	if (*argv == '.' && (*(argv+1) == '*' || \
				(*(argv+1) >= '0' && *(argv+1) <= '9')))
	{
		argv = ft_accuracy(argv, ap, list);
		//printf("Address after accuracy: %s\n", argv);
	}
	if (*argv == 's')
	{
		list->spec = 's';
		argv++;
		ft_printf_s(va_arg(ap, char *), list);
	}
	if (*argv == 'c')
	{
		ft_putstr(va_arg(ap, const char *));
	}
	//printf("\033[0m--------------------\n");
	//printf("   RESULT: \n");
	//printf("Flag: %s\n", list->flag);
	//printf("Width: %d\n", list->width);
	//printf("Accuracy: %d\n", list->accouracy);
	return (argv);
}
