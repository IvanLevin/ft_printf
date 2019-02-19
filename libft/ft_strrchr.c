/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:03:00 by gkshleri          #+#    #+#             */
/*   Updated: 2019/02/19 10:47:01 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*arr;
	char	*check;

	check = NULL;
	ch = (char)c;
	arr = (char *)s;
	while (*arr != '\0')
	{
		if (*arr == ch)
			check = arr;
		arr++;
	}
	if (*arr == ch)
		return (arr);
	else
		return (check);
}
