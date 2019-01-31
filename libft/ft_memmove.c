/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:32:38 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/31 15:02:23 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	i = 0;
	arr1 = (unsigned char *)src;
	arr2 = (unsigned char *)dst;
	if (src > dst)
		while (i < n)
		{
			arr2[i] = arr1[i];
			i++;
		}
	if (dst > src)
		while (n)
		{
			n--;
			arr2[n] = arr1[n];
		}
	return (arr2);
}
