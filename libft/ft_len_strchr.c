/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 11:10:09 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/30 11:56:00 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	ft_len_strchr(char *s, int c, int len)
{
	char	ch_a;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ch_a = (char)c;
	while (s[j] != '\0' && s[j] != ch_a && (i < len))
	{
		i++;
		j++;
	}
	if (s[j] == ch_a)
		return (s[j]);
	else
		return (0);
}