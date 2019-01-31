/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:31:58 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/31 14:52:43 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 > 127 || (unsigned char)*s2 > 127)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
