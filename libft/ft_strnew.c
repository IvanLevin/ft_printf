/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:16:24 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/29 16:45:52 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = (void *)malloc(size + 1);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = '\0';
		i++;
	}
	arr[i] = '\0';
	return ((char *)arr);
}
